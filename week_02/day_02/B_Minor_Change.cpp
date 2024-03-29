#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    cin >> s >> t;
    int sz1, sz2;
    sz1 = s.size();
    sz2 = t.size();

    int count = 0;

    if(s == t){
        cout << 0;
    }

    else if (sz1 < sz2){
        for (int i = 0; i < sz1; i++){
            if(s[i] != t[i]){
                count++;
            }
        }
        count = count + (sz2 - sz1);
        cout << count << endl;
    }
    else{
        for (int i = 0; i < sz2; i++){
            if(t[i] != s[i]){
                count++;
            }
        }
        count = count + (sz1 - sz2);
        cout << count << endl;
    }

    
    return 0;
}