#include <bits/stdc++.h>
using namespace std;
int N, M;
int visited[1000];
vector <int> Map[1000];

void DFS(int level, int end){
    visited[level] = 1;
    if(level == end)
        return;
    
    for(auto x: Map[level]){
        if(visited[x]) continue;

        DFS(x, end);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    while(cin >> N >> M){
        int A, B;
        for(int i = 0; i <1000; i++){
            Map[i].clear();
            visited[i] = 0;
        }

        for(int i = 0; i < M; i++){
            cin >> A >> B;
            Map[A].push_back(B);
        }

        cin >> A >> B;
        DFS(A, B);

        if(visited[B])
            cout << "Yes!!!\n";
        else 
            cout << "No!!!\n";
    }

    return 0;
}