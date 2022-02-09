#include "Dummy.hpp"

Dummy::Dummy():
ATarget("Target Practic Dummy"){
	// this->_type = "Target Practic Dummy";
}

Dummy::~Dummy(){};

Dummy *Dummy::clone(){
	return (new Dummy(*this));
}