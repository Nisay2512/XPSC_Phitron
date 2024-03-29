#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        int c = 0,v = 0;

        for (int i = 0; i < n; i++){
            if(s[i]== '('){
                v++;
            }
            else{
                v--;
            }
            if (v < 0){
                v = 0;
                c++;
            }
        }

        cout << c << endl;
    }
    return 0;
}