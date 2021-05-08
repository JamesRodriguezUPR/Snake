#include "Snake.h"

Snake::Snake(int x, int y, int width, int height):Entity(x,y,width,height)
{
    this->facing = STOP;
    this->length = 1;
    this->sprite.load("images/snakeheads.png");
    this->up.cropFrom(sprite, 0, 0, 20, 20);
    this->left.cropFrom(sprite, 0, 40, 20, 20);
    this->down.cropFrom(sprite, 0, 20, 20, 20);
    this->right.cropFrom(sprite, 0, 60, 20, 20);
}
void Snake::checkCollision()
{

}
void Snake::setFacing(Facing f)
{
    switch (f)
    {
    case 'w':
        this->facing = UP;
        break;
    case 's':
        this->facing = DOWN;
        break;
    case 'd':
        this->facing = RIGHT;
        break;
    case 'a':
        this->facing = LEFT;
        break;
    }
}
void Snake::update()
{

}
void Snake::draw()
{

}
void Snake::keyPressed(int)
{

}
void Snake::keyReleased(int)
{

}
void Snake::mousePressed(int, int, int)
{

}
void Snake::reset()
{

}
void Snake::grow()
{
    this->length++;
}
void Snake::moveS()
{
    switch (this->facing)
    {
    case Facing::UP:
        this->setY(this->getPos().Y --);
        break;
    case Facing::DOWN:
        this->setY(this->getPos().Y ++);
        break;
    case Facing::LEFT:
        this->setX(this->getPos().X --);
        break;
    case Facing::RIGHT:
        this->setX(this->getPos().X ++);
        break;
    }
}
void Snake::die()
{

}
Snake::~Snake()
{

}