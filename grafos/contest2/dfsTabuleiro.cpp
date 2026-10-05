#include <bits/stdc++.h>
using namespace std;

const int dlinha[] =  {-1, -1, -1,  0, 0,  1, 1, 1};
const int dcoluna[] = {-1,  0,  1, -1, 1, -1, 0, 1};

int linhas_totais, colunas_totais;
vector<string> grid;
vector<vector<bool>> visitados;

void dfs(int linha, int coluna){
    
    visitados[linha][coluna] = true;

    for(int i = 0; i < 8; i++){

        int n_linha = linha  + dlinha[i];
        int n_coluna = coluna + dcoluna[i];

       if(n_linha >= 0 && n_linha < linhas_totais && n_coluna >= 0 && n_coluna < colunas_totais){
        if(grid[n_linha][n_coluna] == '0' && !visitados[n_linha][n_coluna]){
            dfs(n_linha, n_coluna);
        }
       }
    }
} 
int main(){


    return 0;
}