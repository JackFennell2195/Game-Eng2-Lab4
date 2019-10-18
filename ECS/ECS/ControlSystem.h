#include <vector>
#include <iostream>
#include "Entity.h"

class ControlSystem
{
	std::vector<Entity> entities;

public:
	void addEntity(Entity e) { }
	void update() 
	{
		std::cout << "ControlSystem Update" << std::endl;
		/* Loop through Entities with */
		/* ControlComponents and Update */
		/* TBI */
	}
};