/// <summary>
/// @Author Eoin Abbey-Maher
/// </summary>

#include <iostream>

#ifndef FINITESTATEMACHINE
#define FINITESTATEMACHINE

using namespace std;

class State
{
public:
	virtual void idle(Animation *t_a)
	{
		cout << "State::Idling" << endl;	
	}
	virtual void jumping(Animation* t_a)
	{
		cout << "State::Jumping" << endl;
	}
	virtual void shovelling(Animation *t_a)
	{
		cout << "State::Shovelling" << endl;
	}
	virtual void walking(Animation *t_a)
	{
		cout << "State::Walking" << endl;
	}
	virtual void swordManShip(Animation *t_a)
	{
		cout << "State::SwordManShip" << endl;
	}
	virtual void hammering(Animation *t_a)
	{
		cout << "State::hammering" << endl;
	}

private:

};

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



class Jumping : public State
{
public :

};
#endif // !FINITESTATEMACHINE
