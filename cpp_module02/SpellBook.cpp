# include "SpellBook.hpp"

SpellBook::SpellBook()
{
}

SpellBook::~SpellBook()
{
	for (std::map<string, ASpell *>::iterator it = _SpellBook.begin(); it != _SpellBook.end(); it++) {
		delete it->second;
	}
	_SpellBook.clear();
}

SpellBook::SpellBook(const SpellBook &copy)
{
	*this = copy;
}

SpellBook &SpellBook::operator=(const SpellBook &copy)
{
	if (this != &copy)
	{
		for (std::map<string, ASpell *>::iterator it = _SpellBook.begin(); it != _SpellBook.end(); it++) {
			_SpellBook.erase(it);
		}
		_SpellBook.clear();
		_SpellBook = copy._SpellBook;
	}
	return (*this);
}

void SpellBook::learnSpell(ASpell *spell)
{
	if (spell)
		if (_SpellBook.find(spell->getName()) == _SpellBook.end())
			_SpellBook[spell->getName()] = spell;
}

void SpellBook::forgetSpell(string const &name)
{
	std::map<string, ASpell*>::iterator find = _SpellBook.find(name);
	if (find != _SpellBook.end())
		_SpellBook.erase(find);
}

ASpell* SpellBook::createSpell(string const &name)
{
	ASpell *tmp = NULL;
	if (_SpellBook.find(name) != _SpellBook.end())
		tmp = _SpellBook[name];
	return (tmp);
}