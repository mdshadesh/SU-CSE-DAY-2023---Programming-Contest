#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	    int a =(x+y)/2;
	    int b =(y+z)/2;
	    int c =(x+z)/2;
	    
	    if(a < 35 || b < 35 || c < 35)
	    {
	        cout<<"fail"<<endl;
	    }
	    else cout<<"pass"<<endl;
	}

	return 0;
}
