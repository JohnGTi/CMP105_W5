#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	zombTexture.loadFromFile("gfx/animZombie.png");
	zombie.setSize(sf::Vector2f(55, 108));
	zombie.setPosition(100, 100);
	zombie.setTexture(&zombTexture);
	zombie.setInput(input);

	MarioTexture.loadFromFile("gfx/MarioSheetT.png");
	redGoii.setSize(sf::Vector2f(30, 42));
	redGoii.setPosition(500, 500);
	redGoii.setTexture(&MarioTexture);
	redGoii.setInput(input);
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	zombie.handleInput(dt);
	redGoii.handleInput(dt);
}

// Update game objects
void Level::update(float dt)
{
	zombie.update(dt);
	redGoii.update(dt);
}

// Render level
void Level::render()
{
	beginDraw();
	window->draw(zombie);
	window->draw(redGoii);
	endDraw();
}

// clear back buffer
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}