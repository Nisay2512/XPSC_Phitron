#include <bits/stdc++.h>
using namespace std;

#define ll long long


ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}


ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}

int main() {
    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    ll count_a = n / a; 
    ll count_b = n / b; 
    ll count_ab = n / lcm(a, b); 

    ll max_chocolates = count_a * p + count_b * q - count_ab * min(p, q);

    cout << max_chocolates << endl;

    return 0;
}
