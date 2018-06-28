// Dustin Peters
//c++ ch6 game
//2/12/17

#include <iostream>
#include <string>
using namespace std;
#pragma warning(disable: 4996

class Players {
public:
	string name;
	int password;
	double exp;
	char* inventory;
	int position;
};


int main() {
	char again = 'Y';

	while (again == 'y' || again == 'Y')
	{

	Players Kagero;        
	Players Robin;
	Players Lissa;

	Kagero.name = "Honorable Ninja";
	Kagero.password = 5261;
	Kagero.exp = 5682;
	Kagero.inventory = "Poison Dagger, Poison Dagger, Steel Shuriken, Spy Shuriken ";
	Kagero.position = 1902, 3434;


	Robin.name = "High Deliverer";
	Robin.password = 10956;
	Robin.exp = 11000;
	Robin.inventory = "Levin Sword, Arcfire, Arcthunder, Arcwind, Nosferatu";
	Robin.position = 343, 5290;

	Lissa.name = "Sprightly Cleric";
	Lissa.password = 41563;
	Lissa.exp = 8005;
	Lissa.inventory = "Rehabilitate staff, Physic staff, Warp staff, Heal staff";
	Lissa.position = 504, 893;

	cout << "Player name - Kagero" << endl;
	cout << "Name: " << Kagero.name << endl;
	cout << "Password: " << Kagero.password << endl;
	cout << "Experience: " << Kagero.exp << endl;
	cout << "Inventory: " << Kagero.inventory << endl;
	cout << "Position: " << Kagero.position << endl << endl;
	
	cout << "Player name - Robin" << endl;
	cout << "Name: " << Robin.name << endl;
	cout << "Password: " << Robin.password << endl;
	cout << "Experience: " << Robin.exp << endl;
	cout << "Inventory: " << Robin.inventory << endl;
	cout << "Position: " << Robin.position << endl << endl;

	cout << "Player name - Lissa" << endl;
	cout << "Name: " << Lissa.name << endl;
	cout << "Password: " << Lissa.password << endl;
	cout << "Experience: " << Lissa.exp << endl;
	cout << "Inventory: " << Lissa.inventory << endl;
	cout << "Position: " << Lissa.position << endl << endl;

	system("pause");

	cout << " Go again? (y/n) ";
	cin >> again;
	}
	cout << "This is the end.";

	return 0;
}
