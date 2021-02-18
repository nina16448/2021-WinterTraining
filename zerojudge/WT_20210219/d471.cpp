#include <bits/stdc++.h>
using namespace std;
int n;
string data = "01";
string s;

void DFS(int level){
    if(s.size() == n){
        cout << s << "\n";
        return;
    }
    
    for(auto x: data){
        s += x;
        DFS(level + 1);

        s.pop_back();
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    while(cin >> n){
        s.clear();
        DFS(n);
    }

    return 0;
}