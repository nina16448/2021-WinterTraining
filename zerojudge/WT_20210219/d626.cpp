#include <bits/stdc++.h>
using namespace std;
int n, x, y;
int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
char mapp[200][200];

void DFS(int x, int y){
    if(mapp[x][y] == '+')
        return;

    mapp[x][y] = '+';

    for(auto d: dir)
        DFS(x + d[0], y + d[1]);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    for(int i = 0; i < 150; i++)
        memset(mapp[i], '+', 150);
    cin >> n;

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> mapp[i][j];
        
    cin >> x >> y;
    DFS(x + 1, y + 1);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++)
            cout << mapp[i][j];
        cout << "\n";
    }
    
    return 0;
}
