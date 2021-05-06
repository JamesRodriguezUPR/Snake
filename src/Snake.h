#ifndef SNAKE_H
#define SNAKE_H

#include "Entity.h"

enum Facing { STOP,UP, DOWN, LEFT, RIGHT};

class Snake: public Entity {
    private:
        Facing facing;
        ofImage i;
    public:
        Snake(int,int,int,int);
        virtual void checkCollision();
        virtual void setFacing(Facing);
        virtual void update();
        virtual void draw();
        virtual void keyPressed(int);
        virtual void keyReleased(int);
        virtual void mousePressed(int, int, int);
        virtual void reset();
        virtual void die();
        ~Snake();
};

#endif
