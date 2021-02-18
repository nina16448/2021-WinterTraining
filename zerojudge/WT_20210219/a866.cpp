#include <bits/stdc++.h>
using namespace std;

int main(){
    map <int, int> mp;
    int sc, num = 0, cnt = 0;

    while(scanf("%d", &sc) != EOF && sc != 0){
        mp[sc]++;
        num += sc;
        cnt++;
    }

    for(int i = 5; i > 0; i--){
        printf("%d (%2d) |", i, mp[i]);

        while(mp[i]--)
            printf("=");
            
        printf("\n");
    }

    printf("Average rating: %.4f", (double)num / cnt);

    return 0;
}