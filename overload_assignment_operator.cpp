#include <iostream>
#include <string>

//add more examples

unsigned long operator+ (const int& a, const std::string& b){
    return a+b.length();
}

int main()
{
    
    int a = 2;
    std::string b = "this";
    
    //will show 6
    std::cout << a + b << std::endl;
    
    return 0;
}
