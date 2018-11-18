#include <stdio.h>

int main()
{
    int hills[10];
    for(int i=0;i<10;i++){
        scanf("%d",&hills[i]);
    }
    for(int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            if(hills[i] > hills[j]){
                int apple = hills[i];
                int banana = hills[j];
                hills[i] = banana;
                hills[j] = apple;
            }
        }
    }
    for (int i = 0;i<3;i++){
        printf("%d\n", hills[i]);
    }
    return 0;
}
