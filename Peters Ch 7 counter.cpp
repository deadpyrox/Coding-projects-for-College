//Dustin Peters
// c++ ch 7 program
//2/19/17
// This program will have counter with private and public classes and a constructor which will increment one counter and decrement the other counter, as well as display the number of increments and decrements needed to reach the output.

#include <iostream>
using namespace std;
#pragma warning(disable: 4996)
 
class counter
{
private:
	int inc = 0 + 85;
	int dec = 200 - 242;
	int count1 = 0;
	int count2 = 200;
	int count3 = 85;
	int count4 = -42;
	static int total;
public:

	counter operator ++()
	{
		counter temp;
		temp.inc = ++inc;
		return temp;
	}
	counter operator ++ (int)
	{
		counter temp;
		temp.inc = inc++;
			return temp;
	}

	counter operator --()
	{
		counter temp;
		temp.dec = --dec;
		return temp;
	}
	counter operator -- (int)
	{
		counter temp;
		temp.dec = dec--;
		return temp;
	}
		void Display()
		{
			cout << "Current state of inc: 0" << endl;
			cout << "Current count: " << count1 << endl;
			cout << "total increments and decrements 0" << endl;
			cout << "Current state of dec: 200"  << endl;
			cout << "Current count: " << count2 << endl;
			cout << "total increments and decrements: 0" << endl;
			cout << "Current state of inc after 85 inc()" << endl;
			cout << "Current count: " << count3 << endl;
			cout << "total increments and decrements: " << count3 << endl;
			cout << "Current state of dec after 242 dec()" << endl;
			cout << "Current count: " << count4 << endl;
			cout << "Final inc: " << inc << endl;
			cout << "Final dec: " << dec << endl;
			cout << "Total increments and decrements = " << counter::total << endl;
		}
};
int counter::total = 85 + 242;
int main()
{

	char again = 'Y';

	while (again == 'y' || again == 'Y')
	{
		counter obj, obj1, obj2;

	obj1 = obj;
	obj2 = obj;
	obj.Display();

	system("pause");

	cout << " Go again? (y/n) ";
	cin >> again;
}
cout << "This is the end.";

	return 0;

}