// Dustin Peters
//c++ ch13 towers of hanoi
//3/20/17

#include <iostream>
using namespace std;
#pragma warning(disable: 4996)

void towers(int, char, char, char);

int main()
{
	char again = 'Y';

	while (again == 'y' || again == 'Y')
	{
	int num;

	cout << "Enter the number of disks : ";
	cin >> num;
	cout << "The moves involved are \n";
	towers(num, 'A', 'C', 'B');

	system("pause");

	cout << " Go again? (y/n) ";
	cin >> again;
	}
	cout << "This is the end.";

	return 0;
}
void towers(int num, char frompeg, char topeg, char auxpeg)
{
	if (num == 1)
	{
		cout << "\n Move disk 1 from peg " << frompeg << " to peg " << topeg;
		return;
	}
	towers(num - 1, frompeg, auxpeg, topeg);
	cout << "\n Move disk " << num << " from peg " << frompeg << " to peg " << topeg;
	towers(num - 1, auxpeg, topeg, frompeg);
}