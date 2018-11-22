#include <stdio.h>

int main()
{
    int a, b;
    char ans;
    scanf("%d %d", &a, &b);
    if(a != 1 || b != 1){
        if(a % 2 == 0){
            printf("No");

        } else if(b % 2 == 0){
            printf("No");
        } else{
            printf("Yes");
        }
    } else {
        printf("Yes");
    }
    return 0;
}
