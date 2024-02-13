#pragma once

# include <iostream>
# include "ASpell.hpp"

using namespace std;

class ASpell;

class ATarget {
	protected:
		string _attribute;
	public:
		ATarget();

		ATarget(const string &type);
		virtual ~ATarget() {};

		void	getHitBySpell(const ASpell &spell) const;
		const string &getType() const;
		virtual ATarget *clone() const = 0;
};