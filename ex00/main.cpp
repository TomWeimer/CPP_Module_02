#include "Fixed.hpp"
int main(void)
{
	std::cout << WHITE << "Testing Fixed point number:" << RESET << std::endl;
	std::cout << BLANK << "1st Test: default instantiation" << RESET << std::endl;
	{
		Fixed a;
		std::cout << BLANK << "2nd Test: copy instantiation" << RESET << std::endl;
		Fixed b(a);
		std::cout << BLANK << "3rd Test: operator=" << RESET << std::endl;
		Fixed c;
		c = b;

		std::cout << BLANK << "4th Test: (getRawBits) value Checking" << RESET << std::endl;
		std::cout << "value contained in A: " << a.getRawBits() << std::endl;
		std::cout << "value contained in B: " << b.getRawBits() << std::endl;
		std::cout << "value contained in C: " << c.getRawBits() << std::endl;

		std::cout << BLANK << "5th Test: setting values" << RESET << std::endl;
		std::cout << "adding value : 10" << std::endl;
		a.setRawBits(10);
		b.setRawBits(10);
		c.setRawBits(10);
		std::cout << "value contained in A: " << a.getRawBits() << std::endl;
		std::cout << "value contained in B: " << b.getRawBits() << std::endl;
		std::cout << "value contained in C: " << c.getRawBits() << std::endl;

		std::cout << BLANK << "6th Test: destructor checking" << RESET << std::endl;
	}
	return 0;
}