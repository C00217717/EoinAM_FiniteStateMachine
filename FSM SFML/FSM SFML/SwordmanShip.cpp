/// <summary>
/// @Author Eoin Abbey-Maher
/// </summary>

#include "SwordmanShip.h"

SwordmanShip::SwordmanShip()
{
}

SwordmanShip::~SwordmanShip()
{
}

void SwordmanShip::idle(Animation * t_a)
{
	cout << "SwordmanShip" << endl;
	t_a->setCurrent(this);
	delete this;
}
