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
	void setValues(int num,int den); //to set n = num and d= den
	void getValues(int &num, int &den); //to get n and d
	void print();
	~Fraction();

};
//constructor
Fraction::Fraction()
{

}

void Fraction::setValues(int num, int den)
{
	n = num;
	d = den;
}

void Fraction::getValues(int &num, int &den)
{
	num = n;
	den = d;
}

void Fraction::add(Fraction fract)
{
	int num, den;
	fract.getValues(num, den);// Gets the values store in the object fract
	n = n*den + num*d; //changes the value stored in n(numerator)
	d = den*d; //changes the value stored in d(denominator)
}

void Fraction::subtract(Fraction fract)
{
	int num, den;
	fract.getValues(num, den);// Gets the values store in the object fract

	n = n*den - num*d;//changes the value stored in n(numerator)
	d = den*d;//changes the value stored in d(denominator)
}

void Fraction::multiply(Fraction fract)
{
	int num, den;
	fract.getValues(num, den);// Gets the values store in the object fract

	n = n*num;//changes the value stored in n(numerator)
	d = d*den;//changes the value stored in d(denominator)
}
void Fraction::divide(Fraction fract)
{
	int num, den;
	fract.getValues(num, den);// Gets the values store in the object fract

	n = n*den;//changes the value stored in n(numerator)
	d = d*num;//changes the value stored in d(denominator)
}

void Fraction::print()
{
	cout << n << "/" << d << endl;
}
//deconstructor
Fraction::~Fraction()
{

}

int main()
{
	Fraction obj1,obj2; //creates objects of fraction
	obj1.setValues(1, 2);
	obj2.setValues(1, 4);

	//Testing
	obj1.add(obj2);
	obj1.print();

	obj1.setValues(1, 2);
	obj1.subtract(obj2);
	obj1.print();

	obj1.setValues(1, 2);
	obj1.multiply(obj2);
	obj1.print();

	obj1.setValues(1, 2);
	obj1.divide(obj2);
	obj1.print();

	//
	
}