#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t,n,d,rec,recc;
    bool flag=true;
    vector <int> arr;
    cin >> t;
    while(t--){
        cin >> n >> d;
        for(int i=0;i<n;i++){
            cin >> rec;
            arr.push_back(rec);
            if(rec>d) flag=false;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j) continue;
                if(arr[i]+arr[j]<=d) flag=true;
            }
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
        flag=true;
        arr.clear();
    }
    return 0;
}