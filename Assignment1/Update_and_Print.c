#include <stdio.h>
int main() {
  int N,A,X,V;
  scanf("%d",&N);
  int ar[N];
  
  int j;
  for (int j=0;j<N;j++)
  {
    scanf("%d",&A);
    ar[j]=A;

  }
  scanf("%d %d",&X,&V);
  ar[X]=V;

  for (j=N-1;j>=0;j--)
  {
    printf("%d ",ar[j]);
  }


      return 0;
}
