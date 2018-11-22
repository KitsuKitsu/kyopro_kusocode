#include <stdio.h>
#include <string.h>

int main()
{
    char input[20], ans[20];
    scanf("%s", &input);
    int len = strlen(input);
    for (int i=0; i<len; i++){
        int p = len - i;
        ans[i] = input[p-1];
    }
    ans[len] = '\0';
    printf("%s\n", ans);
    return 0;
}
