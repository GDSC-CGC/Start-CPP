#include <iostream>
	using namespace std;
	int add(int);
	int main()
	{
	    int n, sum;
	    cout<<"Enter the value of last number: ";
	    cin>>n;
	    sum = add(n);
	    cout<<"Sum of all numbers upto "<<n<<" is: "<<sum;
	    return 0;
	}
	int add(int n)
	{
	    int sum = 0;
	    while(n>0)
	    {
	       sum += n;
	        n--;
	    }
	    return sum;
	}
