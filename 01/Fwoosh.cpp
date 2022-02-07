#include "Fwoosh.hpp"
#include "ASpell.hpp"

Fwoosh::Fwoosh(): 
ASpell("Fwoosh", "fwoosh"){
	// this->_name = "Fwoosh";
	// this->_effects = "fwoosh";
}

Fwoosh::~Fwoosh(){}

ASpell * Fwoosh::clone(){
	return (new Fwoosh(*this));
}