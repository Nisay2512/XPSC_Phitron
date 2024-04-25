#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n = 0, a = 0, b = 0;
        long long ans = 0;

        cin >> a >> b >> n;
        ans = b;

        for (int i = 0, x = 0; i < n; i++) {
            cin >> x;
            ans += min(a - 1, x);
        }

        cout << ans << endl;
    }

    return 0;
}
