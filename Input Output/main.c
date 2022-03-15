#include <stdio.h>

void main(){
    FILE *nim,*nama;
    int n;
    int i;
    char nims[20],namas[25];

    printf("Masukkan Jumlah Maksimum Mahasiswa: ");
    scanf("%d",&n);
    printf("_____________________________________\n");

    nim = fopen("nim.txt","a");
    nama = fopen("nama.txt","a");

    for(i=0;i<n;i++){
        printf("\n");
        printf("Masukkan Nim Mahasiswa Ke - %d : ", i+1);
        scanf("%s",nims);
        fputs(nims,nim);
        putc('\n',nim);
        printf("Masukkan Nama Mahasiswa Ke - %d : ",i+1);
        scanf("%s",namas);
        fputs(namas,nama);
        putc('\n',nama);
        printf("_____________________________________\n");
    }

}