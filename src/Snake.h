#ifndef SNAKE_H
#define SNAKE_H

#include "Entity.h"

enum Facing { 
    STOP = 0,
    UP = 1, 
    DOWN = 2, 
    LEFT = 3, 
    RIGHT = 4};

class Snake: public Entity {
    private:
        Facing facing;
        bool alive = true;
        ofImage sprite, up, down, left, right;
        int length;
    public:
        Snake(int,int,int,int);
        virtual void setFacing(int);
        virtual void update();
        virtual void draw();
        virtual void keyPressed(int);
        virtual void keyReleased(int);
        virtual void mousePressed(int, int, int);
        virtual void reset();
        virtual void grow();
        virtual void moveS();
        virtual void die();
        ~Snake();
};

#endif
