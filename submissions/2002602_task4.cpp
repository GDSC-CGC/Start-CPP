#include<iostream>
using namespace std;
int findSum(int n)
{
   int sum = 0;
   for (int x=1; x<=n; x++)
     sum = sum + x;
   return sum;
}

int main()
{
  int n;
  cout<<"Plese enter your number"<<endl;
  cin>>n;
  cout<<"The sum of Given number is:"<<endl;
  cout << findSum(n);
  return 0;
}
