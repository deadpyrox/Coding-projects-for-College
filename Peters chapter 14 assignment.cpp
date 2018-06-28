// Dustin Peters
// ch 14 assignment
// 3/20/17

#pragma warning(disable: 4996)
#include <cstdlib>
#include <iostream>
#include <string>
#include <cctype>
#include <stack>
#include <conio.h>

using namespace std;


class Gun {

protected:
	string g_manufacturer;
	string g_caliber;
	//string gunCabinet[2];
public:
	Gun();
	Gun(const string manufacturer, const string caliber) {
		g_manufacturer = manufacturer;
		g_caliber = caliber;
	}

	string getManufactuer() {
		return g_manufacturer;
	}

	string getCaliber() {
		return g_caliber;
	}

	void setManufactuer(string m);
	void setCaliber(string c);
	virtual void print();
};

class Handgun : public Gun {
protected:
	string h_grips;
	string h_sights;
	bool h_laser;

public:
	Handgun();
	Handgun(const string manufacturer, const string caliber, const string grips, const string sights, const bool laser)
		: Gun(manufacturer, caliber) {
		h_grips = grips;
		h_sights = sights;
		h_laser = laser;
	};

	string getGrips() {
		return h_grips;
	}

	string getSights() {
		return h_sights;
	}

	bool getLaser() {
		return h_laser;
	}

	void print();
	void setGrips(string g);
	void setSights(string s);
	void setLaser(bool l);
};

class Revolver : public Handgun {
private:
	bool r_singleAction;
	int r_numberOfRounds;


public:
	Revolver();
	Revolver(const string manufacturer, const string caliber, const string grips, const string sights, const bool laser, bool singleAction, int numberOfRounds)
		: Handgun(manufacturer, caliber, grips, sights, laser) {
		r_singleAction = singleAction;
		r_numberOfRounds = numberOfRounds;
	}

	string getSingleAction();

	int getNumberOfRounds() {
		return r_numberOfRounds;
	}

	void print();
	void setSingleAction(bool singleAction);
	void setNumberOfRounds(int numberOfRounds);
};

class Pistol : public Handgun {
private:
	bool p_semiAuto;

public:
	Pistol();
	Pistol(const string manufacturer, const string caliber, const string grips, const string sights, const bool laser, bool semiAuto)
		: Handgun(manufacturer, caliber, grips, sights, laser) {
		p_semiAuto = semiAuto;
	}

	bool getSemiAuto() {
		return p_semiAuto;
	}

	void print();
	void setSemiAuto(bool semiAuto);
};

int main()
{
	Handgun myHandgun("Winchester", ".38", "side", "iron", true);

	Revolver myRevolver("HK", ".45", "top", "iron", true, true, 500);

	Pistol myPistol("Smith & Wesson", ".50", "top", "scope", true, true);

	Gun *myGunCabinet[3];

	myGunCabinet[0] = &myHandgun;
	myGunCabinet[1] = &myRevolver;
	myGunCabinet[2] = &myPistol;


	for (int i = 0; i < 3; i++)
		myGunCabinet[i]->print();


	cout << "\n\n";
	system("pause");
	return 0;
}


void Gun::print() {
	cout << "";
}

void Handgun::print() {

}

void Revolver::print() {
	cout << "Revolver \n";
	cout << "\nManufacturer: " << getManufactuer() << "\n";
	cout << "Caliber: " << getCaliber() << "\n";
	cout << "Grips: " << getGrips() << "\n";
	cout << "Sights: " << getSights() << "\n";
	cout << "Laser: " << boolalpha << getLaser() << "\n";
	cout << "Single Action: " << getSingleAction() << "\n";
	cout << "Number of Rounds: " << getNumberOfRounds() << "\n";
}

void Pistol::print() {
	cout << "\n Pistol";
	cout << "\nManufacturer: " << getManufactuer() << "\n";
	cout << "Caliber: " << getCaliber() << "\n";
	cout << "Grips: " << getGrips() << "\n";
	cout << "Sights: " << getSights() << "\n";
	cout << "Laser: " << boolalpha << getLaser() << "\n";
	cout << "Semi auto: " << boolalpha << getSemiAuto() << "\n";
}

string Revolver::getSingleAction() {
	if (r_singleAction) {
		return "Single Action";
	}
	else {
		return "Not Single Action";
	}
}