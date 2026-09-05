#include <bits/stdc++.h>

using namespace std;


int contavisinhos(long long n, long long m, long long x, long long y){

    int visinhos = 4;

    if(x == 1 || y == n){
        visinhos--;
    } 
    else if(x == 1 || y == m ){
        visinhos--;
    } Design emocional então considera como esse impacto na hora de usar esses interfaces visceral aparência impacto imediato desse design emocional facilita a vida de manter o cliente e o guarda de centro comportamental facilidade prazer reflexivo significal e cultural tem uma série de dous enormes é muito difícil os nossos autores mais diferentes
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