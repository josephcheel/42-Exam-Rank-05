#pragma once

# include <iostream>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"
# include "SpellBook.hpp"


class Warlock {
	private:
		std::string _name;
		std::string _title;
		SpellBook _SpellBook;
	public:
		Warlock(const std::string &name, const std::string &title);
		~Warlock();
		void introduce() const;
		const std::string	&getName() const;
		const std::string	&getTitle() const;
		void		setTitle(std::string const &title);

		void	learnSpell(ASpell *learn);
		void	forgetSpell(std::string name);
		void	launchSpell(std::string name, const ATarget &target);

// 		* learnSpell, takes a pointer to ASpell, that makes the Warlock learn a spell
// * forgetSpell, takes a string corresponding a to a spell's name, and makes the
//   Warlock forget it. If it's not a known spell, does nothing.
// * launchSpell, takes a string (a spell name) and a reference to ATarget, that
//   launches the spell on the selected target. If it's not a known spell, does
//   nothing.

};