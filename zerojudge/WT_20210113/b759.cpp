#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector <char> arr;
    string s;
    cin >> s;
    for(auto x: s){
        arr.push_back(x);
    }
    
    int size = s.size();
    for(int i = 0; i < size; i++){
        for(auto x:arr) cout << x;
        cout << "\n";
        arr.push_back(arr[0]);
        arr.erase(arr.begin());
    }
    return 0;
}