#include "Component.h"

class InputComponent :public Component
{
public:
	InputComponent() : input(100) {}
	int getInput() { return input; }
	void setInput(int input) { this->input = input; }
private:
	int input;

};