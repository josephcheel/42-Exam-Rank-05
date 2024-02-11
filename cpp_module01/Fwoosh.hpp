#pragma once
#include "ASpell.hpp"

class Fwoosh : public ASpell {
	public:
		Fwoosh();
		~Fwoosh();
		// Fwoosh(const Fwoosh& copy);
		// Fwoosh &operator=(const Fwoosh &copy);
		
		ASpell *clone() const;
};