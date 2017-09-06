#include <iostream>
using namespace std;

class Character
{
public:
	virtual void print_stuff() = 0;   //pure virtual function
};

//we can define a pure virtual funciton in the base class using the scope resolution operator
void Character::print_stuff() {cout << "Definition" << endl;}

class Warrior : public Character
{
public:
	void print_stuff() { 
		cout << "I am warrior" << endl; 
		Character::print_stuff();             //we can call the defined function inside another function
	}
};

int main(void)
{
	//Character c; //!!!!an abstract class can not be an object
	Warrior w;      //this is fine because the pure virtual function has definition in "Warrior" class
	w.print_stuff();  // all good

	return 0;
}
