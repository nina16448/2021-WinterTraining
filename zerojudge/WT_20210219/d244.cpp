#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    map <int, int> mp;
    int num;
    string s;
    stringstream ss;
    getline(cin, s);

    ss << s;
    while(ss >> num)
        mp[num]++;

    for(auto x: mp){
        if(x.second % 3 != 0) cout << x.first << "\n";
    }

    return 0;
}