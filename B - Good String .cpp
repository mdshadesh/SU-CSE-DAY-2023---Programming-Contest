#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int n=s.length()/2;
	    string first, second;
	    for(int i=0; i<n; i++){
	        first+=s[i];
	    }
	    if( s.length()%2==0 ){
	        for(int i=n; i<s.length(); i++){
	            second+=s[i];
	        }
	    }else{
	        for(int i=n+1; i<s.length(); i++){
	            second+=s[i];
	        }
	    }
	    
	    sort(first.begin(), first.end());
	    sort(second.begin(), second.end());
	    if( first==second ){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
