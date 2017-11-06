/// <summary>
/// @Author Eoin Abbey-Maher
/// </summary>

#ifndef STATE
#define STATE

using namespace std;
#include "FiniteStateMachine.h"

class Animation;
class State
{
public:
	virtual void idle(Animation* a)
	{
		cout << "State::Idling" << endl;
	}

	virtual void hammering(Animation* a)
	{
		cout << "State::hammering" << endl;
	}

	virtual void jumping(Animation* a)
	{
		cout << "State::Jumping" << endl;
	}

	virtual void swordsmanship(Animation* a)
	{
		cout << "State::Swordsmanship" << endl;
	}

	virtual void walking(Animation* a)
	{
		cout << "State::walking" << endl;
	}

	virtual void shovelling(Animation* a)
	{
		cout << "State::Shovelling" << endl;
	}
};

#endif // !STATE

