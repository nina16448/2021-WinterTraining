#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b){
    return b? GCD(b, a % b) : a;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, num, maxgcd;
    vector <int> arr;
    string s;
    stringstream ss;
    
    getline(cin, s);
    ss << s;
    ss >> t;

    while(t--){
        arr.clear();
        ss.clear();
        maxgcd = 0;

        getline(cin, s);

        ss << s;
        while(ss >> num){
            for(auto x : arr)
                maxgcd = max(maxgcd, GCD(x, num));

            arr.push_back(num);
        }

        cout << maxgcd << "\n";
    }
    return 0;
}