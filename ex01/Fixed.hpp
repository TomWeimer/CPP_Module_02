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


	//ostream& operator<<(ostream &out, const Fixed &origin);
	//ostream& operator<<(ostream &out, const Fixed& origin);
	//ostream& operator<<(const Fixed& origin);
	
	int getRawBits( void ) const;
	void setRawBits(int const rew);
	float toFloat(void)const;
	int toInt(void)const;




	

};
std::ostream& operator<<(std::ostream &out, const Fixed& origin);
#endif