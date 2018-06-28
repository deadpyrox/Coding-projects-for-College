//Dustin Peters/
//2/4/17//
//Chap 3//

#include <iostream>

#include <random>     
#include <string>
#pragma warning(disable: 4996

const int SIDES = 6;

const int NUM_OF_DICE = 2;

const int MIN_RESULT = NUM_OF_DICE;

const int MAX_RESULT = NUM_OF_DICE * SIDES;


inline int GET_INDEX(int result) {
	return result - MIN_RESULT;
}

using std::cin;
using std::cout;
using std::endl;


using std::random_device;
using std::default_random_engine;
using std::uniform_int_distribution;


int main() 
{

	char again = 'Y';

	while (again == 'y' || again == 'Y')
	{


	random_device randDev;
	default_random_engine randEng(randDev());
	
	uniform_int_distribution<int> uniDist(1, 6);

	cout << "\nEnter number of trials: ";

	
	int trials = 0;
	
	cin >> trials;


	int outcomes[MAX_RESULT - MIN_RESULT + 1] = { 0 };
	for (int times = 0; times < trials; times++) {
		int total = 0;
		for (int dice = 0; dice < NUM_OF_DICE; dice++) {
			total += uniDist(randEng);
		}
		outcomes[GET_INDEX(total)]++;
	}

	for (int result = MIN_RESULT; result <= MAX_RESULT; result++) {
		double probability = (double)outcomes[GET_INDEX(result)] / trials;
		cout << "result: " << result <<
			", times: " << outcomes[GET_INDEX(result)] <<
			", probability: " << probability << 
			", error: " << result - probability << endl;
	}
	system("pause");

	cout << " Go again? (y/n) ";
	cin >> again;
	}
	cout << "This is the end.";
	return 0;
}