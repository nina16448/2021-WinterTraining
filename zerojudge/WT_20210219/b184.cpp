#include <bits/stdc++.h>
using namespace std;
#define v first
#define c second
int n, maxvalue;
vector < pair <int, int> > arr;
pair <int, int> rec;

void DFS(int level, int vsum, int csum){
    if(vsum > 100) return;
    if(level == n){
        maxvalue = max(csum, maxvalue);
        return;
    }

    DFS(level + 1, vsum + arr[level].v, csum + arr[level].c);

    DFS(level + 1, vsum, csum);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    while(cin >> n){
        arr.clear();
        maxvalue = 0;

        for(int i = 0; i < n; i++){
            cin >> rec.v >> rec.c;
            arr.push_back(rec);
        }

        DFS(0, 0, 0);
        cout << maxvalue << "\n";
    }

    return 0;
}