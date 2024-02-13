# include "ASpell.hpp"

ASpell::ASpell(const string &name, const string &effects) : _name(name), _effects(effects)
{
	
}

ASpell::ASpell(const ASpell &copy)
{
	*this = copy;
}

ASpell &ASpell::operator=(const ASpell &copy)
{
	if (this != &copy)
	{
		_name = copy._name;
		_effects = copy._effects;
	}
	return (*this);
}


const string	&ASpell::getName() const
{
	return (_name);
}

const string	&ASpell::getEffects() const
{
	return (_effects);
}

void	ASpell::launch(const ATarget &target) const
{
	target.getHitBySpell(*this);
}