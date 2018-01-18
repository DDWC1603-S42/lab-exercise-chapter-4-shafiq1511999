//Get out from this program
//find a way to fix and complete this program. good luck.

#include <iostream>
using namespace std;
int main()
{
	char num;
	
	while(true)
	{
		std::cout<<"Enter 0 to exit or anyhing else to continue: ";
		cin>>num;	

		//exit loop if user enters
		if(num==0)
			break;
	}
	std::cout<<"we are out";

	return 0;
}
