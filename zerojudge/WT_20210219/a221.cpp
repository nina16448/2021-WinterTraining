#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    string team, judge, rec;
    stringstream ss;
    cin >> t;
    cin.ignore();

    for(int i = 1; i <= t; i++){
        ss.clear();
        getline(cin, team);
        getline(cin, judge);

        cout << "Case " << i << ": ";

        if(team == judge)
            cout << "Yes\n";

        else{
            ss << team;
            team.clear();
            
            while(ss >> rec)
                team += rec;

            if(team == judge) cout << "Output Format Error\n";
            else cout << "Wrong Answer\n";
        }
    }
    return 0;
}