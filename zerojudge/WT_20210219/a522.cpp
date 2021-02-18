#include <bits/stdc++.h>
using namespace std;
int t, len, n, rec, flag;
vector <int> arr;

void DFS(int level, int sum){
    if(sum > len) return;

    if(level == n){
        if(sum == len) flag = 1;
        return;
    }

    DFS(level + 1, sum + arr[level]);
    DFS(level + 1, sum);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> t;

    while(t--){
        flag = 0;
        arr.clear();

        cin >> len >> n;
        for(int i = 0; i < n; i++){
            cin >> rec;
            arr.push_back(rec);
        }

        DFS(0, 0);

        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}