#include<iostream>
 using namespace std;
 int main()
 {
     int n=1;
     for(int i=1;i<=5;i++)
     {
         for(int j=4;j>=i;j--)
         {
             cout<<" ";
         }
         for(int k=0;k<n;k++)
         {
             cout<<"*";
         }
         cout<<endl;
         n=n+2;
     }
 } 
