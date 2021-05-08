#ifndef BLOCK_H
#define BLOCK_H

#include "Entity.h"

class Block: public Entity
{
    private:
    ofImage i;
public:
    Block(int,int,int,int);
    virtual void update();
    virtual void draw();
    ~Block();
};

#endif