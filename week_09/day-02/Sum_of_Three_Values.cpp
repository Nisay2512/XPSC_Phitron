#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> songs(n); // Store value and original index

    for (int i = 0; i < n; ++i) {
        cin >> songs[i].first;
        songs[i].second = i + 1; // Store 1-based index
    }

    // Sort the array based on song values
    sort(songs.begin(), songs.end());

    // Iterate through each element and use two-pointer technique
    for (int i = 0; i < n - 2; ++i) {
        int target = x - songs[i].first;
        int left = i + 1, right = n - 1;
        while (left < right) {
            int sum = songs[left].first + songs[right].first;
            if (sum == target) {
                vector<int> result = {songs[i].second, songs[left].second, songs[right].second};
                sort(result.begin(), result.end()); // Sort indices to ensure ascending order
                cout << result[0] << " " << result[1] << " " << result[2] << endl;
                return 0;
            } else if (sum < target) {
                ++left;
            } else {
                --right;
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}
