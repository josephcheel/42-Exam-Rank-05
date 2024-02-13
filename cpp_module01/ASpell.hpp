#pragma once

# include <iostream>
# include "ATarget.hpp"
using namespace std;

class ATarget;

class ASpell {
	protected:
		string	_name;
		string	_effects;
	public:
		ASpell() {};
		ASpell(const ASpell &copy);
		ASpell &operator=(const ASpell &copy);

		ASpell(const string &name, const string &effects);
		virtual ~ASpell() {};
		
		const string	&getName() const;
		const string	&getEffects() const;

		virtual ASpell		*clone() const = 0;
		void				launch(const ATarget &target) const;

};