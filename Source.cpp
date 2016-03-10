#include<iostream>
#include<string>
#include<math.h>
using namespace std;

class Fraction
{
private:
	double x ;
	double y ;
public:
	double GetFractions(double num) //Gets numerator and denominator from user and convert into a decimal number and return it
	{
		float n, d; // set to float because division of 2 int numbers returns an int.
		cout << "Enter Numerator" << endl;
		cin >> n;
		cout << "Enter Denominator" << endl;
		cin >> d;
		return num = (n / d);
	};

	void setValues()// Set x and y values to be used in the calculations
	{
		cout << "For the first number please :" << endl;
		x = GetFractions(x);
		cout << "For the second number please :" << endl;
		y = GetFractions(y);
	}

	double add() // Returns the sum of the 2 fractions 
	{
		return x + y;
	}

	double subtract() // Returns the difference of the 2 fractions
	{
		return x - y;
	}

	double multiply() // Returns the product of the 2 fractions
	{
		return x*y;
	}

	double divide() // Returns the quotient of the 2 fractions
	{
		return x / y;
	}

	void print()
	{
		cout << x << " + " << y << "= ";
		convert(add());
		cout << x << " - " << y << "= ";
		convert(subtract());
		cout << x << " x " << y << "= ";
		convert(multiply());
		cout << x << " / " << y << "= ";
		convert(divide());
	}

	//Converting a decimal number to a fraction and displaying it
	void convert(double a)
	{
		int b = (int)a;
		if (a == b) //Checks if the number is a whole number
		{
			cout << a << endl; // if you are returning a value delete this line
		}
		else
		{
			int j, i = 0, k = 1; //counters
			while (a != b) // converts the decimal number into a whole number and record how time it has to be multiplied by 10(i) 
			{
				a = a * 10;
				b = (int)a;
				i++;
			}
			j = 1;
			if (b != 1) //Important so that, eg. 1/10 doesn't get simplified to 0/5
			{
				j = 2;

				while (j < b) // Gets k which is the biggest number that is divisable to both the numerator and the denominator
				{
					if (b %j == 0 && (int)pow(10, i) % j == 0)
					{
						k = j;
					}
					j++;
				}
			}

			//-----simplified fraction
			int numerator = b / k;
			int denominator = (int)(pow(10, i) / k);

			if (numerator > denominator) // mixed fractions
			{
				j = 0;
				int mult = denominator;
				while (mult <= numerator) // check the equals to thing
				{
					j++;
					mult += denominator;
				}

				int whole = j;
				numerator = (j + 1)*denominator - numerator;
				cout << whole << "  ";
			}

			cout << numerator << "/" << denominator << endl;

		}
	}
	//--------------------------------------------------------
};

int main()
{
	Fraction frac;
	frac.setValues();
	frac.print();
}