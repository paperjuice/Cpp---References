#include <iostream>

class A
{
public:
	explicit A(int nr) : number(nr) {}

private:
	int number;

};

class B {
public:
	B(A nr) : number(nr) {}

private:
	A number;
};

int main(int argc, char* argv)
{
	//B b(3);   <- this will fail because the compiler is not allowed to make changes to the type due to "explicit" keyword
	B b(A(3));

	return 0;
}