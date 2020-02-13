#pragma once
#include "Framework/GameObject.h"
#include "Framework/Animation.h"

class Zomb : public GameObject
{
private:
	//Attributes:
	Animation walk;
	GameObject zommy;

public:
	//Functions:
	void update(float dt) override;

	Zomb();
	~Zomb();
};

