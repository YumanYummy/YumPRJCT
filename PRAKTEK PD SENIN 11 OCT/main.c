#include <stdio.h>

int main(){
    int pd,kalkulus,pti,orkom,ratarata;
    char nama[50];
    char nim[30];

    printf("============MENGHITUNG NILAI RATA-RATA MATA KULIAH==============\n");
    printf(" Masukkan Nama Lengkap Anda: ");
    /*
    scanf("%[^\n]", &nama);
    */
    gets(nama);
    printf(" Masukkan NIM Anda: ");
    scanf("%s", &nim);

    printf("==============================================================\n" );
    printf("\n");
    printf(" Masukkan Nilai Pemograman Dasar : ");
    scanf("%d", &pd);
    printf(" Masukkan Nilai Kalkulus : ");
    scanf("%d", &kalkulus);
    printf(" Masukkan Nilai PTI : ");
    scanf("%d", &pti);
    printf(" Masukkan Nilai Orkom : ");
    scanf("%d", &orkom);
    printf("\n");
    printf("==============================================================" );

    ratarata = (pd+kalkulus+pti+orkom) /4 ;
    printf("\n");

    printf("\n");
    printf(" Maka, Mahasiswa Dengan Atas Nama : %s\n",nama);
    printf(" Dengan NIM: %s\n", nim);
    printf(" Dengan Nilai Rata-Rata : %d\n",ratarata);
    printf("\n");

    if(ratarata >=75 && ratarata <=100){
        printf(" Dinyatakan, Telah Lulus\n");
    }else
        printf(" Dinyatakan, Belum Lulus\n");

    printf("==============================================================" );


}




