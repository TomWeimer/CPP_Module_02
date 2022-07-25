#ifndef FIXED_H
# define FIXED_H
#include <cmath>
#include <iostream>

#define WHITE 		"\e[1;37m"
#define BLANK 		"\e[0;30m"
#define UNDERLINE  	"\e[4;37m"
#define GREEN 		"\e[1;32m"
#define VIOLET		"\033[36m"
#define BLUE  		"\e[1;34m"
#define PURPLE 		"\033[33m"
#define PINK		"\e[1;35m"
#define RESET 		"\033[0m"
#define RED 		"\033[31m"
#define YEL			"\033[33m"

class Fixed
{
	
	private:
	int	value_;
	static const int nbBits_ = 8;

	public:
	Fixed();
	Fixed(int const param);
	Fixed(float const param);
	Fixed(const Fixed& normal);

	~Fixed();
	
	Fixed& operator=(const Fixed& nb);
	int get_value();
	int getRawBits( void ) const;
	void setRawBits(int const rew);
	float toFloat(void)const;
	int toInt(void)const;
	bool operator>(const Fixed &other) const;
	bool operator<(const Fixed &other) const;
	bool operator>=(const Fixed &other) const;
	bool operator<=(const Fixed &other) const;
	bool operator==(const Fixed & other) const;
	bool operator!=(const Fixed & other) const;
	Fixed operator+(const Fixed &other);
	Fixed operator*(const Fixed &other);
	Fixed operator-(const Fixed &other);
	Fixed operator/(const Fixed &other);
	Fixed& operator--();
	Fixed operator--(int);
	Fixed& operator++();
	Fixed operator++(int);
	static Fixed &min(Fixed& a, Fixed& b);
	static const Fixed &min(const Fixed& a, const Fixed& b);
	static Fixed &max(Fixed& a, Fixed& b);
	static const Fixed &max(const Fixed& a, const Fixed& b);
	



	

};
std::ostream &operator<<(std::ostream &out, const Fixed &fixe);

#endif