#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a = n;
    int count = 0;

    while(a>0){
        count++;
        a = a / 10;
    }

    if(count == 4){
        cout << n << endl;
    }
    else{
        if(n==0){
            for (int i = 0; i < (4 -count); i++){
                cout << 0;
            }  
        }
        else{
            for (int i = 0; i < (4 -count); i++){
                cout << 0;
            }
            cout << n << endl;
        }
        
    }

    

    return 0;
}