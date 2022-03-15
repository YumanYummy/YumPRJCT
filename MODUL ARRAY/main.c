#include <stdio.h>
#include <stdlib.h>

void main()
{
   int pilihordo;
   printf("ARRAY 2D\n");
   printf("\n");
   balik:
   printf("Pilih Ordo Matrix, 2x2 Tekan 2 atau 3x3 Tekan 3: ");
   scanf("%d",&pilihordo);

if(pilihordo == 2){
 int A[2][2], min, max;
   for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("Masukkan Angka Pada Indeks [%d][%d] : ",i,j);
            scanf("%d", &A[i][j]);
     }
   }
   printf("\nHasilnya Adalah\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("\t%d",A[i][j]);
     }
     printf("\n");
   }    printf("\n");

		max=A[0][0];
		min=A[0][0];
		for (int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				if(A[i][j]>max){
				max=A[i][j];
            }
				if (A[i][j]<min){
	   	    	min=A[i][j];
            }
        }
    }
        printf("*Biggest : %d\n", max);
        printf("*Smallest : %d\n", min);

}   printf("\n");

    printf("__________________________________________________________________\n");
    printf("\n");

if(pilihordo == 3){
    int B[3][3], max, min;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Masukkan Angka Pada Indeks [%d][%d] : ",i,j);
            scanf("%d", &B[i][j]);
     }
   }
   printf("\nHasilnya Adalah\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("\t%d",B[i][j]);
     }
     printf("\n");

    }
    printf("\n");
        max=B[0][0];
		min=B[0][0];
		for (int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				if(B[i][j]>max)
                {
				max=B[i][j];
				}
				if (B[i][j]<min)
                {
	   	    	min=B[i][j];
		  	    }
			}
		}
        printf("* Biggest : %d\n", max);
        printf("* Smallest : %d\n", min);
     return 0;
}

    else(pilihordo==0);{
        goto balik;
    }

}
