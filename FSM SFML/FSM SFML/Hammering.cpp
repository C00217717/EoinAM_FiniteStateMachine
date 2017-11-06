/// <summary>
/// @Author Eoin Abbey-Maher
/// </summary>

#include "Hammering.h"

Hammering::Hammering()
{
}

Hammering::~Hammering()
{
}

void Hammering::idle(Animation * t_a)
{
	cout << "idle" << endl;
	t_a->setCurrent(this);
	delete this;
}
