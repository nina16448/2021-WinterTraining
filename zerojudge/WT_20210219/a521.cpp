#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, rec, sum, maxsum;
    while(cin >> n && n != 0){
        sum = maxsum = 0;
        for(int i = 0; i < n; i++){
            cin >> rec;
            sum += rec;
            maxsum = max(maxsum, sum);
            if(sum < 0) sum = 0;
        }
        if(maxsum == 0) cout << "Losing streak.\n";
        else cout << "The maximum winning streak is " << maxsum << ".\n";
    }
    return 0;
}