#include <bits/stdc++.h>
using namespace std;

const int MAX = 200001;
bitset<MAX> visitados;

vector<int> adj[MAX];

void dfs(int u){

    if(visitados[u]){
        return;
    }

    visitados[u] = true;

    for(auto v: adj[u]){
        dfs(v);
    }
}

void solve(){

    int n, m;
    cin >> n >> m;

    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int total_grupo = 0;

    for(int i = 0; i <= n; i++){
        if(!visitados[i]){
            total_grupo++;
            dfs(1);
        }
    }

    cout << total_grupo << "\n";
}

int main(){

    solve();

    return 0;
}