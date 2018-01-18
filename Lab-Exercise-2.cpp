//Check whether a number is prime or not
//finish up this program, properly, and nicely.

#include <iostream>
using namespace std;
int main ()
{

int i=1;
int u;
int sum;
cout<<"The perfect numbers between 1 to 500 are: "<<endl;
    for (i=1; i<=500; i++) 
    {
        u=1;
        sum=0;

        while (u<i)
        {
            if (i%u == 0)
                sum = sum + u;
            u++;
        }

        if (sum==i)
        {
            u= 1;

            while (u<i)
            {
                if (i%u == 0)
                    cout << i << " = " << u << endl;
                u++;
            }
        }
    }
return 0;
}
