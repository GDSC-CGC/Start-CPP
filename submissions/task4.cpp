//Our task4 is to  MAKE A FUNCTION WHICH RETURNS SUM UPTO N NUMBERS:

#include <iostream>
using namespace std;
int add(int n);
int main ()
{
    int n;
    // taking input
    cout << "Enter a positive integer: ";
    cin >> n;
    // printing  sum upto n numbers
    cout << "Sum =  " << add(n);
    return 0;
}
int add(int n)
{
    if(n != 0)
        return n + add(n - 1);
    return 0;    
}