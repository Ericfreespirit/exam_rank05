#include "SpellBook.hpp"

SpellBook::SpellBook(){};
SpellBook::~SpellBook(){
	std::vector<ASpell*>::iterator ite = this->_spells.end();
	for(std::vector <ASpell*>::iterator it = this->_spells.begin();it != ite;it++)
			delete *it;
	this->_spells.clear();
};

void SpellBook::learnSpell(ASpell *spell){
	std::vector<ASpell*>::iterator ite = this->_spells.end();
	for(std::vector <ASpell*>::iterator it = this->_spells.begin();it != ite;it++)
		if ((*it)->getName() == spell->getName())
			return;
	this->_spells.push_back(spell->clone());
	delete(spell);
}
ASpell* SpellBook::createSpell(std::string const &str){
	std::vector<ASpell*>::iterator ite = this->_spells.end();
	for(std::vector <ASpell*>::iterator it = this->_spells.begin();it != ite;it++)
		if ((*it)->getName() == str)
			return(*it);
	
	return (NULL);
}
void SpellBook::forgetSpell(std::string const &str){
	std::vector<ASpell*>::iterator ite = this->_spells.end();
	for(std::vector <ASpell*>::iterator it = this->_spells.begin();it != ite;it++)
		if ((*it)->getName() == str){
			delete *it;
			this->_spells.erase(it);
			return;
		}
}
