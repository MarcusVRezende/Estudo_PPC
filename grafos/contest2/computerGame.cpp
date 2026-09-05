#include <bits/stdc++.h>
using namespace std;

//Todas os movimentos possiveis 
const int dr[] = {-1, -1, -1,  0,  0,  1, 1, 1 };
const int dc[] = {-1,  0, +1, -1, +1, -1, 0, 1 };

int n;
string grid[2];
bool visited[2][105];

void dfs(int r, int c){
    visited[r][c] = true;

    if(r == 1 && c == n - 1 )return;

    for(int i = 0; i < 8; i++ ){
        int nr = r + dr[i];
        int nc = c + dc[i];

        if(nr >= 0 && nr < 2 && nc >= 0 && nc < n ){
            if(grid[nr][nc] == '0' && !visited[nr][nc]){
                dfs(nr, nc);
            }
        }
    }
}

void solve(){

    cin >> n;
    cin >> grid[0] >> grid[1];  

    //Marca todos os vertices como "não visitados"
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < n; j++){
            visited[i][j] = false;
        }
    }

    dfs(0, 0);

    if(visited[1][n - 1]){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }

    return 0;
}