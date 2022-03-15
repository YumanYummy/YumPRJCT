#include <stdio.h>

#define JUDUL "MENCOBA HASIL CODING"
#define MENCOBA 'AKU'

void main(){
    int usia;
    float ipk;
    char nama[20];

    printf("%s\n", JUDUL );
    printf("Masukkan Nama Anda: ");
    gets(nama);
    printf("Masukkan Usia Anda: ");
    scanf("%d", &usia);
    printf("Berapa nilai IPK anda: ");
    scanf ("%f", &ipk);

    printf("\n\nNama Anda Adalah: %s", nama);
    printf("\nUsia Anda Adalah: %d tahun", usia);
    printf("\nIPK Anda Adalah: %.2f", ipk);
}
