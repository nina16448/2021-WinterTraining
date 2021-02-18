#include <bits/stdc++.h>
using namespace std;
int n, maxsum;
int visited[10][10];
int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
char mapp[10][10];

void DFS(int x, int y, int sum){
    visited[x][y] = 1;

    if(mapp[x][y] == '0'){
        maxsum = max(sum, maxsum);
        return;
    }

    for(auto d: dir){
        if(visited[x + d[0]][ y + d[1]] == 1) continue;

        DFS(x + d[0], y + d[1], sum + 1);
        
        visited[x + d[0]][ y + d[1]] = 0;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    maxsum = 0;
    for(int i = 0; i < 10; i++)
        memset(mapp[i], '0', 9);

    cin >> n;

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> mapp[i][j];

    DFS(1, 1, 0);

    cout << maxsum << "\n";

    return 0;
}