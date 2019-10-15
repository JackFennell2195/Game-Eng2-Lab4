#include <vector>
#include <iostream>
#include "Entity.h"

class RenderSystem
{
	std::vector<Entity> entities;

public:
	void addEntity(Entity e) { }
	void update() {
		std::cout << "RenderSystem Update" << std::endl;
	}
};