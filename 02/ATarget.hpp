#ifndef ATARGET_H
#define ATARGET_H
#include <iostream>
#include  "ASpell.hpp"
#include <iostream>

class ASpell;

class ATarget {

public:
	ATarget(std::string type);
	virtual	~ATarget();
	ATarget(const ATarget &ref);
	ATarget &operator=(const ATarget &ref);

	const std::string getType()const;
	virtual ATarget *clone() = 0;
	void	getHitBySpell(const ASpell &ref)const ;

protected:
	std::string _type;
};
#endif
