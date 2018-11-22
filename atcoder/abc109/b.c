#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    char before_w[11], now_w[11];
    char buff[11];
    char log[256][256];
    scanf("%s", &before_w);
    for(int i=0; i<n; i++){
        // scanf("%s", &now_w);
        strcpy(log,before_w);
        printf("%s", log[0][i]);
    }
    return 0;
}
