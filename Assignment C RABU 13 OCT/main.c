#include <stdio.h>

void main(){
    int nilaiipk;
    char nama [50];

    printf("Masukkan Nama Anda: ");
    gets(nama);
    printf("Masukkan Nilai IPK Anda: ");
    scanf("%d", &nilaiipk);

    if(nilaiipk >= 81 && nilaiipk <= 100){
        printf("\nSelamat Nilai Anda A");
    }else if(nilaiipk >=71 && nilaiipk <= 80){
        printf("\nSelamat Nilai Anda B");
    }else if (nilaiipk >=61 && nilaiipk<= 70){
        printf("\nSelamat Nilai Anda C");
    }else if (nilaiipk >=51 && nilaiipk<= 60){
        printf("\nSelamat Nilai Anda D");
    }else if (nilaiipk >=41 && nilaiipk<= 50){
        printf("\nSelamat Nilai Anda E");
    }else {
        printf("\nMaaf Nilai Anda Bukan A/B/C/D/E");
    }

}
