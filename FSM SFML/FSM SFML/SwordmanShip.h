#ifndef SWORDSMANSHIP
#define SWORDSMANSHIP


#include "Idle.h"

class SwordmanShip : public State
{
public:

	SwordmanShip();
	~SwordmanShip();
	void idle(Animation* t_a);
};


#endif // !SWORDSMANSHIP

