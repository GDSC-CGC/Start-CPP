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
  int n=6;
  cout << findSum(n);
  return 0;
}
