
#include "Fixed.hpp"

int main(void)
{
	std::cout << WHITE << "Testing Fixed point number:" << RESET << std::endl;
	std::cout << BLANK << "1st Test: default instantiation" << RESET << std::endl;
	Fixed a;
	std::cout << BLANK << "2nd Test: int constructor" << RESET << std::endl;
	Fixed const b(10);
	std::cout << BLANK << "3rd Test: float constructor" << RESET << std::endl;
	Fixed const c(42.42f);
	std::cout << BLANK << "4th Test: copy constructor" << RESET << std::endl;
	Fixed const d(b);
	std::cout << BLANK << "5th Test: operator=" << RESET << std::endl;
	a = Fixed(1234.4321f);
	std::cout << BLANK << "6th Test: (operator<<) value Checking" << RESET << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << BLANK << "7th Test: conversion to integer" << RESET << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	
	std::cout << BLANK << "8th Test: conversion to float" << RESET << std::endl;
	std::cout << "a is " << a.toFloat() << " as float" << std::endl;
	std::cout << "b is " << b.toFloat() << " as float" << std::endl;
	std::cout << "c is " << c.toFloat() << " as float" << std::endl;
	std::cout << "d is " << d.toFloat() << " as float" << std::endl;
	
	std::cout << BLANK << "9th Test: destructors" << RESET << std::endl;

	return 0;
}