#include <iostream>

//virtual function - late binding
//no virtual function - early binding


class Base
{
public:
    Base(){std::cout << "Base constructor" << std::endl;}
    ~Base(){std::cout << "Base destrutor" << std::endl;}
    
     virtual void print_stuff(){ std::cout << "This is base" << std::endl;}
   // virtual void some()=0;
};

class Derived: public Base
{
public:
    Derived(){ std::cout << "Derived constructor" << std::endl;}
    ~Derived(){std::cout << "Derived destructord" << std::endl;}
    
    void print_stuff(){ std::cout <<"This is derived" << std::endl;}
    void print_derived_stuff(){std::cout << "This is exclusive derived" << std::endl;}
};

class Derived2 : public Derived
{
public:
    Derived2(){std::cout << "Derived2 constructor" << std::endl;}
    ~Derived2(){std::cout << "Derived2 destructor" << std::endl;}
    
    void some(){std::cout <<""<<std::endl;}
    void print_stuff() {std::cout << "This is derived2" << std::endl;}
};


int main(int argc, char* argv[])
{

    //Derived d;
    Derived2 d2;
    Derived2 d2_2;
    
    
    Base* ptr_base[] = {&d2, &d2_2};
    
    for(uint i = 0; i < sizeof(ptr_base)/sizeof(Derived2); ++i)
        ptr_base[i]->print_stuff();
    
    
    return 0;
}
