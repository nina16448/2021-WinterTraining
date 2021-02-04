#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    pair <int, int> chap[2000], rec;
    priority_queue < pair <int, int> > pq;
    int N, T, sc = 0;
    cin >> N >> T;

    for(int i = 0; i< N; i++){
        cin >> chap[i].first >> chap[i].second;
        pq.push(chap[i]);
    }

    while(T--){
        sc += pq.top().first;

        rec = pq.top();
        pq.pop();
        rec.first -= rec.second;
        if(rec.first < 0) rec.first = 0;

        pq.push(rec);
    }
    cout << sc << "\n";
    return 0;
}