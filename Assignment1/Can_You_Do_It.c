#include <stdio.h>
int main() {
  int N;
  scanf("%d",&N);

  if (N<0 || N==0)
  {
    for (int i=N; i<2; i++)
    printf("%d ",i);
  }
if (N>0) {
    for (int i=1; i<=N; i++)
        printf("%d ",i);
    
}


      return 0;
}
