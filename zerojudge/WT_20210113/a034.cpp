#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int n;
    vector <int> arr;
    while(cin >> n){
        while(n != 0){
            arr.push_back(n%2);
            n /= 2;
        }
        reverse(arr.begin(),arr.end());
        for(auto x: arr) cout << x;
        cout << "\n";
        arr.clear();
    }
    return 0;
}