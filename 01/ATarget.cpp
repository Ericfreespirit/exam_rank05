#include "ATarget.hpp"


ATarget::ATarget(std::string type): 
_type(type){}
ATarget::~ATarget(){}

ATarget::ATarget(const ATarget &ref){
	*this = ref;
}

ATarget &ATarget::operator=(const ATarget &ref){
	this->_type = ref._type;
	return (*this);
}

const std::string ATarget::getType()const{return (this->_type);}

void	ATarget::getHitBySpell(const ASpell &ref)const {
	std::cout << this->_type << " has been " << ref.getEffects() << " !";
	std::cout << std::endl;
}