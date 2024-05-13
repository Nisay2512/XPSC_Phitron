#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n; 

    int k;
    vector<int> primes;

    if (n % 2 == 0) {
        k = n / 2;
        for (int i = 0; i < k; ++i) {
            primes.push_back(2);
        }
    } else {
        k = (n - 3) / 2 + 1;
        for (int i = 0; i < k - 1; ++i) {
            primes.push_back(2);
        }
        primes.push_back(3);
    }

   
    cout << k << endl;

    
    for (int i = 0; i < primes.size(); ++i) {
        cout << primes[i] << " ";
    }
    cout << endl;

    return 0;
}
