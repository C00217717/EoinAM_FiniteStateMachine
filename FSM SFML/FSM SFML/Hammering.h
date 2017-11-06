/// <summary>
/// @Author Eoin Abbey-Maher
/// </summary>

#ifndef HAMMERING
#define HAMMERING

#include "Idle.h"

class Hammering : public State
{
public:

	Hammering();
	~Hammering();
	void idle(Animation* t_a);
};

#endif // !HAMMERING

