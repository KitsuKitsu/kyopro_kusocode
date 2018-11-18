#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d", &a, &b, &c);
    if(a >= b) d = a;
    else d =b;
    if(d <= c) d = c;

    int ans = d*10 + a + b + c -d;
    printf("%d", ans);
    return 0;
}
