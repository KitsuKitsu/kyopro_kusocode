#include <stdio.h>

int main()
{
    int N, X, Y;
    scanf("%d", &N);
    if (N == 1){
        printf("Hello World");
    } else {
        scanf("%d", &X);
        scanf("%d", &Y);
        printf("%d", X+Y);
    }
    return 0;
}
