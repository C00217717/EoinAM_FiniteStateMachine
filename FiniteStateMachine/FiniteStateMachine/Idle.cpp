/// <summary>
/// Idle SubClass Functions
/// </summary>

#include "Idle.h"

Idle::Idle()
{
	cout << "Idle" << endl;
}

Idle::~Idle()
{
}

void Idle::walking(Animation * t_a)
{
	cout << "Walking" << endl;
	t_a->setCurrent(new Idle());
	delete this;
}

void Idle::swordsmanShip(Animation * t_a)
{
	cout << "SwordManShip" << endl;
	t_a->setCurrent(new Idle());
	delete this;
}

void Idle::hammering(Animation * t_a)
{
	cout << "Hammering" << endl;
	t_a->setCurrent(new Idle());
	delete this;
}

void Idle::jumping(Animation * t_a)
{
	cout << "Jumping" << endl;
	t_a->setCurrent(new Idle());
	delete this;
}

void Idle::shovelling(Animation * t_a)
{
	cout << "Shovelling" << endl;
	t_a->setCurrent(new Idle());
	delete this;
}
