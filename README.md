# tes
#include<stdio.h>

int main(){
        char karakter;
        int tahun;
    printf("masukkan tahun = ");
    scanf("%d", &tahun);
    while(getchar() != '\n');

    while(tahun > 9999 || tahun  < 1000){
        printf("masukkan ulang tahun = ");
        scanf("%d", &tahun);
        while (getchar() != '\n') {} 
    }

    if(tahun %4 == 0 && tahun %100 !=0 || tahun %400 == 0){
                printf("ini tahun kabisat\n");
        }else{
                printf("bukan tahun kabisat\n");
        }

    return 0;
}
