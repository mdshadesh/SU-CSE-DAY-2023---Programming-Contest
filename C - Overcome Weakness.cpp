#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int T;
	cin >> T;
	while(T--)
	{
	    int X, Y;
	    cin >> X >> Y;
	    if(X < Y)
	        cout << "FIRST" << endl;
	    else if(X > Y)
	        cout << "SECOND" << endl;
	    else
	        cout << "ANY" << endl;
	}
	return 0;
}
