#include <iostream>
	using namespace std;
	

	int main()
	{
	    int a, rows, i, k;
	

	    cout <<"Enter number of rows: ";
	    cin >> rows;
	

	    for(i=1, k=0; i<=rows; ++i, k=0)
	    {
	        for(a = 1; a<=rows-i; ++a)
	        {
	            cout <<"  ";
	        }
	

	        while(k != 2*i-1)
	        {
	            cout << "* ";
	            ++k;
	        }
	        cout << endl;
	    }    
	    return 0;
	}
