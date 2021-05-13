#include "ofMain.h"

#ifndef ENTITY_H
#define ENTITY_H

struct Coord {int X; int Y;};
class Entity
{
private:
    Coord pos;
    int width, height;
public:
    Entity(int, int, int, int);
    virtual Coord getPos();
    virtual void setX(int);
    virtual void setY(int);
    virtual void update()=0;
    virtual void draw()=0;
    virtual int getWidth();
    virtual int getHeight();
    virtual ofRectangle getBounds();
    virtual bool collides(Entity*);
    ~Entity();
};

#endif
