#include<stdio.h>


int main(){
    int panjang, lebar, tinggi, volume; // Deklarasi variabel panjang,lebar,tinggi,volume
    printf("MENGHTUNG LUAS DAN VOLUME BANGUN RUANG\n");
    printf("----------------------------------\n");

    printf("Masukan Panjang : ");
    scanf("%d", &panjang);
    printf("Masukan Lebar: ");
    scanf("%d", &lebar);
    printf("Masukan Tinggi: ");
    scanf("%d", &tinggi);

    volume = (panjang*lebar*tinggi); //Rumus untuk menghitung volume balok

    printf("Volume Balok = %d", volume); //Tampilkan hasi

}
