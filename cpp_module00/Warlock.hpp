#pragma once

#include <iostream>
using namespace std;

class Warlock {
	private:
		string _name;
		string _title;
	public:
		Warlock(const string &name, const string &title);
		~Warlock();
		void introduce() const;
		const string	&getName() const;
		const string	&getTitle() const;
		void		setTitle(string const &title);

};