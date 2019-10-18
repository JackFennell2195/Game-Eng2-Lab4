#define SDL_MAIN_HANDLED
#include <iostream>
#include "SDL.h"
#include "Entity.h"
#include "HealthComponent.h"
#include "InputComponent.h"
#include "PositionComponent.h"
#include "HealthSystem.h"
#include "ControlSystem.h"
#include "AISystem.h"
#include "RenderSystem.h"


int main(void*)
{
	SDL_Init(SDL_INIT_EVERYTHING);

	//Entities deceleration
	Entity player;
	Entity alien;
	Entity dog;
	Entity cat;

	//Component deceleration
	HealthComponent hc;
	PositionComponent pc;
	InputComponent ic;

	//Systems deceleration
	ControlSystem cs;
	RenderSystem rs;
	AISystem ai;
	HealthSystem hs;

	
	player.addComponent(hc);
	player.addComponent(pc);
	player.addComponent(ic);

	alien.addComponent(hc);
	alien.addComponent(pc);

	dog.addComponent(hc);
	dog.addComponent(pc);

	cat.addComponent(pc);


	cs.addEntity(player);
	rs.addEntity(player);
	ai.addEntity(player);
	hs.addEntity(player);

	cs.addEntity(alien);
	rs.addEntity(alien);
	ai.addEntity(alien);
	hs.addEntity(alien);

	cs.addEntity(dog);
	rs.addEntity(dog);
	ai.addEntity(dog);
	hs.addEntity(dog);

	cs.addEntity(cat);
	rs.addEntity(cat);
	ai.addEntity(cat);

	while (true) 
	{
		cs.update();
		rs.update();
		ai.update();
		hs.update();
		std::cout << "---------------" << std::endl;
	}

	return 0;
}