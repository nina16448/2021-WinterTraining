#include <bits/stdc++.h>
using namespace std;

string stp;

void DFS(int N, int left, int right){
    if(right > left) return;

    if(right == N){
        cout << stp;
        cout << "\n";
        return;
    }
    
    if(left<N){    
        stp += '(';
        DFS(N, left+1, right);
        stp.pop_back();
    }

    stp += ')';
    DFS(N, left, right+1);
    stp.pop_back();
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;

    while(cin >> N){
        stp += '(';
        DFS(N,1,0);
        cout << "\n";
        stp.clear();
    }
    
    return 0;
}