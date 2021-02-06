#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    map <char, int> mp;
    pair <char, int> MAX;
    char rec;
    string s;
    
    while(cin >> s){
        MAX.second = 0;
        mp.clear();

        for(auto x: s){
            if(x != rec)
                mp[x] = 0;

            mp[x]++;

            if(mp[x] > MAX.second){
                MAX.first = x;
                MAX.second = mp[x];
            }

            rec = x;
        }

        cout << MAX.first << " " << MAX.second << "\n";
    }
    return 0;
}