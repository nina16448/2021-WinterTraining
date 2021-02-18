#include <bits/stdc++.h>
using namespace std;
vector <string> graph;
string s, name, command;
int n, m, I, R;

void Reverse(){
    for(int i = 0; i < m; i++)
        reverse(graph[i].begin(), graph[i].end());
        
}

void Invert(){
    reverse(graph.begin(), graph.end());
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    while(cin >> name >> n >> m >> command){
        graph.clear();
        I = R = 0;

        for(int i = 0; i < m; i++){
            cin >> s;
            graph.push_back(s); 
        }
        
        for(auto x: command){
            if(x == 'R') R++;
            if(x == 'I') I++;
        }
        if(R % 2) Reverse();
        if(I % 2) Invert();
        
        cout << name << "\n";
        for(auto x: graph)
            cout << x << "\n";
    }
    
    return 0;
}