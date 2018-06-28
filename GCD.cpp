//Dustin Peters//
//2/4/17//
//Ch4 c++ assignment//

#include <iostream>
#include <string>
#pragma warning(disable: 4996)
using namespace std;

int g_c_d(int n, int d);

class Fraction
{

private:
	int num;
	int denom;

public:
	Fraction() {}
	Fraction(int num) : num(num) {}
	Fraction(int num, int denom) : num(num), denom(denom) {}

	void set_num(int n) { num = n; }
	void set_denom(int d) { denom = d; }

	int get_numerator() const { return num; }
	int get_denominator() const { return denom; }
};

int g_c_d(int n, int d) {
	return d == 0 ? n : g_c_d(d, n % d);
}

istream &operator >> (istream &input, Fraction &f)
{
	int n, d;
	char slash;
	input >> n;
	input >> slash;
	input >> d;

	if (d == 0) { n = 0; } 
	f = Fraction(n, d);
	return input;
}

ostream &operator<<(ostream &output, const Fraction &frac)
{
	return output << frac.get_numerator() << "/" << frac.get_denominator();
}


int main()
{

	char again = 'Y';

	while (again == 'y' || again == 'Y')
	{

	

	int n, d;
	Fraction frac;

	cout << "Enter a fraction" << endl;
	cin >> frac;

	int gcd;
	n = frac.get_numerator();
	d = frac.get_denominator();
	gcd = g_c_d(frac.get_numerator(), frac.get_denominator());

	frac.set_num(n / gcd);
	frac.set_denom(d / gcd);
	cout << "Your GCD is ";
	cout << gcd;
	cout << "\n Your reduced fraction is: ";
	cout << frac << endl;


	system("pause");

	cout << " Go again? (y/n) ";
	cin >> again;
	}
	cout << "This is the end.";

	return 0;
}