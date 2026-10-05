#include <bits/stdc++.h>
using namespace std;

int contaVisinhos(long long n, long long m, long long x, long long y){

    int visinhos = 4;

    if(x ==  1 || x == n){
        visinhos--;
    }
    if(y == 1 || y == m){
        visinhos--;
    }

    return visinhos;
}

void solve(){
    
    long long n, m;

    long long x1, y1, x2, y2;

    cin >> n >> m; 
    cin >> x1 >> y1 >> x2 >> y2;

    int partida = contaVisinhos(n, m, x1, y1);
    int chegada = contaVisinhos(n, m, x2, y2);

    cout << min(partida, chegada) << "\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;

    if (cin >> t){
        while (t--)
        {
            solve();
        }
    }
    return 0;
}