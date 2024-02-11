#pragma once

#include <iostream>

class Warlock {
	private:
		std::string _name;
		std::string _title;
	public:
		Warlock(const std::string &name, const std::string &title);
		~Warlock();
		void introduce() const;
		const std::string	&getName() const;
		const std::string	&getTitle() const;
		void		setTitle(std::string const &title);

};