/// <summary>
/// @Author Eoin Abbey-Maher
/// </summary>

#include "Walking.h"
#include "Idle.h"

Walking::Walking()
{
}

Walking::~Walking()
{
}

void Walking::idle(Animation * t_a)
{
	cout << "Idle" << endl;
	t_a->setCurrent(new Idle());
	delete this;
}
