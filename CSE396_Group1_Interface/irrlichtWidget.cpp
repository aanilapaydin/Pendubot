#include <irrlicht.h>
#include "irrlichtWidget.h"


/*using namespaces*/
using namespace std;
using namespace irr;
using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;


IrrlichtWidget::IrrlichtWidget()
{
	//input capture objesi
	MEventReceiver receiver;
	//Root objeyi oluþtur
	device = createDevice(EDT_OPENGL/*device type OPEN_GL de olabilir*/, 
							dimension2d<u32>(1024, 768)/*windows size*/, 
							16/*bits 16 or 32*/,
							false/*is fullscreen?*/, 
							false/*is stencil buffer for drawing shadows*/, 
							false/*vsync, useful in fullscreen*/,
							0/*&receiver*//*object receive events*/);
	if(!device){//obje oluþturulamadý ise
		throw exception("ROOT Obje oluþturulamadý !!!!");
	}
	device->setWindowCaption(L"CSE396_Group1_Interface");
	//kullanýlacak pointerlarý ROOTtan al
	driver = device->getVideoDriver();
	smgr = device->getSceneManager();
	guienv = device->getGUIEnvironment();
	//objeleri yerleþtiriyoruz
	//masayý oluþturuyoruz
	ISceneNode *table = smgr->addMeshSceneNode(smgr->getMesh("media/masa.obj"));
	table->setScale(vector3df(10.0f, 20.0f, 40.0f));
	table->setMaterialFlag(EMF_LIGHTING, false);
	table->setMaterialTexture(0, driver->getTexture("media/wooden.bmp"));
	table->setPosition(vector3df(-6.0f, -2.3f, 0.0f));
	//yeri oluþturuyoruz 
	ISceneNode *floor = smgr->addCubeSceneNode();
	floor->setScale(vector3df(8.0f, 0.1f, 15.0f));
	floor->setMaterialFlag(EMF_LIGHTING, false);
	floor->setMaterialTexture(0, driver->getTexture("media/floor3.bmp"));
	floor->setPosition(vector3df(-6.0f, -22.0f, 0.0f));
	//rootNode diðer objeler buna takýlý olucak
	ISceneNode *rootNode = smgr->addCubeSceneNode();
	rootNode->setScale(vector3df(1.5f, 0.5f, 1.0f));
	rootNode->setMaterialFlag(EMF_LIGHTING, false);
	rootNode->setMaterialTexture(0, driver->getTexture("media/engine.bmp"));
	rootNode->setPosition(vector3df(0.0f, 0.0f, 0.0f));
	//ilk boþ parent
	firstEmpty = smgr->addEmptySceneNode();
	firstEmpty->setScale(vector3df(1.0f, 1.0f, 1.0f));
	firstEmpty->setPosition(vector3df(8.0f, 0.0f, 0.0f));
	//ilk eklem
	ISceneNode *firstNeck = smgr->addSphereSceneNode();
	firstNeck->setScale(vector3df(0.5f, 0.1f, 0.1f));
	firstNeck->setMaterialFlag(EMF_LIGHTING, false);
	firstNeck->setMaterialTexture(0, driver->getTexture("media/firstneck.bmp"));
	firstNeck->setPosition(vector3df(0.0f, 0.0f, 0.0f));
	firstNeck->setParent(firstEmpty);
	//ilk kol
	ISceneNode *firstArm = smgr->addCubeSceneNode();
	firstArm->setScale(vector3df(0.1f, 1.0f, 0.2f));
	firstArm->setMaterialFlag(EMF_LIGHTING, false);
	firstArm->setMaterialTexture(0, driver->getTexture("media/firstarm.bmp"));
	firstArm->setPosition(vector3df(1.0f, -2.0f, 0.0f));
	firstArm->setParent(firstEmpty);
	//ikinci boþ parent
	secondEmpty = smgr->addEmptySceneNode();
	secondEmpty->setScale(vector3df(1.0f, 1.0f, 1.0f));
	secondEmpty->setParent(firstEmpty);
	secondEmpty->setPosition(vector3df(2.0f, -6.0f, 0.0f));
	//ikinci eklem
	ISceneNode *secondNeck = smgr->addSphereSceneNode();
	secondNeck->setScale(vector3df(0.5f, 0.1f, 0.1f));
	secondNeck->setMaterialFlag(EMF_LIGHTING, false);
	secondNeck->setMaterialTexture(0, driver->getTexture("media/secondneck.bmp"));
	secondNeck->setPosition(vector3df(0.0f, 0.0f, 0.0f));
	secondNeck->setParent(secondEmpty);
	//ikinci kol
	ISceneNode *secondArm = smgr->addCubeSceneNode();
	secondArm->setScale(vector3df(0.1f, 1.0f, 0.2f));
	secondArm->setMaterialFlag(EMF_LIGHTING, false);
	secondArm->setMaterialTexture(0, driver->getTexture("media/secondarm.bmp"));
	secondArm->setPosition(vector3df(1.5f, -2.0f, 0.0f));
	secondArm->setParent(secondEmpty);	
	//Objeyi görebilmek için kamera ekliyoruz
	ICameraSceneNode* cam = smgr->addCameraSceneNode(0, vector3df(50,0,0), vector3df(0,0,0));
	//receiver.cam = cam;
	//gui ekranýnda derecelerin gözükmesi
	/*firstDegreeText = guienv->addStaticText(L"First Arm Degree = ", rect<u32>(10,10,300,40), true);
	firstDegreeText->setOverrideFont(guienv->getFont("media/fontcourier.bmp"));
	secondDegreeText = guienv->addStaticText(L"Second Arm Degree = ", rect<u32>(40,40,300,70), true);
	secondDegreeText->setOverrideFont(guienv->getFont("media/fontcourier.bmp"));*/
}

bool IrrlichtWidget::isDeviceRun(){
	return device->run();
}

void IrrlichtWidget::drawScene(float firstDegree, float secondDegree){
	//start scene
	driver->beginScene(true, true, SColor(255,100,101,140));
	//rotate objects
	neckRotateX(firstEmpty, firstDegree);
	neckRotateX(secondEmpty, secondDegree);
	//write degrees to text
	//wchar_t temp[255];
	//swprintf_s(temp, 255, L"First Arm Degree = %f",firstDegree);
	//firstDegreeText->setText(temp);
	//swprintf_s(temp, 255, L"Second Arm Degree = %f",secondDegree);
	//secondDegreeText->setText(temp);
	//draw objects
    smgr->drawAll();
	guienv->drawAll();
	//end scene
    driver->endScene();
}

void IrrlichtWidget::dropDevice(){
	device->drop();
}

/**kolun dönmesini saðlayan fonksiyon*/
void IrrlichtWidget::neckRotateX(ISceneNode *neck, float degree){
	vector3df neckRotation = neck->getRotation();
	neckRotation.X = degree;
	neck->setRotation(neckRotation);
}