
        #include <stdio.h>
        int main(){
        int bilangan;
        
        printf("pilih bilangan\n 0 : Desimal - Biner\n 1 : Biner-Desimal\n 2 : Desimal-Octal\n 3 :  Octal - Desimal\n   = ");
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
        




















Tugas Pemrograman 2

        #include<stdio.h>
        int main(){
        
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

kode tersebut ketika di jalankan akan mencari tau apakah suatu tahun merupakan tahun kabisat atau bukan dengan memperhatikan syarat yaitu : 

a. Jika inputan user hanya terdiri dari 3 angka, maka program akan meminta user untuk menginput kembali tahunnya.

b. Jika inputan user lebih dari 4 angka, maka program juga akan meminta user untuk menginput kembali tahunnya.

c. Jika inputan user bukan bilangan, maka program akan meminta user untuk menginput kembali tahunnya. (Manfaatkan standard-library function)

d. Jadi, hanya 4 angka saja yang boleh menjadi inputan.

    printf("masukkan tahun = ");
    scanf("%d", &tahun);
    while(getchar() != '\n');
    while(tahun > 9999 || tahun  < 1000){
        printf("masukkan ulang tahun = ");
        scanf("%d", &tahun);
        while (getchar() != '\n') {} 
    }

ketika user measukkan tahun kurang dari 4 angka maka akan masuk ke kondisi while yang di mana while(tahun > 9999 || tahun < 1000). Dalam artian, keika angka kurang dari 1000 maka 
akan menyuruh user untuk memasukkan kembali tahun. 

ketika user measukkan tahun lebih dari 4 angka maka akan masuk ke kondisi while yang di mana while(tahun > 9999 || tahun < 1000). Dalam artian, keika angka lebih dari 9999 maka
akan menyuruh user untuk memasukkan kembali tahun.

ketika user memasukkan huruf dan tidak terdapat angka maka  program menggunakan perulangan while(getchar() != '\n'); untuk membersihkan buffer input, sehingga menghapus karakter
tambahan (termasuk karakter baru \n) yang mungkin tersisa di dalam buffer setelah proses pembacaan input tahun.

jika user memasukkan 4 angka, maka akan masuk ke kondisi untuk memastikan apakah 4 angka tersebut termasuk tahun kabisat.

         if(tahun %4 == 0 && tahun %100 !=0 || tahun %400 == 0){
                printf("ini tahun kabisat\n");
        }else{
                printf("bukan tahun kabisat\n");
        }
jika angka tersebut habis di bagi 4 maka itu adalah tahun kabisat. (tahun %4 == 0)

jika angka tersebut tidak habis di bagi 100 maka angka tersebut bukan tahun kabisat (tahun %100 != 0)

jika angka tersebut habis di bagi 400 maka angka tersebut adalah tahun kabisat. (tahun %400 == 0).



        
