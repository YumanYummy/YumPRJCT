//Mendeklarasi Fungsi Dengan Menamai Fungsi Sesuai Keinginan

int prosesbalok(){
    int panjang, tinggi, lebar, volume, luas;
    printf("Masukkan Panjang Balok: ");
    scanf("%d", &panjang);
    printf("Masukkan Lebar Balok: ");
    scanf("%d", &lebar);
    printf("Masukkan Tinggi Balok: ");
    scanf("%d", &tinggi);

    printf("\n");
    volume = (panjang*lebar*tinggi);
    printf("Maka\n");
    printf("\n");
    printf("Hasil Volume Balok Adalah: %d cm3\n", volume);

    luas = (2*(panjang*tinggi)+ 2*(panjang*lebar)+ 2*(tinggi*lebar));
    printf("Hasil Luas Permukaan Balok adalah: %d cm2\n", luas);

}

int proseskubus(){
    int sisi, volume, luas;
    printf ("Masukkan Sisi Kubus: ");
    scanf("%d", &sisi);

    printf("\n");
    printf("Maka\n");
    printf("\n");
    volume = (sisi*sisi*sisi);
    printf("Hasil Volume Kubus Adalah: %d cm\n", volume);

    luas = ((6*sisi*sisi));
    printf("Hasil Luas Permukaan Kubus Adalah: %d cm2\n", luas);

}

int prosestabung(){
    int diameter, tinggi;
    float jarijari, volume,luas;
    float phi1 = 3.14;
    float phi2 = 22.0/7.0;
    printf ("Masukkan Diameter Tabung: ");
    scanf("%d", &diameter);
    printf("Masukkan Tinggi Tabung: ");
    scanf("%d", &tinggi);

    printf("\n");
    printf("Anda Ingin Menggunakan Phi\n");
    printf("3.14 atau 22/7 ? ");
    scanf("%f", &phi1);
    scanf("&f", &phi2);

    printf("\n");
    printf("Maka\n");
    printf("\n");

    jarijari = (diameter/2);
    volume = (phi1*jarijari*jarijari*tinggi);
    volume = (phi2*jarijari*jarijari*tinggi);
    printf("Hasil Volume Tabung Adalah: %.1f cm3\n", volume);

    luas = 2*phi1*jarijari*(jarijari+tinggi);
    luas = 2*phi2*jarijari*(jarijari+tinggi);
    printf("Hasil Luas Permukaan Kubus Adalah: %.1f cm2\n", luas);
}
