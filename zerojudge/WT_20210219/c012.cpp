#include <bits/stdc++.h>
using namespace std;

bool cmp(pair <char, int> A, pair <char, int> B){
    if(A.second == B.second) return A.first > B.first;
    return A.second < B.second;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    map <char, int> mp;
    vector < pair <char, int> > arr;
    
    while(getline(cin, s)){
        mp.clear();
        arr.clear();
        for(auto x: s)
            mp[x]++;

        for(auto x: mp)
            arr.push_back(x);

        sort(arr.begin(), arr.end(), cmp);

        for(auto x: arr)
            cout << (int)x.first << " " << x.second << "\n";
    }
    return 0;
}