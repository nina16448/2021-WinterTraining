#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m, rec;
    string s, sums, answord;
    while(cin >> n >> m && n !=0 && m != 0){
        sums.clear();
        answord.clear();
        while(n--){
            cin >> s;
            sums += s;
        }
        while(m--){
            cin >> rec;
            answord += sums[rec-1];
        }
        cout << answord << "\n";
    }
    return 0;
}