
Tugas Pemrograma 1 : Melakukan Konversi Bilangan

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
kode tersebut akan menjalankan perhitungan yang dimana kode tersebut akan meminta user untuk memilih peehitungan 

0. desimal - biner
1. biner - desimal
2. desimal - octal
3. octal - desimal

jika user memilih angka 0 atau desimal - biner, maka kode tersebut akan menjalankan case o yaitu kode 

                case 0:
                    printf("Masukkan bilangan desimal: ");
                        scanf("%d", &bilangan);
                            while(bilangan > 0){
                                printf("%d", bilangan  % 2);                                 
                                    bilangan /= 2;
            }
                    break;
case 0 adalah angka yang di masukkan user sebelumnya. Jika sudah masuk kedalam case 0 maka kode meminta user untuk memsukkan angka desimal. setelah memasukkan angka desimal, angka tersebut di masukkan ke dalam loop while. Angka atau bilangan yang sudah masuk ke while, angka tersebut akan dilihat apakah lebih dari 0, Jika lebih dari 0 maka kode tersebut akan dijalankan lagi. selanjutnya angka tersebut di modulo kan 2 dan mendapatkan hasil, setelah itu angka pertama di masukkan akan di bagi 2 lalu akan masuk ke while kembali. Kode tersebut akan berulang hingga angka yang kita masukkan habis.

jika user memilih angka 1, maka akan masuk ke perhitungan biner - desimal dengan kode program  

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
Case 1 adalah angka yang di masukkan oleh user sebelumnya. Jika sudah masuk kedalam case 1 maka user diminta untuk memasukkan angka biner. Setelah itu angka biner akan masuk ke loop while dan dilihat apakah angka tersebut lebih dari 0. Apabila angka tersebut lebih dari 0 maka kode akan di lanjutkan. Mula-mula kode akan mencari desimal dengan angka di modulo kan 10 lalu di kali dengan hasil dari 1 << pangkat yang di mana maksudnya adalah bergeser 1 bit. Angka diawal akan di di bagi 10, dan proses ini akan berulang yang dimana pangkat akan bertambah ketika proses diulang. Jika angka sudah habis maka semua angka desimal yang di dapat akan di tambahkan dan mendapat hasilnya.

Jika user memilih angka 2, maka akan masuk ke perhitungan desimal - octal yaitu di case 2
                
                case 2:
                        printf("masukkan bilangan desimal = ");
                            scanf("%d", &bilangan);
                                while (bilangan > 0) {
                                    printf("%d", bilangan % 8);
                                        bilangan /= 8;
            }break;


Case 2 adalah angka yang di masukkan oleh user sebelumnya. Jika sudah masuk kedalam case 2 maka user diminta untuk memasukkan angka desimal. Setelah itu angka tersebut akan masuk kedalam loop while dan dilihat apakah kode tersebut lebih dari 0. Jika angka lebih dari 0 maka kode akan dijalankan. selanjutnya angka tersebut di modulo kan 8 dan mendapatkan hasil, setelah itu angka pertama akan di bagi 8 lalu akan masuk ke while kembali. Kode tersebut akan berulang hingga angka yang kita masukkan habis.       

Jika user memilih angka 3, maka akan masuk ke perhitungan octal - desimal yaitu case 3 dengan kode program 

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
Case 3 adalah angka yang di masukkan oleh user sebelumnya. Jika sudah masuk kedalam case 3 maka user diminta untuk memasukkan angka octal yang terdiri dari 0, 1, 2, 3, 4, 5, 6, dan 7. setelah itu angka tersebut akan masuk kedalam loop while yang dimana bilangan apakah lebih dari 0. lalu kode akan mencari angka desimal yang dimana angka tersebut akan di modulokan 10 lalu di kali dengan kita melakukan operasi bit shift ke kiri pada bilangan biner 1 sebanyak 3 kali power. Ini berarti kita menggeser bit 1 ke kiri sebanyak 3 kali power. Hasilnya adalah 1 yang digeser ke kiri sebanyak 3 kali power posisi, yang pada dasarnya merupakan representasi dari 2 pangkat tiga (2^3), yang sesuai dengan perhitungan konversi oktal ke desimal. setelah itu angka awal akan di bagikan 10 lalu akan melakukan proses berulang hingga angka habis. Setelah angka habis yang telah dirubah ke decimal maka semua decimal akan di tambahakan dan mendapatkan hasilnya.  




Tugas Pemrograman 2 : Mengecek Tahun Kabisat

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



        
