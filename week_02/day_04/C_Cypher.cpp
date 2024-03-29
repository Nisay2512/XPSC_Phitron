#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int ar[n];

        for (int i = 0; i < n; i++){
            cin >> ar[i];
        }

        for (int i = 0; i < n; i++){
            int b;
            cin >> b;

            string input;
            cin >> input;

            for (int j = 0; j < b; j++){
                if(input[j] == 'U'){
                    ar[i]--;
                }
                else if(input[j] == 'D'){
                    ar[i]++;
                }

                if(ar[i]<0){
                    ar[i] += 10;
                }
                if(ar[i]> 9){
                    ar[i] -= 10;
                }
            }
        }

        for (int i = 0; i < n; i++){
            cout << ar[i] << " ";
        }
        cout << endl;
    }
    return 0;
}