//Display the pattern using numebr repeating for a row
//fix and complete the program below.

#include <iostream>
using namespace std;
int main()
{
   int rows;
	cout<<"Display the pattern"<<endl;
	cout<<"-------------------"<<endl;
    cout<< "Input No of Rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}
