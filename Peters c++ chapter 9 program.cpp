// Dustin Peters
// 2/27/17
//c++ ch 9 program string reverse

#include <iostream>
#include "PEters c++ chapter 9 header.h"
#include "Peters Stack.cpp"
#include<stack>
#include <string>
#pragma warning(disable: 4996)
using std::cin;
using std::cout;
using std::endl;
using namespace std;

int main()

{
	char again = 'Y';

	while (again == 'y' || again == 'Y')
	{

	char next;
	char ans = ' ';
do
{
	stack<char> s;
	cout << "Enter your string of less than 80 characters: \n ";
	cin.get(next);
	while (next != '\n')
	{
		s.push(next);
		cin.get(next);
}
	cout << "Written backwards that is: \n";
	while (!s.empty()) {
		cout << s.top();
		s.pop();
	}

cout << endl;


//cin >> ans;
cin.ignore(10000, '\n');
} while (ans != 'n' && ans != 'N');
system("pause");

cout << " Go again? (y/n) ";
cin >> again;
}
cout << "This is the end.";
return 0;
}