#include <bits/stdc++.h>
using namespace std;
int sc[2000];
int t, n, m, rec, k;

void Maxsc(){
    int X, Y;
    priority_queue <int> pq;
    cin >> X >> Y;
    
    for(int i = X; i <= Y; i++)
        pq.push(sc[i]);

    cout << pq.top() << "\n";
}

void Average(){
    int X, Y, sum = 0, times = 0;
    cin >> X >> Y;

    for(int i = X; i <= Y; i++, times++)
        sum += sc[i];

    cout << sum / times << "\n";
}

void Score(){
    int E;
    cin >> E;
    cout << sc[E] << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> t;

    while(t--){
        cin >> n >> m;
        
        for(int i = 0; i < n; i++)
            cin >> sc[i];
        
        while(m--){
            cin >> k;
            if(k == 1) Maxsc();
            if(k == 2) Average();
            if(k == 3) Score();
        }
    }
    
    return 0;
}