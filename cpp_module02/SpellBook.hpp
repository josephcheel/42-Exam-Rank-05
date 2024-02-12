#pragma once
# include "ASpell.hpp"
# include <map>
# include <iostream>

using namespace std;
// Now, make a SpellBook class, in canonical form, that can't be copied or instantiated
// by copy. It will have the following functions:

// * void learnSpell(ASpell*), that COPIES a spell in the book
// * void forgetSpell(string const &), that deletes a spell from the book, except
//   if it isn't there
// * ASpell* createSpell(string const &), that receives a string corresponding to
//   the name of a spell, creates it, and returns it.

class SpellBook {
	public:
		SpellBook();
		~SpellBook();
		SpellBook(const SpellBook &copy);
		SpellBook &operator=(const SpellBook &copy);
		
		void learnSpell(ASpell *spell);
		void forgetSpell(string const &spell);
		ASpell* createSpell(string const &spell);
	private:
		std::map<std::string, ASpell *> _SpellBook;
};