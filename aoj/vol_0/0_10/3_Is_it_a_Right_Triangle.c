#include <stdio.h>

void sort(int *num);

void sort(int *num){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(num[i] > num[j]){
                int max = num[j];
                int min = num[i];
                num[i] = max;
                num[j] = min;
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    char * ans[n];
    for (int i=0; i<n; i++){
      int num[256];
      scanf("%d %d %d", &num[0], &num[1], &num[2]);
      sort(num);
      if(num[0] > num[1] && num[0] > num[2]){
          if(num[0]*num[0] == num[1]*num[1] + num[2]*num[2]) {
            ans[i] = "YES";
          } else {
            ans[i] = "NO";
          }
      } else {
          ans[i] = "NO";
      }
    }
    for (int i=0; i<n; i++){
        printf("%s\n",ans[i]);
    }
    return 0;
}
