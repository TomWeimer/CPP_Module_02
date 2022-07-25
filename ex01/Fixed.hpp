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
	Fixed(int const param);					// new
	Fixed(float const param);				// new
	Fixed(const Fixed& normal);

	~Fixed();
	
	Fixed& operator=(const Fixed& nb);
	
	int getRawBits( void ) const;
	void setRawBits(int const rew);
	float toFloat(void)const;					// new
	int toInt(void)const;						// new

};
std::ostream& operator<<(std::ostream &out, const Fixed& origin); // new
#endif