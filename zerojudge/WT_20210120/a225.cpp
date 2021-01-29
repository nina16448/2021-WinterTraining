#include <bits/stdc++.h>
using namespace std;

bool cmp (int a, int b){
    if(a % 10 == b % 10) return a > b;
    return (a % 10) < (b % 10);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, rec;
    while(cin >> n){
        vector <int> arr;
        for(int i = 0; i < n; i++){
            cin >> rec;
            arr.push_back(rec);
        }

        sort (arr.begin(), arr.end(), cmp);

        for(auto x: arr)
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}
