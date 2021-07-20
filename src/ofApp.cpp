#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
	ofSetFrameRate(10);
	ofSetWindowTitle("Snake Game");
	ofSetBackgroundColor(0,0,20);
	spawnEntitties();
	/*
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
	}*/

}

//--------------------------------------------------------------
void ofApp::update()
{
	this->checkCollision();
	snek->update();
}

//--------------------------------------------------------------
void ofApp::draw()
{
	for(Entity*e: Entities)
	{
		e->draw();
	}
	fruit->draw();
	snek->draw();
}

//--------------------------------------------------------------
void ofApp::checkCollision()
{
	for(Entity* e: Entities)
	{
		if(snek->collides(e) && !e->getKillable())
		{
			snek->die();
			break;
		} else if(snek->collides(e) && e->getKillable())
		{
			delete e;	
		}

	}
	if(snek->collides(fruit))
	{
		delete fruit;// will cause segmentation fault
	}
}
//--------------------------------------------------------------

void ofApp::spawnBlocks()
{
	for(int i = 0; i<34; i++)
	{
		if(i==0||i==33)
		{
			for(int j = 1; j<51; j++)
			{
				Entities.push_back(new Block((20*j)-20,(i*20),20,20));
			}
		} else
		{
			Entities.push_back(new Block(0,(i*20),20,20));
			Entities.push_back(new Block(980,(i*20),20,20));

		}
	}
}
//--------------------------------------------------------------

void ofApp::spawnSnek()
{
	this->snek = new Snake( 500, 375, 20, 20);
}
//--------------------------------------------------------------

void ofApp::spawnFruit()
{
	this->fruit = new Fruit( 540, 400,20, 20));
}
//--------------------------------------------------------------

void ofApp::spawnEntitties()
{
	spawnBlocks();
	spawnSnek();
	spawnFruit();
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
