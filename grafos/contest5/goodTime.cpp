#include <bits/stdc++.h>
using namespace std;

// int tamanho = numeroBom.length();

bool ehBom(long long n){

    // trasforma o numero em um string
    string numeroBom = to_string(n);

    // cria um vetor para guardar os digtos(sem repetir) em um 'vetor'
    set<char> digitos;
    
    // para cada caractere em numeroBom
    for(char c : numeroBom){
        digitos.insert(c);   // em digitos insere cada caractere diferent c 
    }
    return digitos.size() <= 2; // .size() conta quantos caracteres tem em digitos
}

void solve(){

    long long x;
    cin >> x;

    vector<long long> candidatos = {2, 3, 4, 5, 6, 7, 8, 9, 11, 26, 101, 111, 1001, 3366};

    for(long long y: candidatos){
        if(ehBom(x * y)){
            cout << y << "\n";
            return;
        } 
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}

/*
Entrada
t = numero de casos
x = numro 'bom' (tem no maximo 2 digitos distintos)

Saida
y = numero cujo y * x tmb da como resultado um numeor bom
*/