// n = linha
// m = coluna 

#include <bits/stdc++.h>

using namespace std;

void entradaEsaida(){

    int N, M, x1, x2, y1, y2;

    int entrada, saida;

    int visinhos = 4;
    cin >> N >> M;
    cin >> x1 >> y1 >> x2 >> y2;

    vector<vector<int>> maze(N, vector<int>(M, 0));

    maze[x1][y1] = entrada = 1;
    maze[x2][y2] = saida = 2;

   if(maze[x1][y1] == ){}

    // if((maze[x1 - 1][y1])){

    // };
    // maze[x1 + 1][y1] = 5;
    // maze[x1][y1 + 1] = 5;
    // maze[x1][y1 - 1] = 5;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M ; j++){
            cout << maze[i][j] << " "; 
        }
       cout << "\n";
    }
}




int main(){

    entradaEsaida();

    return 0;
}