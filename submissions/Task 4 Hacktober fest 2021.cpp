//task 4
#include<iostream>
using namespace std;

void sum_upto_n()
{
    int n, sum=0;

    cout<<"Enter the number upto which you want to get sum: ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        sum=sum+i;
    }

    cout<<endl;
    cout<<"The sum is: "<<sum;

}


int main()
{
    sum_upto_n();

    return 0;
}