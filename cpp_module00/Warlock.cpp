#include "Warlock.hpp"

Warlock::Warlock(const string &name, const string &title) : _name(name), _title(title) 
{
	cout << _name << ": This looks like another boring day." << endl;
}

Warlock::~Warlock()
{
	cout << _name << ": My job here is done!" << endl;
}

void Warlock::introduce() const
{
	cout << _name << ": I am " << _name << ", " << _title << "!" << endl;
}

const string	&Warlock::getName() const
{
	return (_name);
}

const std::string	&Warlock::getTitle() const
{
	return (_title);
}

void		Warlock::setTitle(string const &title)
{
	_title = title;
}