#include <stdio.h>
#include <stdlib.h>

int main(){

    int totalmenu, pilihpesan, jumlahpesan, totalharga, harusbayar;
    char lanjutpesan;

    awal:
    printf("=============== SELAMAT DATANG   ===============\n");
    printf("===============       DI         ===============\n");
    printf("=============== WARUNG SEDERHANA ===============\n");
    printf("\n");
    printf("Tersedia : \n");
    printf("\n");
    printf("No.\tJenis\t\t\tHarga\n");
    printf("\n");
    printf("1.\tAyam Geprek + Nasi\tRp. 25.0000\n");
    printf("2.\tAyam Geprek Tanpa Nasi\tRp. 20.0000\n");
    printf("3.\tNasi Goreng\t\tRp. 15.0000\n");
    printf("4.\tTeh Gula Es\t\tRp. 5.0000\n");
    printf("\n================================================\n");
    printf("Silahkan Input Jumlah Menu Yang Anda Pesan : ");
    scanf("%d", &totalmenu);

    //Perulangan

    for (int i = 0; i < totalmenu; i++){

        daftarmenu:
        printf("\n");
        printf("Silahkan Pilih Menu Yang Anda Inginkan: ");
        scanf("%d", &pilihpesan);
        printf("\n================================================\n");



    switch(pilihpesan){
        case 1:
            printf("Anda Memilih Ayam Geprek + Nasi\n");
            printf("\n");
            printf("Masukkan Jumlah Pesanan: ");
            scanf("%d", &jumlahpesan);
            printf("================================================\n");
            printf("Qty\t: %d\n", jumlahpesan);
            printf("Harga\t: Rp.%d\n", jumlahpesan * 25000);
            printf("================================================\n");
            totalharga += jumlahpesan * 25000;
            break;
        case 2:
            printf("Anda Memilih Ayam Geprek Tanpa Nasi\n");
            printf("\n");
            printf("Masukkan Jumlah Pesanan: ");
            scanf("%d", &jumlahpesan);
            printf("================================================\n");
            printf("Qty\t: %d\n", jumlahpesan);
            printf("Harga\t: Rp.%d\n", jumlahpesan * 20000);
            printf("================================================\n");
            totalharga += jumlahpesan * 20000;
            break;
        case 3:
            printf("Anda Memilih Nasi Goreng\n");
            printf("\n");
            printf("Masukkan Jumlah Pesanan: ");
            scanf("%d", &jumlahpesan);
            printf("================================================\n");
            printf("Qty\t: %d\n", jumlahpesan);
            printf("Harga\t: Rp.%d\n", jumlahpesan * 15000);
            printf("================================================\n");
            totalharga += jumlahpesan * 15000;
            break;
        case 4:
            printf("Anda Memilih Teh Gula Es\n");
            printf("\n");
            printf("Masukkan Jumlah Pesanan: ");
            scanf("%d", &jumlahpesan);
            printf("================================================\n");
            printf("Qty\t: %d\n", jumlahpesan);
            printf("Harga\t: Rp.%d\n", jumlahpesan * 5000);
            printf("================================================\n");
            totalharga += jumlahpesan * 5000;
            break;
        default:
            printf("\n");
            printf("Maaf, Menu Yang Anda Pilih Tidak Tersedia\n");
            printf("================================================\n");
            goto daftarmenu;
         }
    }

    printf("Total Harga Adalah : Rp.%d\n", totalharga);

    pembayaran:
    if(harusbayar == 0 || harusbayar < totalharga){
        printf("\n");
        printf("Masukkan Nominal Pembayaran: Rp.");
        scanf("%d", &harusbayar);
    }
    //Percabangan
    printf("================================================\n");
    if(harusbayar != 0 && harusbayar >= totalharga){
        printf("Tunai Anda Adalah : Rp.%d\n", harusbayar);
        printf("\n");
        printf("Sisa Tunai Anda Adalah : Rp.%d\n", harusbayar - totalharga);
    }else if(harusbayar != 0 && harusbayar <= totalharga){
        printf("Mohon Maaf, Uang Anda Kurang Rp.%d\n", totalharga -  harusbayar);
        printf("Silahakan Melalakukan pembayaran Sesuai Nominal Yang Tertera");
        printf("\n");
        goto pembayaran;
    }
    printf("================================================\n");

    printf("Apakah Anda Ingin Melanjutkan Pesan? [Y/N] : ");
    scanf("%s", &lanjutpesan);

    switch(lanjutpesan){
        case 'Y':
        case 'y':
                system("cls");
            goto awal;
            break;
        case 'N':
        case 'n':
            printf("\n");
            printf("==================================================================================================\n");
            printf("\t\t\tTerima Kasih Telah Berbelanja Di Warung Sederhana Kami\n");
            printf("\t\t\t\t\tHAVE A NICE DAY ^_^\n");
            printf("==================================================================================================\n");
            printf("\n");
            break;
    }
}
