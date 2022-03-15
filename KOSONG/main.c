#include <stdio.h>

void main(){
    int pd,kalkulus,pti,orkom;
    char nama[20];
    float ratarata;

    printf("Masukkan Nama Lengkap Anda: ");
    gets(nama);
    printf("Masukkan Nilai Pemograman Dasar : ");
    scanf("%d", &pd);
    printf("Masukkan Nilai Kalkulus : ");
    scanf("%d", &kalkulus);
    printf("Masukkan Nilai PTI : ");
    scanf("%d", &pti);
    printf("Masukkan Nilai Orkom : ");
    scanf("%d", &orkom);
    printf("\n");

    ratarata = (pd+kalkulus+pti+orkom) /4 ;
    printf ("Maka, Mahasiswa Atas Nama : %s\n",nama);
    printf ("Dengan Nilai Rata-Rata : %.0f\n",ratarata);
    printf("\n");

    if(ratarata >=75 && ratarata <=100){
        printf("Telah Lulus\n");
    }else
        printf("Belum Lulus\n");
    printf("\n");

    printf("%s\n" , JUDUL );
}




