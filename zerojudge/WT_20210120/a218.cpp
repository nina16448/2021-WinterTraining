#include <bits/stdc++.h>
using namespace std;

bool cmp (pair <int, int> a, pair <int, int> b){
    if(a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, rec;

    while(cin >> n){
        map <int, int> mp;
        vector < pair <int, int> > arr;
        for(int i = 0 ; i < n; i++){
            cin >> rec;
            mp[rec]++;
        }

        for(auto x: mp)
            arr.push_back(x);

        sort(arr.begin(), arr.end(), cmp);

         for(auto x: arr)
            cout << x.first << " ";

        cout << "\n";
    }
    return 0;
}