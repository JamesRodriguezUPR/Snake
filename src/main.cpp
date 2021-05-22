#include "ofMain.h"
#include "ofApp.h"
#include "Snake.h"

//========================================================================
int main( ){ 
	// block 20x20p
	// 20*50 = 1000 W
	// 20*30 = 600 h
	ofSetupOpenGL(1000,720,OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}
