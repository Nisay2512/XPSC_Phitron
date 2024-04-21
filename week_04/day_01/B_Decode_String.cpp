#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;
        vector<int> v;
        
        if(s.size() ==1){
           char y = ('a' - 1) + s[0];
           cout << y; 
        }

        else{
            for (int i = 0; i < n;) {

                if (i < n - 2 && s[i + 2] == '0' && s[i + 3] == '0') {
                    v.push_back(s[i] - '0');

                    int num = (s[i+1] - '0') * 10 + (s[i + 2] - '0');
                    v.push_back(num);

                    i += 4;
                }

                else if (i < n - 2 && s[i + 2] == '0') {
                    int num = (s[i] - '0') * 10 + (s[i + 1] - '0');
                    v.push_back(num);

                    i += 3;
                } 
                else {
                    v.push_back(s[i] - '0');
                    i++;
                }
            }

            for (auto x : v) {
                char y = ('a' - 1) + x;
                cout << y;
            }

            cout << endl;
        }
    }
    return 0;
}
