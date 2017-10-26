/// <summary>
/// @Author Eoin Abbey-Maher
/// </summary>
/// 
#include "FiniteStateMachine.h"

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
