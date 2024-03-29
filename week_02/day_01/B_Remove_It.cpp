#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll n, x;
    cin >> n >> x;

    list<ll> l;

    for (int i = 0; i < n; i++){
        int y;
        cin >> y;
        l.push_back(y);
    }
    l.remove(x);

    int sz = l.size();
    

    for (int i = 0; i < sz; i++){
        int val = l.front();
        cout << val << " ";
        l.pop_front();
    }
        return 0;
}