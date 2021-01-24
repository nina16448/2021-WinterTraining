#include <bits/stdc++.h>
using namespace std;

map <char, int> mp;
string s;

void solve(){
    for(auto x: mp){
        if(x.second % 2 != 0){
            cout << "no\n";
            return;
        }
    }
    
    cout << "yes\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    while(cin >> s && s != "STOP!!"){
        mp.clear();

        for(auto x: s) mp[x]++;
        cin >> s;
        for(auto x: s) mp[x]++;

        solve();
    }
    return 0;
}