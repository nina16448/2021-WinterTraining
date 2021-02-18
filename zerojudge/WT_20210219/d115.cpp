#include <bits/stdc++.h>
using namespace std;
int n, m, rec;
vector <int> arr, stp;

void DFS(int level){
    if(level == n){
        if(stp.size() != m) return;

        for(auto x: stp)
            cout << x << " ";
        cout << "\n";
        
        return;
    }

    stp.push_back(arr[level]);
    DFS(level + 1);

    stp.pop_back();
    DFS(level + 1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    while(cin >> n && n != 0){
        arr.clear();
        stp.clear();

        for(int i = 0; i < n; i++){
            cin >> rec;
            arr.push_back(rec);
        }

        sort(arr.begin(), arr.end());
        cin >> m;

        DFS(0);
        cout << "\n";
    }
    return 0;
}