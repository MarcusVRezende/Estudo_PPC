#include <bits/stdc++.h>

// Isso é para não precisar colocar o std:bitset, ou std:vector (serve para reduzir isso)
using namespace std;

// O Novo 'DEFINE MAX = 200001'
const int MAX = 200001;

// Cria uma estrututura booleana oara guardar os visinhos visitados
bitset<MAX> visited;

//cria uma array estatica de valores
vector<int> adj[MAX];

void dfs(int u){

    if(visited[u]){
        return;
    }

    visited[u] = true;

    // for (...:...) -> v = adj[u][i]
    for (auto v: adj[u]){
        dfs(v);
    }
}

int main (){

    int n, m; // n vertices e m arestas

    //  em c++ a operação de leitura retorna o fluxo, 
    if(cin >> n >> m){
        for(int i = 0; i < m; i++){
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        dfs(1);
    }
    return 0;
}
