#ifndef FIXED_H
# define FIXED_H
#include <cmath>
#include <iostream>

using namespace std;
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
	int getRawBits( void ) const;
	void setRawBits(int const rew);
	float toFloat(void)const;
	int toInt(void)const;




	

};
#endif