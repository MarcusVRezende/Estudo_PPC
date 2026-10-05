#include <bits/stdc++.h>
using namespace std;

bool ehBom(long long n) {
    string s = to_string(n);
    set<char> digitos(s.begin(), s.end());
    return digitos.size() <= 2;
}

void solve(const vector<long long>& candidatos) {
    long long x;
    cin >> x;

    for (long long y : candidatos) {
        if (ehBom(x * y)) {
            cout << y << "\n";
            return;
        }
    }
}

int main() {
    // Otimização extrema de entrada/saída
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Pré-gera apenas candidatos estratégicos e válidos
    vector<long long> candidatos;
    
    // 1. Números de 1 dígito (2 a 9)
    for (int i = 2; i <= 9; i++) candidatos.push_back(i);

    // 2. Potências de 10 e variações de 1s e 0s (10, 11, 100, 101, 1000, 1001...)
    long long p10 = 10;
    for (int i = 0; i < 9; i++) {
        candidatos.push_back(p10);
        candidatos.push_back(p10 + 1);
        p10 *= 10;
    }

    // 3. Repetições de 1s (11, 111, 1111...)
    long long rep1 = 11;
    for (int i = 0; i < 8; i++) {
        candidatos.push_back(rep1);
        rep1 = rep1 * 10 + 1;
    }

    int t;
    cin >> t;
    while (t--) {
        solve(candidatos);
    }

    return 0;
}