#include <bits/stdc++.h>
using namespace std;

int verifica(int n, int k){

    int opcao1 = n;
    int opcao2 = n;

    int contador = 0;


    while (opcao1 > 0 && opcao2 > 0){
        
        if(opcao1 == k || opcao2 == k){
            return contador;            
        }else{

        opcao1 = opcao1 / 2;
        opcao2 = (opcao2 + 1) / 2;

        contador++;
        }
    }
    return -1;    
}

void solve(){
    
    int n, k;
    cin >> n >> k;

    int cont = verifica(n, k);
    
    if(cont == -1){
        cout << cont << "\n";
    }else{
        cout << cont << "\n";
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

/*

Entradas: 

t = casos de testes
n = numero de maças
k = numero de maças que andrei quer conseguir 

Saida:

Quanto passos ate dar a pilha que andrey quer ou -1 se não for possivel

*/
