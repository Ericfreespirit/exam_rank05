#ifndef FIRE_H
#define FIRE_H
#include "ASpell.hpp"


class Fireball : public ASpell{
	
public:
	Fireball();
	virtual ~Fireball();

	virtual ASpell * clone();
};

#endif
