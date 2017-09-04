#include <iostream>


class A
{
public:
	A(int number) : a(number) {}

	void get_number() const 
	{
		a = 20;   // <- despite the fact that member variables can not be changed because of the keyword "const", the mutable variable can be changed
		std::cout << a << std::endl; 
	}

private:
	mutable int a;
};


int main(void)
{
	A a(2);
	a.get_number();
	return 0;
}