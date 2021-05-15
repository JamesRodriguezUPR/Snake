#include "Entity.h"

Entity::Entity(int x, int y, int width, int height)
{
    this->pos.X = x;
    this->pos.Y = y;
    this->width = width;
    this->height = height;
}
Coord Entity::getPos()
{
    return this->pos;
}
void Entity::setX(int x)
{
    this->pos.X = x;
}
void Entity::setY(int y)
{
    this->pos.Y = y;
}
bool Entity::getKillable()
{
    return this->killable;
}
void Entity::setkillable(bool b)
{
    this->killable = b;
}
int Entity::getWidth()
{
 return this->width;
}
int Entity::getHeight()
{
    return this->height;
}
ofRectangle Entity::getBounds()
{
    return ofRectangle(pos.X,pos.Y, width, height);
}
bool Entity::collides(Entity* entity){
    return this->getBounds().intersects(entity->getBounds());
}
Entity::~Entity()
{
// no need for destructor 
}