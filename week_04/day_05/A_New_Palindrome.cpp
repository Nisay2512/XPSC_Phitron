#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int n = s.size()/2;

        char x = s[0];
        bool flag = true;

        for (int i = 0; i < n; i++){
            if(s[i] != x){
                flag = false;
                break;
            }
        }

        if(flag){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}