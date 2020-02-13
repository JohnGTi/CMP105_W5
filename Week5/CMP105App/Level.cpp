#include "Level.h"
#include "Zomb.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	zombTexture.loadFromFile("gfx/animZombie2.png");
	zommy.setSize(sf::Vector2f(55, 108));
	zommy.setPosition(100, 100);
	zommy.setTexture(&zombTexture);
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{

}

// Update game objects
void Level::update(float dt)
{
	zommy.update(dt);
}

// Render level
void Level::render()
{
	beginDraw();
	window->draw(zommy);
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