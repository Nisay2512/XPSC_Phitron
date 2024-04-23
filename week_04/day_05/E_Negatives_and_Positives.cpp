#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        long long sum = 0;
        int negs = 0;

        for (int i = 0; i < n; ++i) {
            int num;
            cin >> num;
            if (num < 0) {
                ++negs;
                num = -num;
            }
            sum += num;
            a[i] = num;
        }

        sort(a.begin(), a.end());

        if (negs & 1) {
            sum -= 2 * a[0];
        }

        cout << sum << "\n";
    }

    return 0;
}
