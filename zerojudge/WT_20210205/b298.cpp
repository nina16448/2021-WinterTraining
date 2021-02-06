#include <bits/stdc++.h>
using namespace std;
int N, M, L, Q, a, b;
vector <int> Map[20000];
int visited[20000];

void DFS(int level){
    visited[level] = 1;

    for(auto x: Map[level]){
        if(visited[x]) continue;

        DFS(x);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> N >> M >> L >> Q;

    for(int i = 0; i < M; i++){
        cin >> a >> b;
        Map[a].push_back(b);
    }

    while(L--){
        cin >> a;
        DFS(a);
    }

    while(Q--){
        cin >> a;
        if(visited[a]) cout << "TUIHUOOOOOO\n";
        else cout << "YA~~\n";
    }

    return 0;
}