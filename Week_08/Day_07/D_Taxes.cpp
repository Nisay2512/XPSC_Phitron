#include <bits/stdc++.h>
using namespace std;


bool isPrime(long long num) {
    if (num < 2) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (long long i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}


int main() {
    long long n;
    cin >> n;

    if (isPrime(n)) {
        cout << 1 << endl;
    } else if (n % 2 == 0) {
        cout << 2 << endl;
    } else if (isPrime(n - 2)) {
        cout << 2 << endl;
    } else {
        cout << 3 << endl;
    }

    return 0;
}
