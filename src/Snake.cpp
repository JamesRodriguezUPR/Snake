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
void Snake::setFacing(int f)
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
    case 'x':
        this->facing = STOP;
        break;
    }
}
void Snake::update()
{
    if(alive) this->moveS();

}
void Snake::draw()
{
    if(alive)
    {
        switch (this->facing)
        {
            case Facing::UP:
                this->up.draw(getPos().X,getPos().Y);
                break;
            case Facing::DOWN:
                this->down.draw(getPos().X,getPos().Y);
                break;
            case Facing::LEFT:
                this->left.draw(getPos().X,getPos().Y);
                break;
            case Facing::RIGHT:
                this->right.draw(getPos().X,getPos().Y);
                break;
            case Facing::STOP:
                this->up.draw(getPos().X,getPos().Y);
                break;
        }
    }
}

void Snake::keyPressed(int k)
{
    setFacing(k);
}
void Snake::keyReleased(int)
{

}
void Snake::mousePressed(int, int, int)
{

}
void Snake::reset()
{
    this->alive=true;
    setFacing('x');
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
        this->setY(this->getPos().Y - 21);
        break;
    case Facing::DOWN:
        this->setY(this->getPos().Y + 21);
        break;
    case Facing::LEFT:
        this->setX(this->getPos().X - 21);
        break;
    case Facing::RIGHT:
        this->setX(this->getPos().X + 21);
        break;
    case Facing::STOP: break;
    }
}
void Snake::die()
{
    this->alive = false;
}
Snake::~Snake()
{

}