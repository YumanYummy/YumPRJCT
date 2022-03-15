#include <stdio.h>


int pangkateks(int x, int y){
  if(y<=1){
    return x;
  }else{
    return x*pangkateks(x,(y-1));
  }

}


void main(){
    int nilai, pangkat;
    printf("Masukkan Nilai: ");
    scanf("%d", &nilai);
    printf("Masukkan Pangkat: ");
    scanf("%d", &pangkat);
    printf("= %d\n", pangkateks(nilai,pangkat));


}

