#include "Entity.h"
#ifndef FRUIT_H
#define FRUIT_H

class Fruit: public Entity
{
private:
    ofImage i;
public:
    Fruit(int, int, int, int);
    virtual void update();
    virtual void draw();
    ~Fruit();
};



#endif