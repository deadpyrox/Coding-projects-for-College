//Dustin Peters
//c++ chapter 12 assignment

#include <fstream>
#include <iostream>
using std::ofstream;
using std::cout;
using std::ios;
using namespace std;
#pragma warning(disable: 4996)

int main() {
	char advice[100];

	ofstream outfile;
	outfile.open("advice.txt", fstream::in | fstream::out | fstream::app);
	cout << "Enter advice: ";
	cin.getline(advice, 100);
	outfile << advice << endl, std::ofstream::out | std::ofstream::app;


	outfile.close();

	return 0;
}


  