#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    priority_queue <int> pq;
    int t, n, m, rec;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cout << "Case " << i << ":\n";
        cin >> n >> m;

        while(n--){
            cin >> rec;
            pq.push(rec);
        }

        while(m--){
            cin >> rec;
            if(rec == 1){
                cin >> rec;
                pq.push(rec);
            }

            else{
                if(pq.empty()) cout << "It's empty!\n";
                else{
                    cout << "Max: " << pq.top() << "\n";
                    pq.pop();  
                }
            }
        }
        if(pq.empty()) cout << "It's empty!\n";
        
        while(!pq.empty()){
            cout << pq.top() << " ";
            pq.pop();
        }
        cout << "\n";
    }
    return 0;
}