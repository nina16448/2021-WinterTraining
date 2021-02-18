#include <bits/stdc++.h>
using namespace std;
string s;
char mapp[50][50];
vector <string> ori;

void DFS(int x, int y){
    if(ori[x][y] == '*')
        mapp[x][y] = '*';
    
    else{
        int cnt = 0;
        for(int i = -1; i <= 1; i++){
            for(int j = -1; j <= 1; j++){
                if(x + i < 0 || x + i >= 15) continue;
                if(y + j < 0 || y + j >= 30) continue;

                if(ori[x + i][y + j] == '*') cnt++;
            }
        }
        
        if(cnt == 0) mapp[x][y] = '.';
        else mapp[x][y] = cnt + '0';
    }

    for(int i = -1; i <= 1; i++){
        for(int j = -1; j <= 1; j++){
            if(x + i < 0 || x + i >= 15) continue;
            if(y + j < 0 || y + j >= 30) continue;

            if(mapp[x + i][y + j] == '0') DFS(x + i, y + j);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    for(int i = 0; i < 15; i++)
        memset(mapp[i], '0', 30);

    for(int i = 0; i < 15; i++){
        cin >> s;
        ori.push_back(s);
    }

    DFS(0, 0);

    for(int i = 0; i < 15; i++)
        cout << mapp[i] << "\n";
    
    return 0;
}
