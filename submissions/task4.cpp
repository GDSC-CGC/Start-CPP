#include <iostream>
using namespace std;
int add(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum = sum+i;
    }
    return sum;
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n; 
    cout<<"Sum ="<<add(n);
    return 0;
}

