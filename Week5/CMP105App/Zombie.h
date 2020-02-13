#pragma once
#include "Framework\GameObject.h"
#include "Framework\Animation.h"

class Zombie : public GameObject
{
protected:
	//Attributes:
	Animation walk;

	Animation* currentAnimation;
	float kerchow = 50.f;

public:
	//Functions:
	Zombie();
	~Zombie();

	void handleInput(float dt) override;
	void update(float dt) override;
};

