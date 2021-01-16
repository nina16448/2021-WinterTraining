#include <bits/stdc++.h>
using namespace std;
int n, stp, rec;
stack <int> st;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    while(n--){
        cin >> stp;
        if(stp == 1){
            st.pop();
        }
        if(stp == 2){
            cout << st.top() << "\n";
        }
        if(stp == 3){
            cin >> rec;
            st.push(rec);
        }
    }
    return 0;
}