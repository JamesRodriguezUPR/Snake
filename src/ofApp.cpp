#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
	ofSetFrameRate(10);
	ofSetWindowTitle("Snake Game");
	ofSetBackgroundColor(0,0,20);
	snek = new Snake( 500, 375, 20, 20);
	for(int i = 0; i<34; i++)
	{
		if(i==0||i==33)
		{
			for(int j = 1; j<51; j++)
			{
				blocks.push_back(new Block((20*j)-20,(i*20),20,20));
			}
		} else
		{
			blocks.push_back(new Block(0,(i*20),20,20));
			blocks.push_back(new Block(980,(i*20),20,20));

		}
	}

}

//--------------------------------------------------------------
void ofApp::update()
{
	snek->update();
}

//--------------------------------------------------------------
void ofApp::draw()
{
	for(Block*b: blocks)
	{
		b->draw();
	}
	snek->draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{
	snek->keyPressed(key);
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key)
{

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y )
{

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button)
{

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button)
{

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button)
{

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y)
{

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y)
{

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h)
{

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg)
{

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo)
{ 

}
