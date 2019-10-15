#include <iostream>
#include "Entity.h"
#include "HealthComponent.h"
#include "InputComponent.h"
#include "PositionComponent.h"


int main(void*)
{
	Entity player;
	HealthComponent hc;
	player.addComponent(hc);

	

	while (true) {
		
	}

	return 0;
}