#include <bits/stdc++.h>

using namespace std;

void solve(){

    int n, k;

    cin >> n >> k;

    if(k >= n - 1){
        cout << 1 << "\n";
    } else {
        cout << n << "\n";
    }
}


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;

    cin >> t;

    while(t--){
        solve();
    }
    return 0;
