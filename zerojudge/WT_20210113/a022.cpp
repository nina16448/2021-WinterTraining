#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    string s;
    string rec;
    while(cin >> s){
        rec=s;
        reverse(s.begin(),s.end());
        if(s==rec) cout << "yes\n";
        else cout << "no\n";
    }
    return 0;
}