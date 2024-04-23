#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if(a==1){
            cout << 1;
        }

        else{
            int x = a - 1;

            int y;
            if(c>b){
                y = (c - b) + c - 1;
            }
            else{
                y = b - 1;
            }

            if(x == y){
                cout << 3;
            }
            else if (x<y){
                cout << 1;
            }
            else{
                cout << 2;
            }
        }

        cout << endl;
    }
    return 0;
}