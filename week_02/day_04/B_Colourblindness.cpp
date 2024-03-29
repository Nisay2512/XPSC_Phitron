#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string a, b;

        cin >> a >> b;

        int flag = 0;
        for (int i = 0; i < n; i++){
            if((a[i] == b[i]) || (a[i] =='G' && b[i] == 'B') || (a[i] =='B' && b[i] == 'G') ){
                flag = 1;
            }
            else{
                flag = 0;
                break;
            }
        }

        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}