#ifndef POLY_H
#define POLY_H
#include "ASpell.hpp"

class Polymorph : public ASpell{
public:
	Polymorph();
	virtual	~Polymorph();

	virtual ASpell * clone();
};

#endif
