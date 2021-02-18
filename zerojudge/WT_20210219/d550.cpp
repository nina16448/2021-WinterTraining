#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector <vector <int> > arr;
    vector <int> rec;
    int num, n, m;
    cin >> n >> m;

    while(n--){
        rec.clear();
        for(int i = 0; i < m; i++){
            cin >> num;
            rec.push_back(num);
        }
        
        arr.push_back(rec);
    }
    
    sort(arr.begin(), arr.end());

    for(auto x: arr){
        for(auto y: x)
            cout << y << " ";
        cout << "\n";
    }
    return 0;
}