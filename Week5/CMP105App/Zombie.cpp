#include "Zombie.h"
#include "Framework\Animation.h"

Zombie::Zombie()
{
	// Setup walk animation.
	walk.addFrame(sf::IntRect(0, 0, 55, 108));
	walk.addFrame(sf::IntRect(55, 0, 55, 108));
	walk.addFrame(sf::IntRect(111, 0, 55, 108));
	walk.addFrame(sf::IntRect(165, 0, 55, 108));
	walk.addFrame(sf::IntRect(220, 0, 55, 108));
	walk.addFrame(sf::IntRect(275, 0, 55, 108));
	walk.addFrame(sf::IntRect(330, 0, 55, 108));
	walk.addFrame(sf::IntRect(385, 0, 55, 108));
	walk.setFrameSpeed(1.f / 10.f);

	currentAnimation = &walk;
	setTextureRect(currentAnimation->getCurrentFrame());
}

void Zombie::handleInput(float dt)
{
	//currentAnimation->animate(dt);
	//setTextureRect(currentAnimation->getCurrentFrame());

	if (input->isKeyDown(sf::Keyboard::Right) == true)
	{
		//std::cout << "Yesis.\n";
		currentAnimation->setFlipped(false);

		currentAnimation = &walk;
		currentAnimation->animate(dt);
		setTextureRect(currentAnimation->getCurrentFrame());

		move(kerchow * dt, 0);
	}

	if (input->isKeyDown(sf::Keyboard::Left) == true)
	{
		//std::cout << "Yesis.\n";
		currentAnimation->setFlipped(true);

		currentAnimation = &walk;
		currentAnimation->animate(dt);
		setTextureRect(currentAnimation->getCurrentFrame());

		move(-kerchow * dt, 0);
	}
}

void Zombie::update(float dt)
{
	setTextureRect(currentAnimation->getCurrentFrame());
}

Zombie::~Zombie()
{

}
