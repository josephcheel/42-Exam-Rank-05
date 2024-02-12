#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title) : _name(name), _title(title) 
{
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << _name << ": My job here is done!" << std::endl;
}

void Warlock::introduce() const
{
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

const std::string	&Warlock::getName() const
{
	return (_name);
}

const std::string	&Warlock::getTitle() const
{
	return (_title);
}

void		Warlock::setTitle(std::string const &title)
{
	_title = title;
}

void	Warlock::learnSpell(ASpell *learn)
{
	_SpellBook.learnSpell(learn);
}

void	Warlock::forgetSpell(std::string name)
{
	_SpellBook.forgetSpell(name);
}

void	Warlock::launchSpell(std::string name, const ATarget &target)
{
	if (_SpellBook.createSpell(name))
		_SpellBook.createSpell(name)->launch(target);
}
