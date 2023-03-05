#include <bits/stdc++.h>
using namespace std;

int main() {
	int count=0;
	int b[4];
	for(int i=0;i<4;i++){
		cin>>b[i];
	}
	for(int i=0;i<4;i++){
		if(b[i]>=10)
		count++;
	}
	cout<<count;	
	return 0;
}
