#include <bits/stdc++.h>

using namespace std;


int contavisinhos(long long n, long long m, long long x, long long y){

    int visinhos = 4;

    if(x == 1 || y == n){
        visinhos--;
    } 
    else if(x == 1 || y == m ){
        visinhos--;
    }
    else{
        visinhos--;
    }

    return visinhos;
}

void solve(){
    
    long long n, m; 
    long long x1, y1, x2, y2;
    cin >> n >> m >> x1 >> y1 >> x2 >> y2;

    int custo1 = contavisinhos(n, m, x1, x2);
    int custo2 = contavisinhos(n, m, x2, y2);

    cout << custo1 << custo2;

}
int main(){
    
    solve();
    
    return 0;
}