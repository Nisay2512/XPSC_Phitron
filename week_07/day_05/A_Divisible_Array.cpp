#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fi first
#define se second
const int N=2e6+1;
const ll mod=998244353;
ll n,m;
ll a[N],b[N];
void solve(){
	cin >> n;
	ll s=0;
	for(int i=n; i>=2 ;i--){
		a[i]=i;
		s=(s+i)%n;
	}
	a[1]=n-s;
	for(int i=1; i<=n ;i++) cout << a[i] << ' ';
	cout << '\n';
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);
	int t;cin >> t;
	while(t--){
		solve();
	}
}