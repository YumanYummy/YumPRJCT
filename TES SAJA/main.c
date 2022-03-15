#include <stdio.h>

void main(){
    int nilai, hasil=1;
    printf("Masukkan Nilai: ");
    scanf("%d", &nilai);
    printf("Faktorial %d! =", nilai);
    for (int i=nilai; i>0; i--){
        if (i>1){
            printf("%d x ", i);
        }else{
            printf ("%d", i);
        }
        hasil = hasil * i;
    }
    printf(" = %d\n", hasil);
}



