#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while(cin >> n){
        priority_queue <int, vector <int>, greater<int> > pq;
        int rec;
        for(int i=0;i<n;i++){
            cin >> rec;
            pq.push(rec);
        }
        for(int i = 0; i < n;i++){
            cout << pq.top() << " ";
            pq.pop();
        }
        cout << "\n";
    }
    return 0;
}