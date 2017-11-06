/// <summary>
/// @Author Eoin Abbey-Maher
/// </summary>

#ifndef SHOVELLING
#define SHOVELLING

#include "Idle.h"

class Shovelling : public State
{
public:
	Shovelling();
	~Shovelling();

	void idle(Animation *t_a);

};
#endif // !SHOVELLING

