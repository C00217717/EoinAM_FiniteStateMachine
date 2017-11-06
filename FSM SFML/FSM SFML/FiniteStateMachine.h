/// <summary>
/// @Author Eoin Abbey-Maher
/// </summary>



#ifndef FINITESTATEMACHINE
#define FINITESTATEMACHINE

#include <thread>
#include <chrono>

#include <iostream>
#include "Idle.h"

using namespace std;

class State;
class Animation
{
class State* m_current;
public:
	Animation();

	void setCurrent(State* t_s)
	{
		m_current = t_s;
	}
	void idle();
	void jumping();
	void shovelling();
	void walking();
	void swordManShip();
	void hammering();

private:

};



#endif // !FINITESTATEMACHINE
