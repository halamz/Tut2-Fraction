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
/*	Fraction add(Fraction);
	Fraction subtract(Fraction);
	Fraction multiply(Fraction);
	Fraction divide(Fraction);        */
	void setValues(int num, int den); //to set n = num and d= den
	void getValues(int &num, int &den); //to get n and d
	//Overloading the +, -, *, / operators
	Fraction operator + (Fraction);
	Fraction operator - (Fraction);
	Fraction operator * (Fraction);
	Fraction operator / (Fraction);

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
/*
Fraction Fraction::add(Fraction fract)
{
	int num, den;
	fract.getValues(num, den);// Gets the values store in the object fract
	Fraction TempFrac;
	num = n*den + num*d; //changes the value stored in n(numerator)
	den = den*d; //changes the value stored in d(denominator)

	TempFrac.setValues(num, den);

	return TempFrac;
}

Fraction Fraction::subtract(Fraction fract)
{
	int num, den;
	fract.getValues(num, den);// Gets the values store in the object fract
	Fraction TempFrac;
	num = n*den - num*d;//changes the value stored in n(numerator)
	den = den*d;//changes the value stored in d(denominator)

	TempFrac.setValues(num, den);

	return TempFrac;
}

Fraction Fraction::multiply(Fraction fract)
{
	int num, den;
	fract.getValues(num, den);// Gets the values store in the object fract
	Fraction TempFrac;
	num = n*num;//changes the value stored in n(numerator)
	den = d*den;//changes the value stored in d(denominator)
	TempFrac.setValues(num,den);

	return TempFrac;
}
Fraction Fraction::divide(Fraction fract)
{
	int num, den;
	fract.getValues(num, den);// Gets the values store in the object fract
	Fraction TempFrac;
	num = n*den;//changes the value stored in n(numerator)
	den = d*num;//changes the value stored in d(denominator)
	TempFrac.setValues(num,den);

	return TempFrac;
}
*/
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Overloading 
Fraction Fraction::operator + (Fraction fract)
{
	int num, den;
	fract.getValues(num, den);// Gets the values store in the object fract
	Fraction TempFrac;
	num = n*den + num*d; //changes the value stored in n(numerator)
	den = den*d; //changes the value stored in d(denominator)

	TempFrac.setValues(num, den);

	return TempFrac;
}

Fraction Fraction::operator - (Fraction fract)
{
	int num, den;
	fract.getValues(num, den);// Gets the values store in the object fract
	Fraction TempFrac;
	num = n*den - num*d;//changes the value stored in n(numerator)
	den = den*d;//changes the value stored in d(denominator)

	TempFrac.setValues(num, den);

	return TempFrac;
}

Fraction Fraction::operator * (Fraction fract)
{
	int num, den;
	fract.getValues(num, den);// Gets the values store in the object fract
	Fraction TempFrac;
	num = n*num;//changes the value stored in n(numerator)
	den = d*den;//changes the value stored in d(denominator)
	TempFrac.setValues(num, den);

	return TempFrac;
}
Fraction Fraction::operator / (Fraction fract)
{
	int num, den;
	fract.getValues(num, den);// Gets the values store in the object fract
	Fraction TempFrac;
	num = num*d;//changes the value stored in n(numerator)
	den = den*n;//changes the value stored in d(denominator)
	TempFrac.setValues(num, den);

	return TempFrac;
}

void Fraction::print()
{
	if (n%d == 0)
	{
		cout << n / d << endl;
	}
	else if (n > d) // mixed number
	{
		int common = 1, j = 0;
		
		while (j < d)
		{
			j++;
			if (n%j == 0 && d%j == 0)
			{
				common = j;
			}
		}
	
		cout << n/d << " " << n-(n/d)*d << "/" << d << endl;
	}
	else
	{
		int common = 1, j = 0;

		while (j < n)
		{
			j++;
			if (n%j == 0 && d%j == 0)
			{
				common = j;
			}
		}

		n = n / common;
		d = d / common;
		cout << n << "/" << d << endl;
	}

}



//deconstructor
Fraction::~Fraction()
{

}

int main()
{
	Fraction obj1,obj2,obj3; //creates objects of fraction
	obj1.setValues(1, 5);
	obj2.setValues(1, 2);

	//Testing
	/*obj3 =obj1.add(obj2);
	obj3.print();

	obj3 = obj1.subtract(obj2);
	obj3.print();

	obj3 =obj1.multiply(obj2);
	obj3.print();

	obj3 = obj1.divide(obj2);
	obj3.print();
	*/
	//overloading Testing
	obj3 =obj1 + obj2;
	obj3.print();

	obj3 = obj1 - obj2;
	obj3.print();

	obj3 =obj1 * obj2;
	obj3.print();

	obj3 = obj1 / obj2;
	obj3.print();

	//
	
}