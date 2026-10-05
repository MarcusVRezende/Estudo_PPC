#include <bits/stdc++.h>

using namespace std;


void solve(){

    int n, m;
    cin >> n >> m;

    vector<int> veta(n + 1);
    
    for(int i = 1; i <= n; i++){
        cin >> veta[i]; 
    }
    vector<bool> posso_trocar(n + 1, false);

    for(int i = 0; i < m; i++){
        int p;
        cin >> p;
        posso_trocar[p] = true;
    }

    bool houve_troca = true;

    while (houve_troca){

        houve_troca = false;
        
        for(int i = 1; i < n; i++){
            if(veta[i] > veta[i + 1] && posso_trocar[i]){
                swap(veta[i], veta[i + 1]);
                houve_troca = true;
            }
        }
    }
    
    bool ordenado = true;

    for(int i = 1; i < n; i++){
        if(veta[i] > veta[i + 1]){
            ordenado = false;
            break;
        }
    }

    if(ordenado){
        cout << "YES \n";
    }else{
        cout << "NO \n";
    }

}
int main(){

    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;

}