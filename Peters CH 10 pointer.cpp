//Dustin Peters
//c++ chapter 10 assignment

#include <iostream>
using namespace std;
#pragma warning(disable: 4996)

class WrapArrayDeep {
public:
	WrapArrayDeep();
	WrapArrayDeep(const WrapArrayDeep &copy);
	WrapArrayDeep & operator =(const WrapArrayDeep &copy);
	void setArray(char a, char b, char c, char d, char e);
	void display() const;
private:
	enum { SIZE = 6 };
	char *array;
};



WrapArrayDeep::WrapArrayDeep()
{
	array = new char[SIZE];

	*array = '{';
	*(array + 1) = '|';
	*(array + 2) = '}';
	*(array + 3) = '~';
	*(array + 4) = '^';
	*(array + 5) = '\0';
}

WrapArrayDeep::WrapArrayDeep(const WrapArrayDeep &copy)
{
	array = new char[SIZE];

	for (int i = 0; i < SIZE; i++) array[i] = copy.array[i];
}

WrapArrayDeep & WrapArrayDeep::operator =(const WrapArrayDeep &copy)
{
	if (this != &copy)
	{
		for (int i = 0; i < SIZE; i++) array[i] = copy.array[i];
	}

	return (*this);
}

void WrapArrayDeep::setArray(char a, char b, char c, char d, char e)
{
	*array = a;
	*(array + 1) = b;
	*(array + 2) = c;
	*(array + 3) = d;
	*(array + 4) = e;
	*(array + 5) = '\0';
}
void WrapArrayDeep::display() const
{
	for (int i = 0; i < SIZE - 1; i++)  cout << array[i] << " ";
	cout << endl;
}


// Shallow wrapper
class WrapArrayShallow {
public:
	WrapArrayShallow();
	WrapArrayShallow(const WrapArrayShallow &copy);
	WrapArrayShallow & operator =(const WrapArrayShallow &copy);
	void setArray(char a, char b, char c, char d, char e);
	void display() const;
private:
	enum { SIZE = 6 };
	char *array;
};



WrapArrayShallow::WrapArrayShallow()
{
	array = new char[SIZE];

	*array = '{';
	*(array + 1) = '|';
	*(array + 2) = '}';
	*(array + 3) = '~';
	*(array + 4) = '^';
	*(array + 5) = '\0';
}

WrapArrayShallow::WrapArrayShallow(const WrapArrayShallow &copy)
{
	array = new char[SIZE];

	for (int i = 0; i < SIZE; i++) array[i] = copy.array[i];
}

WrapArrayShallow & WrapArrayShallow::operator =(const WrapArrayShallow &copy)
{
	if (this != &copy)
	{
		for (int i = 0; i < SIZE; i++) array[i] = copy.array[i];
	}

	return (*this);
}

void WrapArrayShallow::setArray(char a, char b, char c, char d, char e)
{
	*array = '{';
	*(array + 1) = '|';
	*(array + 2) = '}';
	*(array + 3) = '~';
	*(array + 4) = '^';
	*(array + 5) = '\0';
}
void WrapArrayShallow::display() const
{
	for (int i = 0; i < SIZE - 1; i++)  cout << array[i] << " ";
	cout << endl;
}

int main() {
	char again = 'Y';

	while (again == 'y' || again == 'Y')
	{ 
	int *ppi, *pi, i;

	i = 7;
	cout << "Address of i (&i): " << &i << endl;
	cout << "Value of i (i): " << i << endl << endl;

	pi = &i;    
	cout << "Address that pointer pi holds (pi): " << pi << endl;
	cout << "Content of pi holds (*pi): " << *pi << endl << endl;

	i = 7;    
	cout << "Address pointer pi holds (pi): " << pi << endl;
	cout << "Content of pi holds (*pi): " << *pi << endl << endl;

	*pi = 2;
	cout << "Address of i (i): " << &i << endl;
	cout << "Value of i (i): " << i << endl << endl;
	
	ppi = pi;
	cout << "Address pointer ppi holds (ppi): " << ppi << endl;
	cout << "Content of ppi holds (*ppi): " << *ppi << endl << endl;

	*ppi = 4;
	cout << "Address of pi (pi): " << &pi << endl;
	cout << "Value of ppi (ppi): " << *ppi << endl << endl;

	cout << " this section instantiates a wrapper class for a dynamic array of 5 elements " << endl;
	cout << " WrapArrayDeep 1  " << endl;

	WrapArrayDeep wad1;

	cout << "\nWrapArrayDeep 2 created using the copy constructor on 1 " << endl;

	WrapArrayDeep wad2;


	cout << "\nafter changing the contents of WrapArrayDeep 1, 1 and 3 = '" << endl;
	wad1.setArray(97, 98, 99, 100, 101);

	wad1.display();
	wad2.display();

	cout << " Now doing the same thing with wrap array shallow " << endl;
	cout << " WrapArrayshallow 1  " << endl;

	WrapArrayShallow was1;

	cout << "\nWrapArrayShallow 2 created using the copy constructor on 1 " << endl;

	WrapArrayShallow was2;


	cout << "\nafter changing the contents of WrapArrayShallow 1, 1 and 3 = '" << endl;
	was1.setArray(97, 98, 99, 100, 101);

	was1.display();
	was2.display();

	system("pause");

	cout << " Go again? (y/n) ";
	cin >> again;
	}
	cout << "This is the end.";
	return 0;
}
