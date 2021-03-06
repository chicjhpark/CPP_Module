#include "Animal.hpp"

Animal::Animal(void) : _type("")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal& ref) : _type(ref._type)
{
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal&	Animal::operator=(const Animal& ref)
{
	_type = ref._type;
	return *this;
}

std::string	Animal::getType(void) const
{
	return _type;
}

void	Animal::setType(std::string type)
{
	_type = type;
}
