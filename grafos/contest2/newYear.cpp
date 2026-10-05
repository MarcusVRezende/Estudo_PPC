#include <bits/stdc++.h>
using namespace std;

void solve(){
    
    int n, t;
    
    cin >> n >> t;

    vector<int> vet(n + 1);

    for(int i = 1; i <= n; i++){
        cin >> vet[i];
    }

    int i = 1;

    while(i < t){
        i += vet[i];
    }
    
    if(i == t){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
}


int main(){

    solve();
    return 0;
}

/*

Entradas:
n = numero de celulas
t = numero da celulaa qual quer ir

Saida: 
"SIM" se é possivel chegar na celula t 
"NAO" se não é possivel chegar na celula t com os saltos

*/