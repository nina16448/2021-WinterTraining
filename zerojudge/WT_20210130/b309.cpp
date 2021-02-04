#include <bits/stdc++.h>
using namespace std;
string rec;
map <string, int> mp, se;

bool cmp(pair <string, int> A, pair <string, int> B){
    if(A.second == B.second)
        return se[A.first] < se[B.first];

    return A.second > B.second;
}

void sequence(){
    mp["Saber"] = 0;
    se["Saber"] = 1;
    se["Lancer"] = 2;
    se["Archer"] = 3;
    se["Rider"] = 4;
    se["Caster"] = 5;
    se["Assassin"] = 6;
    se["Berserker"] = 7;
}

void word(char c){
    if(c <= 'Z') c = c - 'A' + 'a';

    switch(c){
        case 'a': case 'h': case 'o': case 'v':
            mp["Saber"]++;
            return;

        case 'b': case 'i': case 'p': case 'w':
            mp["Lancer"]++;
            return;

        case 'c': case 'j': case 'q': case 'x':
            mp["Archer"]++;
            return;

        case 'd': case 'k': case 'r': case 'y':
            mp["Rider"]++;
            return;

        case 'e': case 'l': case 's': case 'z':
            mp["Caster"]++;
            return;

        case 'f': case 'm': case 't':
            mp["Assassin"]++;
            return;

        case 'g': case 'n': case 'u':
            mp["Berserker"]++;
            return;

        default:
            return;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector < pair <string, int> > arr;
    sequence();

    while(cin >> rec){
        for(auto x: rec)
            word(x);
    }

    for(auto x: mp)
        arr.push_back(x);

    sort(arr.begin(), arr.end(), cmp);

    cout << arr[0].first;
    return 0;
}