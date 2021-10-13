#include<iostream>
using namespace std;

int sum(int n){
	if(n == 0 || n == 1)
		return n;
	return n + sum(n-1);
}

int main(){
	cout<<sum(2)<<endl;
	return 0;
}