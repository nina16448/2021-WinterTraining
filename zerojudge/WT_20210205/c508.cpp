#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, rec;
    vector <int> arr;
    set <int> st;
    cin >> n;

    while(n--){
        cin >> rec;
        arr.push_back(rec);
    }

    sort(arr.begin(), arr.end());

    for(auto x: arr){
        cout << x << " ";
        st.insert(x);
    }
    cout << "\n";

    arr.clear();
    for(auto x: st) arr.push_back(x);
    reverse(arr.begin(), arr.end());

    for(auto x: arr) cout << x << " ";
    cout << "\n";
    
    return 0;
}