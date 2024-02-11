#pragma once

# include <iostream>
# include "ASpell.hpp"

class ASpell;

class ATarget {
	protected:
		std::string _attribute;
	public:
		ATarget();
		ATarget(const ATarget &copy);
		ATarget &operator=(const ATarget &copy);

		ATarget(const std::string &type);
		virtual ~ATarget() {};

		void	getHitBySpell(const ASpell &spell) const;
		const std::string &getType() const;
		virtual ATarget *clone() const = 0;
};