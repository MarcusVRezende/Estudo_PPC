#include <bits/stdc++.h>
using namespace std;

int n;
int ax, ay, bx, by, cx, cy;

bool visitado[1005][1005];

int x_linha[]  = {-1, -1, -1,  0, 0,  1, 1, 1};
int y_coluna[] = {-1,  0,  1, -1, 1, -1, 0, 1};

bool sobAtaque(int linha, int coluna){

    if(linha == ax || coluna == ay){
        return true;
    } 
    if(abs(linha - ax) == abs(coluna - ay)){
        return true;
    }
    return false;
}

void dfs(int x, int y){

    if(x < 1 || x > n || y < 1 || y > n){
        return;
    }
    if(sobAtaque(x, y) || visitado[x][y]){
        return;
    }

    visitado[x][y] = true;

    for(int i = 0; i < 8; i++){
        int linha = x + x_linha[i];
        int coluna = y + y_coluna[i];
        dfs(linha, coluna);
    }
}

int solve(){

    cin >> n;
    cin >> ax >> ay;
    cin >> bx >> by;
    cin >> cx >> cy;
    
    dfs(bx, by);

    if(visitado[cx][cy]){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}

int main(){

    solve();

    return 0;
}