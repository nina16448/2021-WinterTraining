#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    int ans, num;
    while(cin >> s){
        ans = 0;
        num = 1;
        reverse(s.begin(), s.end());

        for(auto x: s){
            ans += (x - '0') * num;
            num *= -2;
        }

        cout << ans << "\n";
    }
    return 0;
}