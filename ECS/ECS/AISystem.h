#include <vector>
#include <iostream>
#include "Entity.h"

class AISystem
{
	std::vector<Entity> entities;

public:
	void addEntity(Entity e) { }
	void update() {
		std::cout << "AISystem Update" << std::endl;
	}
};