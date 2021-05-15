#include "Block.h"

Block::Block(int x,int y,int width,int height):Entity(x,y,width,height)
{
    i.load("/images/block.png");
    setkillable(false);
}
void Block::update()
{

}
void Block::draw()
{
    this->i.draw(getPos().X,getPos().Y);
}
Block::~Block()
{

}