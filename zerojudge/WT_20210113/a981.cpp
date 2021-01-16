#include <bits/stdc++.h>
using namespace std;
int arr[50];
int n, m, rec;
vector <int> stp;

void DFS(int level, int sum){
    if(sum > m) return;
    if(level == n){
        if(sum != m) return;
        for(auto x: stp) cout << x << " ";
        cout << "\n";
        rec = 1;
        return;
    }

    stp.push_back(arr[level]);
    DFS(level+1, sum+arr[level]);
        
    stp.pop_back();
    DFS(level+1, sum);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    rec = 0;
    sort(arr, arr+n);

    DFS(0 , 0);
    
    if(rec == 0) cout << "-1\n";
    return 0;
}