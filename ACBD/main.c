#include <stdio.h>

void main(){
    int nilaiipk;

    printf("Inputkan Nilai IPK Anda: ");
    scanf("%d", &nilaiipk);

    if(nilaiipk >= 81 && nilaiipk <= 100){
        printf("\nSelamat Nilai Anda A");
    }else if(nilaiipk >=71 && nilaiipk <= 80){
        printf("\nSelamat Nilai Anda B");
    }else if (nilaiipk >=61 && nilaiipk<= 70){
        printf("\nSelamat Nilai Anda C");
    }else {
        printf("\nNICE TRY ANDA MASIH GOBLOK");
    }



}

