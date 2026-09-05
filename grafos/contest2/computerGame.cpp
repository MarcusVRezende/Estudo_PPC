#include <bits/stdc++.h>

using namespace std;

void solve(){

    int n;
    cin >> n;

    string s1, s2;
    
    cin >> s1;
    cin >> s2;

    bool possivel = true;

    for(int i = 0; i < n; i++){
        if (s1[i] == '1' && s2[i] == '1'){
            possivel = false;
            break;
        }
    }

    if(possivel){
        cout << "SIM\n";
    }
    else{
        cout << "NAO\n";
    }
}

int main(){

    int t;

    cin >> t;
        while (t--)
        {
            solve();
        }
    
    return 0;
}