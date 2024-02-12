# include "Fireball.hpp"

Fireball::Fireball() : ASpell("Fireball", "burnt to a crisp")
{

}

Fireball::~Fireball()
{
	return ;
}

ASpell *Fireball::clone() const
{
	return (new Fireball());
}