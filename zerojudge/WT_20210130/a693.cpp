#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m, rec1, rec2;
    int sum[100001];
    
    while(cin >> n){
        memset(sum, 0, 100001);
        cin >> m;

        for(int i = 1; i <= n; i++){
            cin >> rec1;
            sum[i] = sum[i-1] + rec1;
        }

        for(int i = 0; i < m; i++){
            cin >> rec1 >> rec2;
            cout << sum[rec2] - sum[rec1-1] << "\n";
        }
    }

    return 0;
}