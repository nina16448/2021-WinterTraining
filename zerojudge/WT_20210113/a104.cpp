#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while(cin >> n){
        vector <int> arr;
        int rec;
        for(int i=0;i<n;i++){
            cin >> rec;
            arr.push_back(rec);
        }
        sort(arr.begin(),arr.end());
        for(auto x: arr) cout << x << " ";
        cout << "\n";
    }
    return 0;
}