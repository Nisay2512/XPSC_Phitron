#include <bits/stdc++.h>
using namespace std;

string winner(string s) {
    int n = s.size();
    for (int i = 0; i < n - 1; ++i) {
        if (s[i] != s[i + 1]) {
            return "Zlatan";
        }
    }
    return "Ramos";
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        string S;
        cin >> S;
        cout << winner(S) << endl;
    }
    return 0;
}
