#ifndef WARLOCK_H
#define WARLOCK_H
#include <iostream>

class Warlock {

public:
	Warlock(std::string name, std::string title);
	~Warlock();
	Warlock(const Warlock &ref);
	Warlock &operator=(const Warlock &ref); 
	
	const std::string getName()const;
	const std::string getTitle()const;
	void	setTitle(const std::string &ref);

	void introduce()const;

private:
	std::string _name;
	std::string _title;

};

#endif