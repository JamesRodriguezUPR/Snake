#include "Fruit.h"
Fruit::Fruit(int x, int y, int width, int height):Entity(x,y,width,height)
{
    i.load("/images/fruit.png");
    setkillable(true);
}
void Fruit::update()
{

}
void Fruit::draw(){
    this->i.draw(getPos().X, getPos().Y);
}
Fruit::~Fruit()
{

}
