#ifndef TARGETG_H
#define TARGETG_H
#include <iostream>
#include <vector>
#include "ATarget.hpp"
class TargetGenerator {

	public:
		TargetGenerator();
		~TargetGenerator();
		
		void learnTargetType(ATarget*);
		void forgetTargetType(std::string const &);
		ATarget* createTarget(std::string const &);
	private:
		TargetGenerator(const TargetGenerator &ref);
		TargetGenerator &operator=(const TargetGenerator &ref);
		std::vector<ATarget*> _targets;
};

#endif
