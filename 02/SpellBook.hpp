#ifndef BOOK_H
#define BOOK_H
#include "ASpell.hpp"
#include <vector>

class SpellBook {

	public:
		SpellBook();
		~SpellBook();
		
		void learnSpell(ASpell*);
		void forgetSpell(std::string const &);
		ASpell* createSpell(std::string const &);
	private:
		SpellBook(const SpellBook &ref);
		SpellBook &operator=(const SpellBook &ref);
		std::vector<ASpell*> _spells;
};

#endif
