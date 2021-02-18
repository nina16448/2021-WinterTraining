#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b){
    return a + b > b + a;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector <string> arr;
    int n;
    string s;
    
    while(cin >> n){
        arr.clear();
        while(n--){
            cin >> s;
            arr.push_back(s);
        }
        sort(arr.begin(), arr.end(), cmp);

        for(auto x: arr)
            cout << x;
        cout << "\n";
    }
    return 0;
}