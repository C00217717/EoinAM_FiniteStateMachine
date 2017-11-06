/// <summary>
/// @Author Eoin Abbey-Maher
/// </summary>

#include "Shovelling.h"

Shovelling::Shovelling()
{
}

Shovelling::~Shovelling()
{
}

void Shovelling::idle(Animation * t_a)
{
	cout << "Idle" << endl;
	t_a->setCurrent(this);
	delete this;
}
