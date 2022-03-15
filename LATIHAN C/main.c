#include <stdio.h>
#include <stdlib.h>

int main(){
    int m,n;
    printf("Program Mencari Penjumlahan Matriks\n");
    printf("Masukkan Baris Matrix : ");
    scanf("%d",&m);
    printf("Masukkan Kolom Matrix : ");
    scanf("%d",&n);
    float A[m][n],B[m][n];
    printf("\n");

    for(int k=1;k<=2;k++){
        printf("Masukkan Elemen Matrix - %d\n",k);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(k==1){
                    printf("Matrix A[%d][%d]: ",i+1,j+1);
                    scanf("%f",&A[i][j]);
                }else{
                    printf("Matrix B[%d][%d]: ",i+1,j+1);
                    scanf("%f",&B[i][j]);
                }
            }
        }
    }

    float C[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Sum Of Matrix\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%.1f       ",C[i][j]);
        }
        printf("\n");
    }

}
