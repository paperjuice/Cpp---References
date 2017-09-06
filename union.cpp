#include <iostream>
using namespace std;

// a Union is as big as its biggest data member
union MyUnion
{
	char c;  //1 byte
	int a;    //4 bytes 
} uni;

int main(int argc, char* argv[])
{
	uni.c = 'f';  //this one is now active, reading from a is UB 
	uni.a = 2;  // now this one is active, reading from c is UB

	cout << uni.a << endl;  //this is all good as uni.a is the current active one
	cout << uni.c << endl;   // this is UB
	
	return 0;
}
