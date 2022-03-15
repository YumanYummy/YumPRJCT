#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int average1, average2;
    printf("Mencari Rata-Rata Dari Array\n");
    printf("Enter n : ");
    scanf("%d", &n);
    int A[n];

    for(int i=0;i<n;i++){
        printf("Enter Number %d : ",i+1);
        scanf("%d",&A[i]);
        average1 += A[i];
        average2 = average1/n;
    }
    printf("Average : %d", average2);
}
