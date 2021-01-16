#include <bits/stdc++.h>
using namespace std;

struct point{
    int x;
    int y;
};

bool cmp(point A, point B){
    if(A.x == B.x) return A.y < B.y;
    return A.x < B.x;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    point p[1100];
    for(int i = 0; i < n; i++){
        cin >> p[i].x >> p[i].y;
    }
    sort(p, p+n, cmp);

    for(int i = 0; i < n; i++){
        cout << p[i].x << " " << p[i].y << "\n";
    }
    return 0;
}