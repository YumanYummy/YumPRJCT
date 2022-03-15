#include <stdio.h>

void main(){
    int nilaiipk;
    char nama [50];

    printf("Masukkan Nama Anda: ");
    gets(nama);
    printf("Masukkan Nilai IPK Anda: ");
    scanf("%d", &nilaiipk);

    switch(nilaiipk){
        case 81 ... 100:
        printf("Selamat Nilai Anda Adalah A");
        break;
        case 71 ... 80:
        printf("Selamat Nilai Anda Adalah B");
        break;
        case 61 ... 70:
        printf("Selamat Nilai Anda Adalah C");
        break;
        case 51 ... 60:
        printf("Selamat Nilai Anda Adalah D");
        break;
        case 41 ... 50:
        printf("Selamat Nilai Anda Adalah E");
        break;
    default:
        printf("Anda Belum Lulus");

    }

}





