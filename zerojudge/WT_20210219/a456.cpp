#include <bits/stdc++.h>
using namespace std;
int t, N;
vector <int> stp;
vector < vector <int> > recstp;

bool cmp(vector <int> A, vector <int> B){
    if(A.size() == B.size())
        return A < B;

    return A.size() < B.size();
}

void DFS(int level){
    if(level == N + 1){
        if(stp.empty()) stp.push_back(0);

        recstp.push_back(stp);
        return;
    }

    stp.push_back(level);
    DFS(level + 1);
    
    stp.pop_back();
    DFS(level + 1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> t;

    while(t--){
        recstp.clear();
        stp.clear();
        cin >> N;
        DFS(1);

        sort(recstp.begin(), recstp.end(), cmp);

        for(auto arr: recstp){
            int flag = 0;
            cout << "{";
            for(auto x: arr){
                if(flag) cout << ",";
                cout << x;
                flag = 1;
            }
            cout << "}\n";
        }
        cout << "\n";
    }

    return 0;
}