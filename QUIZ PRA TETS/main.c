#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

float jumlah_h,jumlah=0;
int i2 =0;
int i=0;
float hasil,f_log,hasil2=0;
printf("==Program Penghitung Entropy==\n\n");
printf("Masukkan jumlah spesies = ");
scanf("%d",&i2);
printf("Masukkan jumlah populasi hewan = ");
scanf("%f",&jumlah);
printf("\n");
while(i<i2){
printf("Masukkan jumlah hewan ke- %d = ",i+1);
scanf("%f",&jumlah_h);
f_log = (jumlah_h/jumlah);
hasil = -(f_log*log2(f_log));
hasil2 = hasil2+hasil;
i++;
}
printf("Nilai entropi dari seluruh spesies dalam populasi hewan : %.2f\n",hasil2);
if(hasil2<1){
    printf("-----------\nKesimpulannya adalah : keanekaragaman fauna pada wilayah tersebut sangat kurang\n-----------");
}else{
    printf("-----------\nKesimpulannya adalah : keanekaragaman fauna pada wilayah tersebut sangat beragam\n-----------");
}

}
