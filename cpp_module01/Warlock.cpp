#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title) : _name(name), _title(title) 
{
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << _name << ": My job here is done!" << std::endl;
	for (std::map<std::string, ASpell*>::iterator it = _spellBook.begin(); it != _spellBook.end(); ++it) {
		delete it->second;
	}
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
	if (learn)
		if (_spellBook.find(learn->getName()) == _spellBook.end())
			_spellBook[learn->getName()] =  learn->clone();
}

void	Warlock::forgetSpell(std::string name)
{
	if (_spellBook.find(name) != _spellBook.end())
	{
		delete [] _spellBook[name];
		_spellBook.erase(_spellBook.find(name));
	}
}

void	Warlock::launchSpell(std::string name, const ATarget &target)
{

	if (_spellBook.find(name) != _spellBook.end())
		_spellBook[name]->launch(target);
}
