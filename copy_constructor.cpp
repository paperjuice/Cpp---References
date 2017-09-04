#include <iostream>
#include <vector>
#include <string>

class Person {
public:
	Person(std::string nm){
		*name = nm;
	}
	~Person() { delete name; }

	Person(const Person& p)
	{
		std::cout << "cpy constructor is called " << std::endl;
		name = new std::string(*p.name);
	}

	void set_name(std::string new_name) { *name = new_name; }

	void identify() { std::cout << *name << std::endl; }

private:
	std::string* name = new std::string();
};

int main()
{
	Person p1("James");
	Person p2 = p1;

	p2.set_name("Bond");

	p1.identify();

	

	return 0;
}