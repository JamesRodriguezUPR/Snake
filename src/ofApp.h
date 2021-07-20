#pragma once

#include "ofMain.h"
#include "Snake.h"
#include "Block.h"
#include "Fruit.h"
#include <vector>

class ofApp : public ofBaseApp{

private:
	vector<Entity*> Entities;
	vector<Block*> blocks;
	Snake *snek;
	Fruit * fruit;

public:
// main 3 functions used for OF Apps
	void setup();
	void update();
	void draw();
// game logic
	void checkCollision();
	void spawnBlocks();
	void spawnSnek();
	void spawnFruit();
	void spawnEntitties();
// mostly event handlers
	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y );
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void mouseEntered(int x, int y);
	void mouseExited(int x, int y);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);
		
};
