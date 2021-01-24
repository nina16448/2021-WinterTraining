#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    map <int, int> mp;
    int ID, num;

    while(cin >> ID && ID != -1){
        cin >> num;
        mp[ID] = num;
    }

    while(cin >> ID && ID != -1){
        cin >> num;
        mp[ID] += num;
    }
    for(auto x: mp) 
        cout << x.first << " " << x.second << "\n";
    return 0;
}