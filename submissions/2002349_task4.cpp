#include<iostream>
using namespace std;
int sum(int n){
int sum=0;
  for(int i=1;i<=n;i++)
      sum=sum+i;
      return sum;

}
int main(){
    int n;
    cout<<"Enter your number: "<<endl;
    cin>>n;
    cout<<"The Required Sum is "<<endl;
    cout<<sum(n);
return 0;
}
