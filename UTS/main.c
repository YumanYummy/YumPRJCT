#include <stdio.h>
#include <math.h>

void main(){
    int banyaksps;
    float pophewan, temp;
    float entropy1,hasil1,hasil2;

    printf("Program Menghitung Entropy\n\n");
    printf("Masukkan Jumlah Spesies: ");
    scanf("%d", &banyaksps);
    printf("Masukkan Jumlah Populasi Hewan: ");
    scanf("%f", &pophewan);
    printf("\n");

    for(int i = 0; i < banyaksps; i++){
        printf("Masukkan Total Jumlah Hewan Untuk Spesies ke - %d :", i+1);
        scanf("%f", &temp);
        /*entropy1 = (temp/pophewan);
        hasil1 = -(entropy1*log2(entropy1));
        hasil2 = hasil2+hasil1;*/

    }
        entropy1 = (temp/pophewan);
        hasil1 = -(entropy1*log2(entropy1));
        hasil2 = hasil2+hasil1;
    printf("\n");
    printf("Nilai entropi dari seluruh spesies dalam populasi hewan : %.2f\n",hasil2);

    printf("----------------------------------------------------------------\n");
    if(hasil2>1){
        printf("Kesimpulan : Maka Keanekargaman Pada Wilayah Tersebut Sangat Beragam");
    }else if(hasil2<=1){
        printf("Kesimpulan : Maka Keanekargaman Pada Wilayah Tersebut Kurang Beragam");
    }
    printf("\n");


    /*printf("Nilai Entropi Dari Spesies Dalam Populasi Hewan adalah %.2f\n", entropy3);
    printf("_________________________________\n");
        if(entropy3 > 1){
            printf("Kesimpulan :Keanekaragaman Pada Wilayah Tersebut Sangat Beragam");
        }else if (entropy3 <= 1){
            printf("Keanekaragaman Pada Wilayah Tersebut Kurang Beragam");
        }*/
}

