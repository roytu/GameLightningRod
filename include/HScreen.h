#pragma once

#include "SFML/Graphics.hpp"

class HScreen
{
private:
	static HScreen* instance;

	sf::RenderWindow* screen;
	static const int SCREEN_BPP = 32;
public:
	static sf::Color BACKGROUND_COLOR;
	static const int SCREEN_WIDTH = 800;
	static const int SCREEN_HEIGHT = 600;

	HScreen(void);
	~HScreen(void);

	static HScreen* getInstance();
	static sf::RenderWindow* getScreen();
};
