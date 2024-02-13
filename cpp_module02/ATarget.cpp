#include "ATarget.hpp"

ATarget::ATarget(const string &type) : _attribute(type)
{

}

void	ATarget::getHitBySpell(const ASpell &spell) const
{
	cout << _attribute << " has been " << spell.getEffects() << "!" << endl;
}

const string &ATarget::getType() const
{
	return (_attribute);
}