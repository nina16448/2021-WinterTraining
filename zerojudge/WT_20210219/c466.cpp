#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s, num;
    stringstream ss;
    int cnt = 0, ans;
    cin >> s;

    for(auto x: s){
        if(isdigit(x)) num += x;
        if(x == '-')cnt++;
    }

    ss << num;
    ss >> ans;

    if(cnt % 2) ans = -ans;
    cout << ans << "\n";

    return 0;
}