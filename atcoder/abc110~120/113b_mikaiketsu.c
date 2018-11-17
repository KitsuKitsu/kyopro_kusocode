#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d\n", &N);
    int T, A;
    scanf("%d %d\n", &T, &A);
    int H[N];
    int ans;
    long best_temp = 9223372036854775807;

    for(int i=0;i<N;i++){
        long temp[N];
        scanf("%d", &H[i]);
        // printf("H[i] : %d\n", H[i]);
        temp[i] = T-H[i]*6;
        // printf("temp[i] : %d\n", temp[i]);

        if (best_temp > abs(A-temp[i])){
            best_temp = abs(A-temp[i]);
            ans = i+1;
            // printf("best_temp : %d\n", best_temp);
            // printf("ans : %d\n", ans);
        }
    }
    printf("%d\n", ans);
    return 0;
}
