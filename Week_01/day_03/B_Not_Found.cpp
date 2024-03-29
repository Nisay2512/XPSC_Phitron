#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int frq[26];
    memset(frq, 0, sizeof(frq));

    for(char c:s){
        int x;
        x = c;
        frq[x - 97] = 1;
    }

    int count=0;

    for (int i = 0; i < 26; i++){
        if(frq[i]== 0){
            char y;
            y = i + 97;
            cout << y;
            break;
        }
        if(frq[i] ==1 ){
            count++;
        }
    }

    if(count == 26){
        cout << "None";
    }
        return 0;
}