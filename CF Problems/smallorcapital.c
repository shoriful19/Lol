#include <stdio.h>
int main() {
  char X;
  scanf("%c",&X);
if(X >63 && X<91){
    printf("ALPHA\nIS CAPITAL");
    }
else if (X >96 && X<123){
     printf("ALPHA\nIS SMALL");
 }

 else {
    printf("IS DIGIT");
 }
      return 0;
}
