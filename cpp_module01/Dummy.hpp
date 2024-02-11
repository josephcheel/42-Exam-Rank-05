#pragma once
# include "ATarget.hpp"

class Dummy : public ATarget {
	public:
		Dummy();
		~Dummy();
		// Dummy(const Dummy& copy);
		// Dummy &operator=(const Dummy &copy);
		
		ATarget *clone() const;
};