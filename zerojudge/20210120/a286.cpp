#include <bits/stdc++.h>
using namespace std;
int goal;
struct value{
    int val;
    int ID;
};

int NUM (int year, int month, int days){
    stringstream ss;
    string rec, s;
    int sum;

    ss << year;
    ss >> rec;
    s = rec;
    ss.clear();

    ss << month;
    ss >> rec;
    s += rec;
    ss.clear();

    ss << days;
    ss >> rec;
    s += rec;
    do{
        ss.clear();
        sum = 0;
        for(auto x: s){
            sum += x - '0';
        }
        ss << sum;
        ss >> s;
    }
    while(sum >= 10);

    return sum;
}

bool cmp(value A, value B){
    int abs_A = abs(A.val - goal);
    int abs_B = abs(B.val - goal);
    if(abs_A == abs_B) return A.ID < B.ID;
    return abs_A < abs(B.val - goal);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int y, m, d, n;
    value puipui[1000];

    while(cin >> y){
        cin >> m >> d;
        goal = NUM(y, m, d);
        cin >> n;
        
        for(int i = 0; i < n; i++){
            cin >> y >> m >> d;
            puipui[i].val = NUM(y, m, d);
            puipui[i].ID = i+1;
        }

        sort(puipui, puipui + n, cmp);
        cout << puipui[0].ID << "\n";
    }
    return 0;
}