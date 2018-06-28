// Dustin Peters
// ch 16 assignment
// 4/3/17

#pragma warning(disable: 4996)
#include <iostream>
#include <string> 
#include <algorithm>   
#include <vector>       
using namespace std;

bool searchtemplate(int i, int j, double k, double n) { return (i < j, n < k); }
bool templatedouble(double k, double n) { return (n < k); }
int main() {
	char again = 'Y';

	while (again == 'y' || again == 'Y')
	{
		int myints[] = { 0, 1, 1, 2, 3, 5, 6, 13, 21, 32, 55, };
		std::vector<int> v(myints, myints + 11);
		double mydouble[] = { 0.5, 1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 13.5, 21.5, 32.5, 55.4, };
		std::vector<double> d(mydouble, mydouble + 11);


		std::sort(v.begin(), v.end());

		std::cout << "looking for a 3... ";
		if (std::binary_search(v.begin(), v.end(), 3))
			std::cout << "3 is in the array. \n"; else std::cout << "3 is not in the array.\n";

		std::cout << "looking for a 5.5... ";
		if (std::binary_search(d.begin(), d.end(), 5.5))
			std::cout << "5.5 is in the array. \n"; else std::cout << "5.5 is not in the array.\n";

		std::cout << "looking for a 13... ";
		if (std::binary_search(d.begin(), d.end(), 13, templatedouble))
		std::cout << "13 is in the array. \n"; else std::cout << "13 is not in the array.\n";
		
		system("pause");

		cout << " Go again? (y/n) ";
		cin >> again;
	}
	cout << "This is the end.";


	return 0;
}