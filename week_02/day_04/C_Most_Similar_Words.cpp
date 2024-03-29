#include "bits/stdc++.h"
using namespace std;
#define endl "\n"

int dif(string& a, string& b) {
    int diference = 0;
    for(int i = 0; i < a.size(); ++i) {
        diference = diference + abs(a[i] - b[i]);
    }
    return diference;
}

int main() {
    int t; 
    cin >> t;

    while(t--) {
        int n, m; 
        cin >> n >> m;

        vector<string> s(n);

        for(int i = 0; i < n; ++i) {
            cin >> s[i];
        }

        int ans = INT_MAX;
        
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                ans = min(ans, dif(s[i], s[j]));
            }
        }
        cout << ans << endl;
    }
}