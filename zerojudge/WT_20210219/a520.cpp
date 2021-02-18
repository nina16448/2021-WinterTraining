#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    int num, maxs, rec, cnt;
    while(getline(cin, s)){
        num = 0;
        maxs = 0;
        for(auto x: s){
            if(isspace(x)) num++;
            else num = 0;
            maxs = max(maxs, num);
        }
        cnt = 0;
        
        while(maxs > 1){
            rec = maxs % 2;
            maxs /= 2;
            maxs += rec;
            cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}