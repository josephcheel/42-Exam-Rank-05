#pragma once

# include <iostream>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"
# include "SpellBook.hpp"
using namespace std;

class Warlock {
	private:
		string _name;
		string _title;
		SpellBook _SpellBook;
	public:
		Warlock(const string &name, const string &title);
		~Warlock();
		void introduce() const;
		const string	&getName() const;
		const string	&getTitle() const;
		void		setTitle(string const &title);

		void	learnSpell(ASpell *learn);
		void	forgetSpell(string name);
		void	launchSpell(string name, const ATarget &target);
	/*
		* learnSpell, takes a pointer to ASpell, that makes the Warlock learn a spell
		* forgetSpell, takes a string corresponding a to a spell's name, and makes the
		Warlock forget it. If it's not a known spell, does nothing.
		* launchSpell, takes a string (a spell name) and a reference to ATarget, that
		launches the spell on the selected target. If it's not a known spell, does
		nothing.
	*/
};