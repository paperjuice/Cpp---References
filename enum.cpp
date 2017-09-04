#include <iostream>
//https://www.ibm.com/developerworks/rational/library/scoped-enums/index.html

//enum class vs unscoped enum
// * complete type safety
// * well defined type
// * scoped
// * forward declaration


enum  Animals
{
	DOG =1,
	FROG  =3,
	COW  =5,
	MAX

};


int main()
{
	if (Animals::COW >2 )
	{
		std::cout << "works" << std::endl;
		std::cout << Animals::COW << std::endl;
	}


	Animals a = Animals::COW;
	switch (a)
	{
	case Animals::COW:
		std::cout << "cow" << std::endl;
	case Animals::DOG:
		std::cout << "dog" << std::endl;
	case Animals::FROG:
		std::cout << "frog" << std::endl;
	case Animals::MAX:
		std::cout << "max" << std::endl;
	default:
		break;

	}

}