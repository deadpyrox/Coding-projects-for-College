// Dustin Peters
// c++ chapter 5 assignment
// 2/11/17

#include <iostream>
#include <ctime>
#include <algorithm>
#include <vector> 
#pragma warning(disable: 4996)
using namespace std;

void fillArray(int a[20], int size, int& numberUsed);
void sort(int a[20], int numberUsed);
void swapvalues(int& v1, int& v2);
int indexofsmallest(const int a[20], int startIndex, int numberUsed);
int main()

{

	char again = 'Y';

	while (again == 'y' || again == 'Y')
	{


		int random[20], numberUsed;
		srand((unsigned)time(NULL));

		fillArray(random, 20, numberUsed);
		sort(random, numberUsed);

		cout << "In sorted order, the numbers are: \n";
		for (int index = 0; index < numberUsed; index++)
			cout << random[index] << " ";

		cout << " Go again? (y/n) ";
		cin >> again;
	}
	cout << "This is the end.";

	return 0;

}


void fillArray(int a[20], int size, int& numberUsed)

{
	void sort(int a[20], int numberUsed);
	int index = 0;
	int indexofnextsmallest;
	for (int index = 0; index < numberUsed - 1; index++)
		indexofnextsmallest = indexofsmallest(a, index, numberUsed);
	swapvalues(a[index], a[indexofnextsmallest]);


}

void sort(int a[20], int numberUsed)
{
}

void swapvalues(int& v1, int& v2)
{
	int temp;
	temp = v1;
	v1 = v2;
	v2 = temp;
}
int indexofsmallest(const int a[20], int startindex, int numberUsed)
{
	int min = a[startindex],
		indexofMin = startindex;
	for (int index = startindex + 1; index < numberUsed; index++)
		if (a[index] < min)
		{
			min = a[index];
			indexofMin = index;
		}
	return indexofMin;
}