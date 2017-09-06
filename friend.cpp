#include <iostream>

class A
{
private:
	int a = 0, b = 1;
	friend void print_stuff( const A&);  //<-------friend will be able to access private member variables
	friend class B;// <--------clssse can be friends 
};

//this function is able to receive private variables because it is a friend of class A
void print_stuff(const A& a) 
{
	std::cout << a.a << a.b << std::endl;
}

//B is able to access private member variables of A because they are friends <3
class B: public A
{
public:
	void print() { std::cout << a << b << std::endl; }
};

int main()
{
	B b;
	b.print();
	return 0;
}
