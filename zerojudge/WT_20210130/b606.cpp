#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    priority_queue <int, vector <int>, greater <int> > pq;
    int n, rec, num, sum;

    while(cin >> n && n != 0){
        sum = 0;
        
        while(n--){
            cin >> rec;
            pq.push(rec);
        }

        while(pq.size() != 1){
            num = pq.top();
            pq.pop();

            num += pq.top();
            pq.pop();
            
            sum += num;
            pq.push(num);
        }

        cout << sum << "\n";
        pq.pop();
    }
    return 0;
}