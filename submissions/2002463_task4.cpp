#include <iostream>
using namespace std;

int sumtoNterms(int n){
    int i, sum = 0;
    for (i=1; i<=n; i++){
        sum += i;
    }
    return sum;
}
int main(){
    int n;

    cout << "Enter N`th term: ";
    cin >> n;
    cout << "Sum of N terms: " << sumtoNterms(n);
    return 0; 
}