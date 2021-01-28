#include <cstdio>
using namespace std;
int num[110];

main(){
    int n, rec;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &rec);
        num[rec]++;
    }

    for(int i = 1; i <= 100; i++){
        for(int j = 0; j < num[i]; j++)
            printf("%d ", i);
    }

    printf("\n");
}