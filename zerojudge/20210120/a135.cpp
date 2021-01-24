#include <bits/stdc++.h>
using namespace std;

string s;

void solve(int times){
    cout << "Case " << times << ": ";

    if(s == "HELLO") cout << "ENGLISH\n";
    else if(s == "HOLA") cout << "SPANISH\n";
    else if(s == "HALLO") cout << "GERMAN\n";
    else if(s == "BONJOUR") cout << "FRENCH\n";
    else if(s == "CIAO") cout << "ITALIAN\n";
    else if(s == "ZDRAVSTVUJTE") cout << "RUSSIAN\n";
    else cout << "UNKNOWN\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int times = 0;
    while(cin >> s && s != "#"){
        times++;
        solve(times);
    }
    return 0;
}