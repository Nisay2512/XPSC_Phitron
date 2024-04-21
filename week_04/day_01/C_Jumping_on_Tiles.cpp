#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        int n = s.size();

        map<char, vector<int>> ma;

        for (int i = 0; i < n; i++){
            ma[s[i]].push_back(i);
        }

        int dir;
        if (s[0] < s[n - 1]) {
            dir = 1; 
        } else {
            dir = -1; 
        }

        vector<int> ans;

        for (char c = s[0]; c != s[n - 1] + dir; c += dir) {
            for (int now : ma[c]) {
                ans.push_back(now);
            }
        }


        int cost = 0;
        for (int i = 1; i < ans.size(); i++)
            cost += abs(s[ans[i]] - s[ans[i - 1]]);

        cout << cost << " " << ans.size() << '\n';
        for (auto now : ans) {
            cout << now + 1 << " ";
        }
        cout << '\n';


    }
    return 0;
}