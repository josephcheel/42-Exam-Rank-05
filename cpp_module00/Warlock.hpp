#pragma once

#include <iostream>

class Warlock {
	private:
		std::string _name;
		std::string _title;
		Warlock();
		Warlock(const Warlock &copy);
		Warlock	&operator=(const Warlock &copy);
	public:
		Warlock(const std::string &name, const std::string &title);
		~Warlock();
		void introduce() const;
		std::string	getName() const;
		std::string	getTitle() const;
		void		setTitle(std::string const &title);

};