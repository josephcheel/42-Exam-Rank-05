#include "ATarget.hpp"

ATarget::ATarget(const std::string &type) : _attribute(type)
{

}

void	ATarget::getHitBySpell(const ASpell &spell) const
{
	std::cout << _attribute << " has been " << spell.getEffects() << "!" << std::endl;
}

const std::string &ATarget::getType() const
{
	return (_attribute);
}