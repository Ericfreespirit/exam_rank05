#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){};
TargetGenerator::~TargetGenerator(){
	std::vector<ATarget*>::iterator ite = this->_targets.end();
	for(std::vector <ATarget*>::iterator it = this->_targets.begin();it != ite;it++)
			delete *it;
	this->_targets.clear();
};

void TargetGenerator::learnTargetType(ATarget *t){
	std::vector<ATarget*>::iterator ite = this->_targets.end();
	for(std::vector <ATarget*>::iterator it = this->_targets.begin();it != ite;it++)
		if ((*it)->getType() == t->getType())
			return;
	this->_targets.push_back(t->clone());

}
ATarget* TargetGenerator::createTarget(std::string const &str){
	std::vector<ATarget*>::iterator ite = this->_targets.end();
	for(std::vector <ATarget*>::iterator it = this->_targets.begin();it != ite;it++)
		if ((*it)->getType() == str)
			return(*it);
	
	return (NULL);
}
void TargetGenerator::forgetTargetType(std::string const &str){
	std::vector<ATarget*>::iterator ite = this->_targets.end();
	for(std::vector <ATarget*>::iterator it = this->_targets.begin();it != ite;it++)
		if ((*it)->getType() == str){
			delete *it;
			this->_targets.erase(it);
			return;
		}
}
