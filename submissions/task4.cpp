#include <iostream>
using namespace std;

int add(int no);

int add(int no)
{
    if(no != 0)
        return no + add(no - 1);
    return 0;    
}

int main ()
{
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    /*calculating using recursive function*/
    cout << "Sum =  " << add(num);
    return 0;
}

