#include <bits/stdc++.h>
using namespace std;
int N,m;
char mapp[110][110]={'0'};
int ans=0;

void DFS(int x,int y){
    int rec=0;
    if(mapp[x-1][y-1]=='1')
        rec++;
    if(mapp[x-1][y]=='1')
        rec++;
    if(mapp[x][y-1]=='1')
        rec++;
    if(mapp[x+1][y+1]=='1')
        rec++;
    if(mapp[x+1][y]=='1')
        rec++;
    if(mapp[x][y+1]=='1')
        rec++;
    if(mapp[x-1][y+1]=='1')
        rec++;
    if(mapp[x+1][y-1]=='1')
        rec++;
    if(mapp[x][y]=='1')
        rec++;
    if(rec==9){
        ans++;
    }
    return;
}

int main(){
    char recc[110];
    scanf("%d",&N);
    while(N--){
        scanf("%d",&m);
        for(int i=1;i<=m;i++){
            scanf("%s",recc);
            for(int j=0;j<m;j++)
                mapp[i][j+1]=recc[j];
        }
        ans=0;
        for(int i=0;i<=m;i++){
            for(int j=0;j<=m;j++){
                DFS(i,j);
            }
        }
        printf("%d\n",ans);
    }

    return 0;
}
