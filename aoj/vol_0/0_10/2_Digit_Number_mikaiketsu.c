#include <stdio.h>

int main()
{
    int a[200], b[200], i=0;
    int ans[200];
    while(scanf("%d %d", &a[i], &b[i]) == 1){
        int num = a[i]+b[i];
        /*int didit = 0;
        while(num != 0){
            num /= 10;
            didit++;
        }*/
        ans[i] = num;
        i++;
    }
    for(int j=0;j<i;j++){
        printf("%d\n", ans[j]);
    }
    return 0;
}
