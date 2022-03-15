#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nilaiUcup[3];
    int nilaiPraditya[3];
    int perbandingannilai[3];

    printf("Nilai Ucup: \n");
    for(int i=0;i<3;i++)
    {
        printf("Nilai Ujian Ucup Ke - %d: ", i);
        scanf("%d", &nilaiUcup [i]);

    }
        printf("\n");

    printf("Nilai Praditya: \n");
    for(int i=0;i<3;i++)
    {
        printf("Nilai Ujian Praditya Ke - %d : ", i);
        scanf("%d", &nilaiPraditya[i]);

    }
        printf("\n");

    printf("Rekap Perbandingan Nilai Antara Ucup dan Praditya Adalah: \n");
    for(int i=0;i<3;i++)
    {
        if(nilaiUcup[i]>nilaiPraditya[i])
        {
         perbandingannilai[i]=1;
        }
        else
        {
         perbandingannilai[i]=0;
        }
        printf("Nilai Ujian Ke - %d : %d\n",i, perbandingannilai[i]);

    }   printf("\n");
        printf("Catatan :\n");
        printf("Jika Nilai Ucup Lebih Tinggi dari Praditya Maka Nilainya 1\n");
        printf("Jika Nilai Ucup Dan Praditya Imbang Maka Nilainya 0\n");
        printf("Jika Nilai Praditya Lebih Tinggi dari Ucup Maka Nilainya 0\n");
    return 0;
}
