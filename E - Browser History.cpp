#include<bits/stdc++.h>
using namespace std;

string history[1000];

int main(){
    int t, last, ind, id = 0;
    string st;
    cin >> t;
    while(t--){
        last = 0, ind = 0;
        history[last] = "http://www.lightoj.com/";
        cout << "Case " << ++id << ":" << endl;
        while(cin >> st)
        {
            if(st == "QUIT")
                break;
            else if(st == "VISIT")
            {
                cin >> st;
                cout << st << endl;
                history[++ind] = st;
                last = ind;
            }
            else if(st == "FORWARD")
            {
                if(ind + 1 > last)
                    puts("Ignored");
                else
                    cout << history[++ind] << endl;
            }
            else if(st == "BACK")
            {
                if(ind - 1 < 0)
                    puts("Ignored");
                else
                    cout << history[--ind] << endl;
            }
        }
    }
    return 0;
}
