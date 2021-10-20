//According to our problem statement we have to PRINT A ISOCALES TRIANGLE USING STARS “*”
#include <iostream>
using namespace std;

int main(){
   
    int n=5;
//so we will use for loop here
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++) cout<<" ";
        for(int k=0;k<i;k++) cout<<"* ";
        cout<<endl;
    };
    return 0;