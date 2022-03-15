#include <stdio.h>

int main()
{
	int nilai_bombom[3] = {85,90,86};
	int nilai_raply[3] = {84,90,86};
	int array_perbandingan[3];
	int i;
	printf("NILAI BOM BOM :\n");
	for (i=0; i<3;i++)///looping untuk  indeks
	{
		printf("NILAI BOM BOM KE-%d: %d\n",i+1, nilai_bombom[i]);
	}
	printf("\nNILAI RAPLY :\n");

	for (i=0; i<3;i++)
	{
		printf("NILAI RAPLY KE-%d: %d\n",i+1,nilai_raply[i]);
	}
	printf("\nREKAP PERBANDINGAN NILAI BOM BOM DAN RAPLY: \n");
	for(i=0; i<3;i++)
	{
		if(nilai_bombom[i]>nilai_raply[i])
		{
		array_perbandingan[i]= 1;///menngeksekusi perbandingan array
		}
		else
		{
		array_perbandingan[i]= 0;
		}
		printf("HASIL NYA :%d\n",array_perbandingan[i]);
	}
		return 0;
}
