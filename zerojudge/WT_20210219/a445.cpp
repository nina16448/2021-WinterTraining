#include <bits/stdc++.h>
using namespace std;
int N, M, Q;
int num = 1;
int fri[20000];

void MAP(int a, int b){
    if(fri[a] == 0 && fri[b] == 0){
        fri[a] = num;
        fri[b] = num;
        num++;
        return;
    }

    if(fri[a] == 0){
        fri[a] = fri[b];
        return;
    }

    if(fri[b] == 0){
        fri[b] = fri[a];
        return;
    }
    if(fri[a] != fri[b]){
        int rec = fri[b];

        for(int i = 1; i <= N; i++){
            if(fri[i] == rec)
                fri[i] = fri[a]; 
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> N >> M >> Q;
    int recA, recB;
    while(M--){
        cin >> recA >> recB;
        MAP(recA, recB);
    }

    while(Q--){
        cin >> recA >> recB;

        if(recA == recB)
            cout << ":)\n";

        else if(fri[recA] == fri[recB] && fri[recA] != 0) 
            cout << ":)\n";
            
        else 
            cout << ":(\n";
    }
    return 0;
}