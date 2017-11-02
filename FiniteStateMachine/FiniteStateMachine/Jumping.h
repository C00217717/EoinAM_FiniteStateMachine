/// <summary>
/// @Author Eoin Abbey-Maher
/// </summary>

#include "FiniteStateMachine.h"

#ifndef JUMPING
#define JUMPING

class Jumping : public State
{
public:
	Jumping();
	~Jumping();
	void idle(Animation *t_a);

};
#endif // !JUMPING

