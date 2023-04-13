#include <stdio.h>
int main() {
  int N, A;
  scanf("%d",&N);
  int ar[N];

    for ( int i= 0; i<N; i++)
    {
        scanf("%d",&A);
        ar[i]= A;

    }
    for (int i = N - 1; i >= 0; i--) {
        if (i % 2 == 0) {
            printf("%d ", ar[i]);
        }
        
    }
    
    

      return 0;
}
