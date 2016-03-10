/*
In the previous attempt I did not understand the concept of "fraction" as a data type
and I made the mistake of converting the fraction into a double number
*/

#include<iostream>
#include<string>
#include<math.h>
using namespace std;

class Fraction
{
private:
	int n; //numerator
	int d; //denominator
public:
	//declarations
	Fraction();
	void add(Fraction);
	void subtract(Fraction);
	void multiply(Fraction);
	void divide(Fraction);
	~Fraction();

};
//constructor
Fraction::Fraction()
{

}

//deconstructor
Fraction::Fraction()
{

}
int main()
{
	Fraction frac;
	
}