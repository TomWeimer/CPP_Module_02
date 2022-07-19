#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->value_ = 0;
}

Fixed::Fixed(int const param)
{
	std::cout << "Int constructor called" <<std::endl;
	this->value_ = param << this->nbBits_;

}

Fixed::Fixed(const float nb)
{
	std::cout << "Float constructor called" << std::endl;
	this->value_ = (int)(roundf)(nb * (1 << this->nbBits_));
}

Fixed::Fixed(const Fixed& normal)
{
	std::cout << "Copy constructor called"<< std::endl;
	*this = normal;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& nb)
{
	std::cout << "Copy assignment operator called"<<std::endl;
	if (this != &nb)
	{
		this->value_ = nb.getRawBits();
	}
	return *this;
}

int Fixed::getRawBits(void)const
{
	std::cout << "getRawBits member function called"<<std::endl;
	return (this->value_);
}
void Fixed::setRawBits(int numbers)
{
	std::cout << "setRawBits member function called"<<std::endl;
	this->value_= numbers;
}
std::ostream& operator<<(std::ostream& out, const Fixed& origin)
{
	out << origin.toFloat();
	return (out);
}

float Fixed::toFloat(void)const
{
	return((float)this->value_ / (1 << this->nbBits_));
}

int Fixed::toInt(void)const
{
	return(this->value_ >> this->nbBits_);
}

