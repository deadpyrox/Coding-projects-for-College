//Dustin Peters
//c++ chapter 11 assignment

#include <iostream>
#include "f.h"
#include "f.cpp"
#include "g.h"
#include "g.cpp"
using namespace std;
#pragma warning(disable: 4996)

int main()
{

	f::hello();   
	{ std::cout << "\n"; }
	g::hello();
}