#include "BrotherOfLuigi.h"

BrotherOfLuigi::BrotherOfLuigi()
{
	walk.addFrame(sf::IntRect(0, 0, 15, 21));
	walk.addFrame(sf::IntRect(15, 0, 15, 21));
	walk.addFrame(sf::IntRect(30, 0, 15, 21));
	walk.addFrame(sf::IntRect(45, 0, 15, 21));
	walk.setFrameSpeed(1.f / 20.f);
	
	swim.addFrame(sf::IntRect(0, 21, 16, 20));
	swim.addFrame(sf::IntRect(16, 21, 16, 20));
	swim.addFrame(sf::IntRect(32, 21, 16, 20));
	swim.setFrameSpeed(1.f / 4.f);

	duck.addFrame(sf::IntRect(0, 42, 16, 20));
	duck.addFrame(sf::IntRect(16, 42, 16, 20));
	duck.setFrameSpeed(1.f / 4.f);
	
	currentAnimation = &walk;
	setTextureRect(currentAnimation->getCurrentFrame());
}

BrotherOfLuigi::~BrotherOfLuigi()
{

}

void BrotherOfLuigi::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::D))
	{
		currentAnimation->animate(dt);
		currentAnimation = &walk;
		setTextureRect(currentAnimation->getCurrentFrame());
	}

	if (input->isKeyDown(sf::Keyboard::S))
	{
		currentAnimation->animate(dt);
		currentAnimation = &duck;
		setTextureRect(currentAnimation->getCurrentFrame());
	}
	else {
		currentAnimation = &walk;
		setTextureRect(currentAnimation->getCurrentFrame());
	}
}

void BrotherOfLuigi::update(float dt)
{

}
