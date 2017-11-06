/// <summary>
/// @Author Eoin Abbey-Maher
/// </summary>

#ifndef JUMPING
#define JUMPING

#include "Idle.h"

class Jumping : public State
{
public:
	Jumping();
	~Jumping();
	void idle(Animation *t_a);

};
#endif // !JUMPING

