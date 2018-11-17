#include <stdio.h>

int main()
{
    int N, T;
    scanf("%d %d", &N, &T);
    int c[N], t[N];
    int ans = 2000;
    for (int i =0; i<N;i++){
        scanf("%d %d",&c[i], &t[i]);
        if(t[i] <= T){
            if(c[i] < ans){
                ans = c[i];
            }
        }
    }
    if(ans == 2000){
        printf("TLE");
    } else {
        printf("%d", ans);
    }
    return 0;
}
