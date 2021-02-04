#include <bits/stdc++.h>
using namespace std;
typedef long long lint;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    lint num1, num2;
    string rec;
    stringstream ss;

    while(cin >> num1){
        ss.clear();
        
        ss << num1;
        ss >> rec;

        reverse(rec.begin(), rec.end());
        ss.clear();

        ss << rec;
        ss >> num2;

        cout << num1 + num2 << "\n";
    }
    return 0;
}