// Dustin Peters
// ch 19 assignment
// 4/23/17

#include <iostream>
#include <map>
#include <string>
using namespace std;
using std::cout;
using std::endl;
using std::map;
using std::string;
#pragma warning(disable: 4996);

int main(){
char again = 'Y';

while (again == 'y' || again == 'Y')
{

	map<string, string> names;
	names["Paul Brown"] = "123-45-6790";
	names["Lisa Brown"] = "123-45-6790";
	names["Mary Smith"] = "123-45-6790";
	names["John Smith"] = "123-45-6790";



	if (names.find("Lisa Brown") != names.end())
		cout << "Entry for Lisa Brown has been found - " << names["Lisa Brown"]
		<< endl << endl;

	if (names.find("Matt Mercer") == names.end())
		cout << "Matt Mercer has not been found." << endl;
	
	cout << "Iterating through all names: " << endl;
	map < string, string>:: const_iterator iter;
	for (iter = names.begin(); iter != names.end(); iter++)
	{
		cout << iter->first << " - " << iter->second << endl;
	}
	system("pause");

	cout << " Go again? (y/n) ";
	cin >> again;
}
cout << "This is the end.";
	return 0;
}