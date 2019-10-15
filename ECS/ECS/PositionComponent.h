#include "Component.h"

class PositionComponent :public Component
{
public:
	PositionComponent() : position(100) {}
	int getPosistion() { return position; }
	void setPosition(int position) { this->position = position; }
private:
	int position;

};