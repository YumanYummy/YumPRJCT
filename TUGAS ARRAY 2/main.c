#include <stdio.h>
#include <stdlib.h>

int main(){
    int element;
    int max;
    printf("Mencari Nilai Terbesar Dari Array\n");
    printf("\n");
    printf("Masukkan Total angka elemen (1 sampai 100) : ");
    scanf("%d",&element);

    float A[100];
    for(int i=0;i<element;i++){
        printf("Masukkan Angka Ke - %d: ", i+1);
        scanf("%f",&A[i]);
    }
    max=A[0];
    for(int i=0;i<element;i++){
            if(A[i]>max){
            max=A[i];
        }
    }
    printf("\n");
    printf("Element terbesar Adalah: %d", max);





}
