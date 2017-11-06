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

inline void Animation::idle()
{
	m_current ->idle(this);
}

inline void Animation::jumping()
{
	m_current->jumping(this);
}

inline void Animation::shovelling()
{
	m_current->shovelling(this);
}

inline void Animation::walking()
{
	m_current->walking(this);
}

inline void Animation::swordManShip()
{
	m_current->shovelling(this);
}

 void Animation::hammering()
{
	m_current->hammering(this);
}

