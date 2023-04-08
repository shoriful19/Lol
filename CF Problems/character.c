#include <stdio.h>
int main() {
 char cd;
 scanf("%c",&cd);

 if(cd >=65 && cd <=90){
    printf("%c",cd+32);
    }
 else if (cd >=97 && cd<=122){
    printf("%c",cd-32);
 }

 return 0;
}
