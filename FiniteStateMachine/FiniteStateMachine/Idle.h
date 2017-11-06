/// <summary>
/// @Author Eoin Abbey-Maher
/// </summary>

#ifndef IDLE
#define IDLE

#include "State.h"
#include "FiniteStateMachine.h"
#include "Walking.h"
#include "Jumping.h"
#include "Shovelling.h"
#include "Hammering.h"

class Idle : public State
{
public:
	Idle();
	~Idle();
	void walking(Animation *t_a);
	void jumping(Animation *t_a);
	void shovelling(Animation *t_a);
	void swordsmanShip(Animation *t_a);
	void hammering(Animation *t_a);

};

#endif // !IDLE
