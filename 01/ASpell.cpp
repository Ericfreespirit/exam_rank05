#include "ASpell.hpp"

ASpell::ASpell(std::string name, std::string effects): 
_name(name),
_effects(effects){}

ASpell::~ASpell(){}
ASpell::ASpell(const ASpell &ref){
	*this = ref;
}

ASpell &ASpell::operator=(const ASpell &ref){
	this->_name = ref._name;
	this->_effects = ref._effects;
	return (*this);
}

const std::string ASpell::getName()const{return (this->_name);}

const std::string ASpell::getEffects()const{return (this->_effects);}

void ASpell::launch(const ATarget &ref)const {
	ref.getHitBySpell(*this);
}
