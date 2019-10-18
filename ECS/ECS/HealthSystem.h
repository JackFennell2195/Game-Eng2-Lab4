#include <vector>
#include <iostream>
#include "Entity.h"

class HealthSystem
{
	std::vector<Entity> entities;

public:
	void addEntity(Entity e) { }
	void update()
	{
		std::cout << "HealthSystem Update" << std::endl;
		/* Loop through Entities with */
		/* HealthComponents and Update */
		/* TBI */
	}
};