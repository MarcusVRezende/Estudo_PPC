#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, s;

    if (!(cin >> n >> s))
    {
        return;
    };

    vector<int> a(n + 1);
    vector<int> b(n + 1);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int j = 0; j < n; j++)
    {
        cin >> b[j];
    }

    if(a[0] == 0){
        cout << "NO\n";
        return;
    }
    if(a[s - 1] == 1){
        cout << "YES\n";
        return;
    }
    if(b[s - 1] == 0 ){
        cout << "NO\n";
        return;
    }
    for(int i = s; i < n; i++){
        if(a[i] == 1 && b[i] == 1){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}
