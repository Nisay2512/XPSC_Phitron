#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int optimalScore(vector<int>& A) {
    int n = A.size();
    int maxDiff = abs(A[0] - A[1]);
    for (int i = 1; i < n - 1; ++i) {
        maxDiff = max(maxDiff, abs(A[i] - A[i + 1]));
    }
    return maxDiff;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        cout << optimalScore(A) << endl;
    }
    return 0;
}
