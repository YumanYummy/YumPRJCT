#include <stdio.h>
#include <math.h>

int main(){
    float tahun1,tahun2,tahun3,tahun4,tahun5,ratarata,varians;

    printf("=== Program Untuk Mengecek Persebaran Persentase Kenaikan Saham Pada Perusahaan ===\n");
    printf("\n");
    printf("Masukkan Presentase Kenaikan Saham Pada Tahun 1: ");
    scanf("%f", &tahun1);
    printf("Masukkan Presentase Kenaikan Saham Pada Tahun 2: ");
    scanf("%f", &tahun2);
    printf("Masukkan Presentase Kenaikan Saham Pada Tahun 3: ");
    scanf("%f", &tahun3);
    printf("Masukkan Presentase Kenaikan Saham Pada Tahun 4: ");
    scanf("%f", &tahun4);
    printf("Masukkan Presentase Kenaikan Saham Pada Tahun 5: ");
    scanf("%f", &tahun5);

    printf("\n");
    ratarata = (tahun1+tahun2+tahun3+tahun4+tahun5) / 5;
    varians = (pow((tahun1-ratarata),2))/(5-1) + (pow((tahun2-ratarata),2))/(5-1) + (pow((tahun3-ratarata),2))/(5-1) + (pow((tahun4-ratarata),2))/(5-1) + (pow((tahun5-ratarata),2))/(5-1);
    printf("Nilai persebaran data ke 1 - 5 sebesar : %2.f dari rata-rata sebesar : %2.f untuk seluruh data\n", varians, ratarata);
    printf("\n");


    if(varians <=10){
        printf("Maka, Kesimpulan: Perlu Ada Peningkatan Secara Signifikan");
    }else if(varians >= 10 && varians <=50){
        printf("Maka, Kesimpulan: Perlu Ada Peningkatan Yang Tidak Terlalu Signifikan");
    }else if(varians >=50){
        printf("Maka, Kesimpulan: Tidak Ada Perlu Peningkatan");
    }


}
