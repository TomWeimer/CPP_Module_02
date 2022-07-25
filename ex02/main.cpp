#include <iostream>
#include "Fixed.hpp"

std::string printing_bool(bool result)
{
	if (result == 1)
	{
		return (std::string("true"));
	}
	return(std::string("false"));
}

int main( void )
{
	std::cout << WHITE << "Testing Fixed point number:" << RESET << std::endl;
	std::cout << BLANK << "Tester init" << RESET << std::endl;
	{
		Fixed a;
		Fixed  b(Fixed( 5.05f ));
		Fixed  c(10);
		Fixed  d(-20);

		a = c;

		std::cout << WHITE << "1st Test: comparison operator" << std::endl;
		std::cout << BLANK << "Comparison operator==" 	<< RESET << std::endl;
		std::cout << a << " == " << c << " is " << printing_bool(a == c) << std::endl;
		std::cout << BLANK << "Comparison operator!=" 	<< RESET << std::endl;
		std::cout << a << " != " << c << " is " << printing_bool(a != c) << std::endl;
		std::cout << BLANK << "Comparison operator<" 	<< RESET << std::endl;
		std::cout << b << " < " << d << " is " << printing_bool(b < d) << std::endl;
		std::cout << BLANK << "Comparison operator>"	<< RESET << std::endl;
		std::cout << a << " > " << b << " is " << printing_bool(a > b) << std::endl;
		std::cout << BLANK << "Comparison operator<=" 	<< RESET << std::endl;
		std::cout << a << " <= " << b << " is " << printing_bool(a <= b) << std::endl;
		std::cout << c << " <= " << c << " is " << printing_bool(c <= c) << std::endl;
		std::cout << BLANK << "Comparison operator>=" 	<< RESET << std::endl;
		std::cout << d << " >= " << b << " is " << printing_bool(d >= b) << std::endl;
		std::cout << d << " <= " << d << " is " << printing_bool(d <= d) << std::endl;
		std::cout << WHITE << "2nd Test: arithmetic operator" << RESET <<  std::endl;
		std::cout << BLANK << "operator+ "<< RESET <<  std::endl;
		std::cout << a << " + " << b << " = ?" << std::endl;
		std::cout << a + b << std::endl;
		std::cout << BLANK <<"operator* "<< RESET <<  std::endl;
		std::cout << c << " * " << c << " = ?" << std::endl;
		std::cout << a * a << std::endl;
		std::cout << BLANK <<"operator- "<< RESET <<  std::endl;
		std::cout << d << " - " << c << " = ?" << std::endl;
		std::cout << d - c << std::endl;
		std::cout << BLANK <<"operator/ "<< RESET <<  std::endl;
		std::cout << c << " / " << d << " = ?" << std::endl;
		std::cout << c / d << std::endl;
		std::cout << BLANK <<"operator-- after"<< RESET <<  std::endl;
		std::cout << a << "-- " << " = ?" << std::endl;
		a--;
		std::cout <<  a << std::endl;
		std::cout << BLANK <<"operator-- before"<< RESET <<  std::endl;
		std::cout << "--" << c  << " = ?" << std::endl;
		--c;
		--c;
		std::cout <<  c << std::endl;
		std::cout << BLANK <<"operator++ after"<< RESET <<  std::endl;
		std::cout << d << "++ " << " = ?" << std::endl;
		d++;
		std::cout <<  d << std::endl;
		std::cout << BLANK <<"operator++ before"<< RESET <<  std::endl;
		std::cout << "++" << b  << " = ?" << std::endl;
		++b;
		std::cout <<  b << std::endl;
		std::cout << WHITE << "Last Test: \nmin:" << std::endl;

		std::cout << Fixed::min( a, b ) << std::endl;
		std::cout << WHITE << "max: " << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
		std::cout << BLANK << "destructors" << RESET << std::endl;
	}
	return 0;
}