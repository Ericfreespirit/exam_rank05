#include "Warlock.hpp"
#include "ASpell.hpp"
#include "Fwoosh.hpp"
#include "Dummy.hpp"


int main()
{
	Warlock richard("Richard", "the Titled");

  Dummy const bob;
  Fwoosh* const fwoosh = new Fwoosh();
  Fwoosh* const fwoosh2 = new Fwoosh();


  richard.learnSpell(fwoosh);
  richard.learnSpell(fwoosh2);

  richard.introduce();
  richard.launchSpell("Fwoosh", bob);

  richard.forgetSpell("Fwoosh");
  richard.forgetSpell("Fwoosh");

	richard.launchSpell("Fwoosh", bob);

	delete fwoosh;
	delete fwoosh2;


	return (0);
}