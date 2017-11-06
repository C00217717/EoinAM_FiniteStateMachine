/// <summary>
/// @Author Eoin Abbey-Maher
/// </summary>

#include "Jumping.h"

Jumping::Jumping()
{
}

Jumping::~Jumping()
{
}

void Jumping::idle(Animation *t_a)
{
	cout << "Idle" << endl;
	t_a->setCurrent(new Idle());
	delete this;

}
