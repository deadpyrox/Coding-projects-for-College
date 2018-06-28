//Dustin Peters
// ch 8 program
// 2/19/17

#include <iostream>
#include <cstdlib>
#include <cmath>
#pragma warning(disable: 4996)
using namespace std;

class money
{
public:
	money();
	money(double amount);
	money(int thedollars, int thecents);
	money(int thedollars);
	double getAmount() const;
	int getdollars() const;
	int getcents() const;
	void input();
	void output() const;

private:
	int dollars;
	int cents;
	
	int dollarsPart(double amount) const;
	int centsPart(double amount) const;
	int round(double number) const;

};
const money operator +(const money& amount1, const money& amount2);
const money operator -(const money& amount1, const money& amount2);
bool operator == (const money& amount1, const money& amount2);
const money operator - (const money& amount1);



int main()
{

	char again = 'Y';

	while (again == 'y' || again == 'Y')
	{

	money youramount, myamount(10, 9);
	cout << "enter an amount of money: ";
	youramount.input();
	cout << "your amount is ";
	youramount.output();
	cout << endl;
	cout << "My amount is ";
	myamount.output();
	cout << endl;

	if (youramount == myamount)
		cout << "We have the same amounts\n";
	else
		cout << "one of us is richer.\n";
	money ouramount = youramount + myamount;
	youramount.output(); cout << " + "; myamount.output();
	cout << " equals "; ouramount.output(); cout << endl;

	system("pause");

	cout << " Go again? (y/n) ";
	cin >> again;
	}
	cout << "This is the end.";

	return 0;
}

const money operator +(const money& amount1, const money& amount2)
{
	int allcents1 = amount1.getcents() + amount1.getdollars() * 100;
	int allcents2 = amount2.getcents() + amount2.getdollars() * 100;
	int sumallcents = allcents1 + allcents2;
	int absallcents = abs(sumallcents);
	int finaldollars = absallcents / 100;
	int finalcents = absallcents % 100;

	if (sumallcents < 0)
	{
		finaldollars = -finaldollars;
		finalcents = -finalcents;
	}
	return money(finaldollars, finalcents);
}

const money operator -(const money& amount1, const money& amount2)
{
	int allcents1 = amount1.getcents() + amount1.getdollars() * 100;
	int allcents2 = amount2.getcents() + amount2.getdollars() * 100;
	int diffallcents = allcents1 - allcents2;
	int absallcents = abs(diffallcents);
	int finaldollars = absallcents / 100;
	int finalcents = absallcents % 100;

	if (diffallcents < 0)
	{
		finaldollars = -finaldollars;
		finalcents = -finalcents;
	}
	return money(finaldollars, finalcents);
}

bool operator == (const money& amount1, const money& amount2)
{
	return ((amount1.getdollars() == amount2.getdollars()))
		&& ((amount1.getcents() == amount2.getcents()));
}
	const money operator -(const money& amount)
	{
		return money(-amount.getdollars(), -amount.getcents());

	}

	money::money(): dollars(0), cents(0)
	{}

	money::money(double amount)
		: dollars(dollarsPart(amount)),cents(centsPart(amount))
	{}
	money::money(int thedollars)
		: dollars(thedollars), cents(0)
	{}
	money::money(int thedollars, int thecents)
	{
		if ((thedollars < 0 && thecents > 0) ||
			(thedollars > 0 && thecents < 0))
		{
			cout << "inconsistent money data. \n";
			exit(1);
	}
		dollars = thedollars;
		cents = thecents;
	}

	double money::getAmount()const
	{
		return (dollars + cents*0.01);
	}

	int money::getdollars()const
	{
		return dollars;
	
	}

	int money::getcents()const
	{
		return cents;

	}

	void money::output() const
	{
		int absdollars = abs(dollars);
		int abscents = abs(cents);
		if (dollars < 0 || cents < 0)
			cout << "$ -";
		else
			cout << '$';
		cout << absdollars;
		if (abscents >= 10)
			cout << '.' << abscents;
		else
			cout << '.' << '0' << abscents;

	}
	void money::input()
	{
		char dollarsign;
		cin >> dollarsign;
		if (dollarsign != '$')
		{
			cout << "no dollar sign in money input. \n"; \
				exit(1);
		}

		double amountasdouble;
		cin >> amountasdouble;
		dollars = dollarsPart(amountasdouble);
		cents = centsPart(amountasdouble);
	}

	int money::dollarsPart(double amount) const
	{
		return static_cast<int>(amount);
	}
	int money::centsPart(double amount) const
	{
		return static_cast<int>(amount);
	}
	int money::round (double number) const 
	{
		return static_cast<int>(floor(number + 0.5));
	}


