#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N, rec;

    while(cin >> N){
        priority_queue <int> pq;
        
        while(N--){
            cin >> rec;
            pq.push(rec);
        }

        cout << pq.top() << "\n";
    }
    return 0;
}
