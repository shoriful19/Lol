#include <stdio.h>
int main() {
  char ar[10];
//gets(ar); //just use gets() or fgets() instead of scanf
fgets(ar,10,stdin); //arrayname, size with null, stdin
printf("%s",ar);
      return 0;
}
