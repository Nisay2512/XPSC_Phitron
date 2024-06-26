#include <bits/stdc++.h>
using namespace std;

void add_divs(int x, map<int, int>& divs) {
    int i = 2;
    while (i * i <= x) {
        while (x % i == 0) {
            divs[i]++;
            x /= i;
        }
        i++;
    }
    if (x > 1) divs[x]++;
}

bool solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> divs;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        add_divs(a[i], divs);
    }
    for (auto e : divs) {
        if (e.second % n != 0) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        cout << (solve() ? "YES" : "NO") << "\n";
    }
    return 0;
}
