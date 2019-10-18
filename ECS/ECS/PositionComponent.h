#include "Component.h"


class PositionComponent :public Component
{
public:
	PositionComponent() : m_position{ 100,100,NULL,NULL } {}
	SDL_Rect getPosistion() { return m_position; }
	void setPosition(SDL_Rect position) { this->m_position = position; }
private:
	SDL_Rect m_position;

};