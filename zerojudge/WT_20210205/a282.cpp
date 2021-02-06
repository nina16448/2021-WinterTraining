#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, rec;
    bool visited[2010];
    while(cin >> n){
        memset(visited, 0, 2010);

        for(int i = 0; i < n; i++){
            cin >> rec;
            visited[rec] = true;
        }

        for(int i = 1; i <= 2000; i++){
            if(visited[i] == false){
                cout << i << "\n";
                break;
            }
        }
    }
    
    return 0;
}