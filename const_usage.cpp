
class Test{
public:
    void function_1() const
    {
        //because the function is const, memeber variables can't
        //m_number += 1;
    }
    
    int function_1(const int& a)
    {
        //the reference is constant and therefore it cannot be changed
        //a += 2;
        return a;
    }
    
    
private:
    int m_number = 1;
};


int main()
{
    const int a = 2; //we promise the compiler the value won't be changed after initialisation
    const int b = 5;

    const int* ptr_a = &a;  //address can change but value cannot
    ptr_a = &b;
    
    
    int x = 4;
    int y = 2;
    int* const ptr_b = &x;  //address cannot change but the value can
    *ptr_b = y;
    
    
    const int* const ptr_c = &x; //address and value cannot changes
    
    
    return 0;
}
