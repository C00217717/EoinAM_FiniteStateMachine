/// <summary>
/// @Author Eoin Abbey-Maher
/// </summary>

#include "Idle.h"

#ifndef WALKING
#define WALKING

class Walking : public State
{
public:
	Walking();
	~Walking();
	void idle(Animation *t_a);

};

#endif // !WALKING
