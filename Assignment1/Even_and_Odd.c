#include <stdio.h>
int main() {
  int N,V;
  scanf("%d",&N);
  int ar[N];
  for (int i=0; i<N; i++)
  {
    scanf("%d",&V);
    ar[i]=V;
  }
  
 int sum=0, sum2=0;
  for (int i=0; i<N; i++)
  {

    if (ar[i]%2==0)
    {
    sum=sum+ar[i];
     }

   if (ar[i]%2!=0)
    {
    sum2=sum2+ar[i];
     }
  }

  printf("%d %d", sum,sum2);
      return 0;
}
