#pragma once

#include "Room.h"

class HResources
{
private:
	static HResources* instance;

public:
	static Room* ROOM_TEST;

	static sf::Image GFX_CHAR;

	static sf::Image GFX_ROOM_TEST;

	HResources(void);
	~HResources(void);

	static HResources* getInstance();

	static Room* Room_Load(const char* url);
};

