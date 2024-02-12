# include "Polymorph.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "turned into a critter")
{

}

Polymorph::~Polymorph()
{
	return ;
}

ASpell *Polymorph::clone() const
{
	return (new Polymorph());
}