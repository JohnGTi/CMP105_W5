#pragma once
#include "Framework\GameObject.h"
#include "Framework\Animation.h"

class BrotherOfLuigi : public GameObject
{
protected:
	//Attributes:
	Animation walk;
	Animation swim;
	Animation duck;

	Animation* currentAnimation;
	float kerchow = 100.f;

public:
	//Functions:
	BrotherOfLuigi();
	~BrotherOfLuigi();

	void handleInput(float dt) override;
	void update(float dt) override;
};

