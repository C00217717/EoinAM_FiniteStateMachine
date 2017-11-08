/// <summary>
/// @Author Eoin Abbey-Maher
/// </summary>


#include "FiniteStateMachine.h"


/// <summary>
/// Animation Class Functions
/// </summary>
Animation::Animation()
{
	m_current = new Idle();
}

 void Animation::idle()
{
	m_current ->idle(this);
}

 void Animation::jumping()
{
	m_current->jumping(this);
}

 void Animation::shovelling()
{
	m_current->shovelling(this);
}

 void Animation::walking()
{
	m_current->walking(this);
}

 void Animation::swordManShip()
{
	m_current->shovelling(this);
}

 void Animation::hammering()
{
	m_current->hammering(this);
}

