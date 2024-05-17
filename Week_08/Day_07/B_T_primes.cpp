#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1000000;


void sieve(vector<bool> &is_prime) {
    is_prime[0] = is_prime[1] = false; 
    for (int i = 2; i * i <= MAX_N; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= MAX_N; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<bool> is_prime(MAX_N + 1, true);
    sieve(is_prime);

    set<long long> t_primes;
    for (int i = 2; i <= MAX_N; ++i) {
        if (is_prime[i]) {
            t_primes.insert(static_cast<long long>(i) * i);
        }
    }

    int n;
    cin >> n;
    while (n--) {
        long long x;
        cin >> x;
        if (t_primes.find(x) != t_primes.end()) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
