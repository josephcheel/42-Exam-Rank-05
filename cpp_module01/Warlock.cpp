#include "Warlock.hpp"

Warlock::Warlock(const string &name, const string &title) : _name(name), _title(title) 
{
	cout << _name << ": This looks like another boring day." << endl;
}

Warlock::~Warlock()
{
	cout << _name << ": My job here is done!" << endl;
	for (map<string, ASpell*>::iterator it = _spellBook.begin(); it != _spellBook.end(); ++it) {
		delete it->second;
	}
}

void Warlock::introduce() const
{
	cout << _name << ": I am " << _name << ", " << _title << "!" << endl;
}

const string	&Warlock::getName() const
{
	return (_name);
}

const string	&Warlock::getTitle() const
{
	return (_title);
}

void		Warlock::setTitle(string const &title)
{
	_title = title;
}

void	Warlock::learnSpell(ASpell *learn)
{
	if (learn)
		if (_spellBook.find(learn->getName()) == _spellBook.end())
			_spellBook[learn->getName()] =  learn->clone();
}

void	Warlock::forgetSpell(string name)
{
	if (_spellBook.find(name) != _spellBook.end())
	{
		delete [] _spellBook[name];
		_spellBook.erase(_spellBook.find(name));
	}
}

void	Warlock::launchSpell(string name, const ATarget &target)
{

	if (_spellBook.find(name) != _spellBook.end())
		_spellBook[name]->launch(target);
}
