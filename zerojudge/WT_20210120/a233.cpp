#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, rec;
    multiset <int> st;
    
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> rec;
        st.insert(rec);
    }

    for(auto x: st) cout << x << " ";
    cout << "\n";
    return 0;
}