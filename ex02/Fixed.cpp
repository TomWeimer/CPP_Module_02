#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << GREEN << "Fixed point:	" << RESET << "default constructor called" << std::endl;
	this->value_ = 0;
}

Fixed::Fixed(int const param)
{
	std::cout << YEL << "Fixed point:	" << RESET <<  "Int constructor called" <<std::endl;
	this->value_ = param << this->nbBits_;

}

Fixed::Fixed(const float nb)
{
	std::cout << BLUE << "Fixed point:	" << RESET <<  "Float constructor called" << std::endl;
	this->value_ = (int)(roundf)(nb * (1 << this->nbBits_));
}

Fixed::Fixed(const Fixed& normal)
{
	std::cout << PINK << "Fixed point:	" << RESET << "Copy constructor called"<< std::endl;
	*this = normal;
}

Fixed::~Fixed(void)
{
	std::cout << RED << "Fixed point:	" << RESET <<  "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& nb)
{
	std::cout << VIOLET << "Fixed point:	" << RESET << " operator= called"<<std::endl;
	if (this != &nb)
	{
		this->value_ = nb.getRawBits();
	}
	return *this;
}

int Fixed::getRawBits(void)const
{
	// std::cout << "getRawBits member function called"<<std::endl;
	return (this->value_);
}
void Fixed::setRawBits(int numbers)
{
	// std::cout << "setRawBits member function called"<<std::endl;
	this->value_= numbers;
}

float Fixed::toFloat(void)const
{
	return((float)this->value_ / (1 << this->nbBits_));
}

int Fixed::toInt(void)const
{
	return(this->value_ >> this->nbBits_);
}

bool Fixed::operator==(const Fixed & other) const
{
	return (this->value_ == other.getRawBits());
}
bool Fixed::operator!=(const Fixed & other) const
{
	return (!(this->value_ == other.getRawBits()));
}
bool Fixed::operator>(const Fixed &other) const
{
	return (this->value_ > other.getRawBits());
}

bool Fixed::operator<(const Fixed &other) const
{
		return (this->value_ < other.getRawBits());
}

bool Fixed::operator>=(const Fixed &other) const
{
	return (this->value_ >= other.getRawBits());
}

bool Fixed::operator<=(const Fixed &other) const
{
	return (this->value_ <= other.getRawBits());
}

Fixed Fixed::operator+(const Fixed &other)
{
	Fixed tmp = *this;
	tmp.setRawBits(this->value_ + other.getRawBits());
	return(tmp);
}

Fixed Fixed::operator-(const Fixed &other)
{
	Fixed tmp = *this;
	tmp.setRawBits(this->value_ - other.getRawBits());
	return(tmp);
}

Fixed Fixed::operator*(const Fixed &other)
{
	Fixed tmp = *this;
	tmp.setRawBits(this->value_ * other.getRawBits() >> this->nbBits_);
	return(tmp);
}
Fixed Fixed::operator/(const Fixed &other)
{
	Fixed tmp = *this;
	tmp.setRawBits((this->value_ << this->nbBits_) / other.getRawBits());
	return(tmp);
}


Fixed &Fixed::operator--()
{
	
	this->value_--;
	return(*this);
}

Fixed  Fixed::operator--(int)
{
	Fixed tmp = *this;
	this->value_--;
	return(tmp);
}

Fixed &Fixed::operator++()
{
	this->value_++;
	return(*this);
}
Fixed  Fixed::operator++(int)
{
	Fixed tmp = *this;
	this->value_++;
	return(tmp);
}
Fixed &Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return (a);
	return (b);
}
const Fixed &Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return (a);
	return (b);
}
Fixed & Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return (a);
	return (b);
}
const Fixed &Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return (a);
	return (b);
}
std::ostream &operator<<(std::ostream &out, const Fixed &fixe)
{
    out << fixe.toFloat();
    return (out);
}