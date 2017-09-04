#include <iostream>

using namespace std;


//bitwise operation
int main(void)
{
	//AND
	//1000
	//0001]
	//-------
	//0
	cout << (8 & 1) << endl;

	//OR
	//9
	cout << (8 | 1) << endl;

	//XOR
	//8
	cout << (9 ^ 1) << endl;

	//NOT
	//1
	cout << (~-2) << endl;

	//SHIFT LEFT
	//12
	cout << (3 << 2) << endl;
	
	//SHIFT RIGHT
	cout << (3 >> 1) << endl;

	return 0;
}