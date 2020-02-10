#include <iostream>
#include <math.h>

using namespace std;

float number, sqr,sqroot;

int main()
{
    cout<<"Calculate square & square root. " << endl;
    cout<<"Enter number\t";
    cin>>number;
    sqroot = sqrt(number);
    sqr = number*number;

    cout<<"Squareroot of "<<number<<" is "<<sqroot<<"\n";
    cout<<"Square of "<<number<<" is "<<sqr<<"\n";

    return 0;
}
