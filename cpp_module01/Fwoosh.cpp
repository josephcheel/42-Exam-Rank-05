# include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed")
{

}

Fwoosh::~Fwoosh()
{
	return ;
}

ASpell *Fwoosh::clone() const
{
	return (new Fwoosh());
}