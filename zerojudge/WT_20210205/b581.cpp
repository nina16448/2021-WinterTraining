#include <bits/stdc++.h>
using namespace std;
typedef long long lint;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, num, sum;
    string s;
    stringstream ss;

    getline(cin, s);
    ss << s;
    ss >> t;

    while(t--){
        sum = 0;
        ss.clear();
        getline(cin, s);
        
        ss << s;
        while(ss >> num){
            sum += num;
        }
        
        cout << sum << "\n";
    }
    return 0;
}