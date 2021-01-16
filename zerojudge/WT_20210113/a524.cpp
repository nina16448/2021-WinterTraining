#include <bits/stdc++.h>
using namespace std;
int n;
vector <int> stp;
bool flag[9];

void DFS(int level){
    if(level == n){
        for(auto x:stp) cout << x;
        cout << "\n";
        return;
    }
    
    for(int i = n; i > 0; i--){
        if(flag[i]) continue;
        flag[i]=true;
        stp.push_back(i);
        DFS(level+1);

        stp.pop_back();
        flag[i]=false;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    while(cin >> n){
        for(int i = 0; i < 9; i++) 
            flag[i] = false;
        stp.clear();

        DFS(0);
    }

    return 0;
}