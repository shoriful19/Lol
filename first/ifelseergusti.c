#include <stdio.h>

int main(){
    int takaAchekoto;
    printf("taka ache koto bolo:");
    scanf("%d",&takaAchekoto);

    if (takaAchekoto >= 9000){
        printf("Cox's Bazar Jabo\n");
        if (takaAchekoto >= 10000){
            printf("Saint Martin O jabo");
        }
        else {
            printf("Saint Martin Jabona");
        }
    }
    else {
        printf("Kothao Jabona");
    }
    return 0;
}