//convert the program below to a "do...while" loop
#include <iostream>
using namespace std;
int main()
{
   int n;
   
   do{
   cout<<"Enter a non-negative integer: ";
   cin>>n;
   }
   while(n>=0);
{
	cout<<"The integer your entered is negative "<<endl;
}
 return 0;
}
