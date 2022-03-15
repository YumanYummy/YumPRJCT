#include <stdio.h>
#include <stdlib.h>

int main(){
    int m,n;
    printf("Mencari Output Transpose Dari Matrix\n");
    printf("\n");
    printf("Masukkan Baris: ");
    scanf("%d", &m);
    printf("Masukkan Kolom: ");
    scanf("%d", &n);
    printf("\n");

    int A[m][n];
    int transpose[m][n];;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Masukkan Elemen Ke - %d %d : ", i+1,j+1);
            scanf("%d",&A[i][j]);
        }
    }printf("\n");

    printf("Hasil Matrix Yang Di Input Adalah\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("\t%d",A[i][j]);
        }
        printf("\n");
    }

    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            transpose[j][i]= A[i][j];
        }
    }
    printf("Hasil Transpose Matrix Adalah\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d  ",transpose[i][j] );
        }printf("\n");
    }
}
