#include <stdio.h>
int main() {
  char a[9];
 scanf("%s",&a);
 printf("%s\n",a);
 int count=0;
 for (int i=0; a[i]!='\0';i++)
 {
    count++;

 }
printf("Length of Array = %d",count);

      return 0;
}
