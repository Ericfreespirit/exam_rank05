#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title): 
_name(name),
_title(title)
{
	std::cout << this->_name << ": This looks like another borign day.";
	std::cout << std::endl;
}

Warlock::~Warlock(){
	std::cout << this->_name << ": My job here is done!";
	std::cout << std::endl;
}

Warlock::Warlock(const Warlock &ref){
	*this = ref;
}

Warlock &Warlock::operator=(const Warlock &ref){
	this->_name = ref._name;
	this->_title = ref._title;
	return (*this);
}

const std::string Warlock::getName()const {return (this->_name);}

const std::string Warlock::getTitle()const{return (this->_title);}

void	Warlock::setTitle(const std::string &ref){
	this->_title = ref;
}

void Warlock::introduce()const{
	std::cout << this->_name << ": I am " << this->_name << ", ";
	std::cout << this->_title << " !" << std::endl;
}

void Warlock::learnSpell(ASpell *spell){
	if (!spell)
		return;
	this->sb.learnSpell(spell);
}

void  Warlock::launchSpell(std::string str, const ATarget &ref){
	ASpell *sp = this->sb.createSpell(str);	
	if (sp)
		sp->launch(ref);
}
void	Warlock::forgetSpell(std::string spell){
	this->sb.forgetSpell(spell);
}
