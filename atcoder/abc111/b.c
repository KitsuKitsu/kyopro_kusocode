#include <stdio.h>

int main()
{
    int num[9] = {111,222,333,444,555,666,777,888,999};
    int n;
    scanf("%d", &n);
    for (int i=0; i < 10; i++){
        if(n <= num[i]){
            printf("%d", num[i]);
            break;
        }
    }
    return 0;
}
