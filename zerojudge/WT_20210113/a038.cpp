#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    string s;
    cin >> s;
    reverse(s.begin(),s.end());
    while(s.size() != 1 && s[0]=='0')
        s.erase(s.begin());
    for(auto x:s) cout << x;
    return 0;
}