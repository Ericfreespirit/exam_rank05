#ifndef WARLOCK_H
#define WARLOCK_H
#include <iostream>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock {

public:
	Warlock(std::string name, std::string title);
	~Warlock();
	Warlock(const Warlock &ref);
	Warlock &operator=(const Warlock &ref); 
	
	const std::string getName()const;
	const std::string getTitle()const;
	int	getLibLen()const;
	void	setTitle(const std::string &ref);

	void	introduce()const;
	void	learnSpell(ASpell *spell);
	void	forgetSpell(std::string spell);
	void  launchSpell(std::string spell,const ATarget &ref);

private:
	std::string _name;
	std::string _title;
	std::vector <ASpell*>_spells;
};

#endif