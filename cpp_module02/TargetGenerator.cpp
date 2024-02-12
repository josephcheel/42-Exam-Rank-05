# include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{

}
TargetGenerator::~TargetGenerator()
{

}

void TargetGenerator::learnTargetType(ATarget* target)
{
	if (target)
		if (_Generator.find(target->getType()) == _Generator.end())
			_Generator[target->getType()] = target;
}

void TargetGenerator::forgetTargetType(string const &type)
{
	if (_Generator.find(type) != _Generator.end())
		_Generator.erase(type);
}

ATarget* TargetGenerator::createTarget(string const &type)
{
	ATarget *tmp = NULL;
	if (_Generator.find(type) != _Generator.end())
		tmp = _Generator[type];
	return (tmp);
}