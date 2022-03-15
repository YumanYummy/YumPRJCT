#include <stdio.h>
#include <math.h>

int main(){
    float ratarata, varians, tahun1, tahun2, tahun3, tahun4, tahun5;
    printf("Masukkan Presentase Kenaikan Saham Pada Tahun Ke-1: ");

    scanf("%d", &tahun1);

    printf("Masukkan Presentase Kenaikan Saham Pada Tahun Ke-2: ");

    scanf("%d", &tahun2);

    printf("Masukkan Presentase Kenaikan Saham Pada Tahun Ke-3: ");

    scanf("%d", &tahun3);

    printf("Masukkan Presentase Kenaikan Saham Pada Tahun Ke-4: ");

    scanf("%d", &tahun4);

    printf("Masukkan Presentase Kenaikan Saham Pada Tahun Ke-5: ");

    scanf("%d", &tahun5);



    ratarata = (tahun1+tahun2+tahun3+tahun4+tahun5) / 5;

    varians = (pow((tahun1-ratarata),2))/(5-1) + (pow((tahun2-ratarata),2))/(5-1) + (pow((tahun3-ratarata),2))/(5-1) + (pow((tahun4-ratarata),2))/(5-1) + (pow((tahun5-ratarata),2))/(5-1);

    printf("Nilai persebaran data ke 1 - 5 sebesar : %2.f dari rata-rata sebesar : %2.f untuk seluruh data", varians, ratarata);

}
