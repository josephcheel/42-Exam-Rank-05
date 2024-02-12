#pragma once
# include <iostream>
# include "ATarget.hpp"
# include <map>
using namespace std;

class TargetGenerator {
	public:
		TargetGenerator();
		~TargetGenerator();

		void learnTargetType(ATarget*);
		void forgetTargetType(string const &);
		ATarget* createTarget(string const &);
	private:
		std::map<string, ATarget*> _Generator;
};