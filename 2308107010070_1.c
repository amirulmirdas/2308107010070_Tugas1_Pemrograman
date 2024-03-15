#include <stdio.h>
int main(){
        int bilangan;
        printf("pilih bilangan\n 0 : Desimal - Biner\n 1 : Biner-Desimal\n 2 : Desimal-Octal\n 3 : Octal - Desimal\n   = ");
        scanf("%d", &bilangan);
            switch(bilangan){
                case 0:
                    printf("Masukkan bilangan desimal: ");
                        scanf("%d", &bilangan);
                            while(bilangan > 0){
                                printf("%d", bilangan  % 2);                                 
                                    bilangan /= 2;
            }
                    break;
                case 1:
                    printf("masukkan bilangan biner = ");
                        scanf("%d", &bilangan);
                            int desimal = 0, pangkat = 0;
                                while (bilangan > 0) {
                                    desimal += (bilangan % 10) * (1 << pangkat);
                                        bilangan /= 10;
                                            pangkat++;
            }
                            printf("%d", desimal);
                            break;
                case 2:
                        printf("masukkan bilangan desimal = ");
                            scanf("%d", &bilangan);
                                while (bilangan > 0) {
                                    printf("%d", bilangan % 8);
                                        bilangan /= 8;
            }break;
                case 3: 
                        printf("masukkabn bilangan octal = ");
                            scanf("%d", &bilangan);
                                int decimal = 0, power = 0;
                                    while (bilangan > 0) {
                                        decimal += (bilangan % 10) * (1 << (3 * power));
                                            bilangan /= 10;
                                                power++;
                                            
            }printf("%d", decimal);
            break;
                    default:
                            printf("keluar");
        }
return 0;
}

