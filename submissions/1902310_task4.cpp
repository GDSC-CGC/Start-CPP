//TASK 4: MAKE A FUNCTION WHICH RETURNS SUM UPTO N NUMBERS

#include<iostream>

using namespace std;

void returnSum(int n){
	
	cout<<n*(n+1)/2;
}

int main(){
	
	int n;
	
	cout<<"Enter N"<<endl;
	cin>>n;
	
	returnSum(n);
	
	
	return 0;
}
