#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int l;
        cin >> l;
        string s;
        cin >> s;
        int frq[5] = {0}; 

        if(l==5){
            for (char x : s) {
                if (x == 'T') {
                    frq[0] = 1;
                } 
                else if (x == 'i') {
                    frq[1] = 1;
                } 
                else if (x == 'm') {
                    frq[2] = 1;
                } 
                else if (x == 'u') {
                    frq[3] = 1;
                } 
                else if (x == 'r') {
                    frq[4] = 1;
                }
            }

            int flag = 1;
            for (int i = 0; i < 5; i++) {
                if (frq[i] == 0) {
                    flag = 0;
                    break; 
                }
            }

            if (flag) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }

        else
            cout << "NO" << endl;
    }
    return 0;
}
