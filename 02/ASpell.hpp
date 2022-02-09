#ifndef ASPELL_H
#define ASPELL_H
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell {
public:
	ASpell(std::string name, std::string effects);
	virtual ~ASpell();
	ASpell(const ASpell &ref);
	ASpell &operator=(const ASpell &ref);


const std::string getName()const;
const std::string getEffects()const;

void launch(const ATarget &ref)const ;

virtual ASpell * clone() = 0;


protected:
	std::string _name;
	std::string _effects;
};
#endif