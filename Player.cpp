#include "Player.h"
#include <string>

Player::Player()
{
//ctor
}


Player::~Player()
{
//dtor

}
void Player::setName(std::str n)
{
name = n;
}

void Player::setScore(int s)
{
score=s;

}
std:: string Player::getName()
{
return name;
}

int Player::getScore()
{
return score;
}
