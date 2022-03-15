#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

//Ahmad Rizky Has
//202110370311161
//Informatics Engineering 2K21
//University Of Muhammadiyah Malang

int pilih;
int data;
int duplicate;
int i;
int d;
int e;
int jumlah=0;
int font_size =5;
 
char nimcek[99];
char search[20];
char update[20];
char nama[99];
char namaa[99];
char nim[99];
char kelas[99];
char dosen[99];

FILE *nama_mhs,*nama_mhs_view,*nama_mhs_update;

int main(){
		printf("Now Loading");
		Sleep(500);
		printf(". ");
		Sleep(500);
		printf(". ");
		Sleep(500);
		printf(". ");
		Sleep(500);
		printf(". ");
		Sleep(500);
		printf(". ");
    system("cls");

    time_t mytime;
    time(&mytime);
    printf(" %s\n",ctime(&mytime));

    menu:
    printf(" Sistem Pendataan Akun I-Lab Infotech\n\n");
    printf(" === Pilihan Menu ===\n\n");
    printf("  1. Create Data\n");
    printf("  2. Show Data\n");
    printf("  3. Update Data\n");
    printf("  4. Delete Data\n");
    printf("  5. Search data\n");
    printf("  6. Exit\n\n");

    printf(" Masukkan Pilihan : ");
    scanf("%d",&pilih);
    printf("\n");
    switch(pilih){
    case 1:
    nama_mhs = fopen("input.txt","a");
    nama_mhs_view = fopen("input.txt","r");
        system("cls");
        printf(" === Create Data ===\n\n");
            printf(" Contoh Input Nim Praktikum\t: IF202110370311161\n");
            printf(" Input Nim Praktikum\t\t: ");fflush(stdin);
            scanf(" %[^\n]s",nimcek);
            duplicate=0;
            printf("\n");
        while(fscanf(nama_mhs_view,"%[^;];%[^;];%[^;];%[^;];\n", nim, nama, kelas, dosen) !=EOF){
            if(strcmp(nim,nimcek)==0){
                duplicate = 1;
            }
        }
    for (int c_a = 0; nimcek[c_a]!='\0'; c_a++) {
      if(nim[c_a] >= 0x21 && nimcek[c_a] <= 0x2F) {
                 printf(" NIM Tidak Boleh Ada Kata Spesial\n");
                 printf(" Silahkan Input Nim Sesuai Prosedur\n");
                 printf(" Press Enter....");
                 getch();
                 system("cls");
      	         goto menu;
      } else if(nimcek[c_a] >= 0x3A && nimcek[c_a] <= 0x40){
                 printf(" NIM Tidak Boleh Ada Kata Spesial\n");
                 printf(" Silahkan Input Nim Sesuai Prosedur\n");
                 printf(" Press Enter....");
                 getch();
                 system("cls");
      	         goto menu;
      }
   }
	    if(duplicate==1){
            fclose(nama_mhs); fclose(nama_mhs_view);
	        printf(" Mohon Maaf Data Yang Telah Di Input Telah Tersedia\n");
            printf(" Press Enter....\n");
            printf("\n");
            getch();
            system("cls");
            goto menu;
        }
        if(duplicate==0){
            strcpy(nim, nimcek);
            printf(" Input Nama Depan\t\t: ");fflush(stdin);
            scanf("%s",&nama);
            printf(" Input Nama Belakang\t\t: ");fflush(stdin);
            gets(namaa);
            printf(" Input Kelas Pemograman Dasar\t: ");fflush(stdin);
            gets(kelas);
            printf(" Input Nama Dosen Pengampu\t: ");fflush(stdin);
            scanf(" %[^\n]s",&dosen);
            strcat(nama, namaa);
        }
            fprintf(nama_mhs,"%s;",nim);
            fprintf(nama_mhs,"%s ;",nama);
            fprintf(nama_mhs,"%s;", strupr(kelas));
            fprintf(nama_mhs,"%s;\n",dosen);

            fclose(nama_mhs); fclose(nama_mhs_view);
            printf("\n");
            printf(" Data Telah Di Tambahkan\n");
            printf(" Press Enter....\n");
            getch();
            system("cls");
            goto menu;
     case 2:
     nama_mhs_view = fopen("input.txt","r");
     data=0;
         system("cls");
         printf(" === List Data ===\n\n");
         while(fscanf(nama_mhs_view,"%[^;];%[^;];%[^;];%[^;];\n", nim, nama, kelas, dosen) !=EOF){	
             data++;
             printf(" === %d ===\n", data);
             printf(" Nim Praktikan\t\t: %s\n",nim);
             printf(" Nama Praktikan\t\t: %s\n",nama);
             printf(" Kelas Pemograman Dasar\t: %s\n",kelas);
             printf(" Dosen Pengampu\t\t: %s\n",dosen);
        }
        if(data == 0){
            printf(" Mohon Maaf Data Tidak Tersedia\n");
        }
        fclose(nama_mhs_view);
        printf("\n");
        printf(" Press Enter....");
        getch();
        system("cls");
        goto menu;

     case 3:
     nama_mhs_update = fopen("input_new.txt" ,"w");
     nama_mhs_view = fopen("input.txt","r");
        system("cls");
        printf(" === Update Data ===\n");
        printf(" Masukkan NIM Yang Ingin Di Update: ");
        scanf("%s",&update);
        d=0;
        while(fscanf(nama_mhs_view,"%[^;];%[^;];%[^;];%[^;];\n", nim, nama, kelas, dosen) !=EOF){
            if(strcmp(nim,update)==0){
                 d++;
                 printf(" Nama Depan Baru\t\t: ");fflush(stdin);
                 scanf("%s",&nama);
                 printf(" Nama Belakang Baru\t\t: ");fflush(stdin);
                 gets(namaa);
                 printf(" Kelas Baru\t\t\t: ");fflush(stdin);
                 scanf("%s",&kelas);
                 printf(" Dosen Pengampu Baru\t\t: ");fflush(stdin);
                 scanf(" %[^\n]s",&dosen);

                 strcat(nama, namaa);
                 fprintf(nama_mhs_update,"%s;",nim);
                 fprintf(nama_mhs_update,"%s;",nama);
                 fprintf(nama_mhs_update,"%s;",strupr(kelas));
                 fprintf(nama_mhs_update,"%s;\n",dosen);
                 printf("\n --------------------\n");
                 printf("\n Data Berhasil di Edit.\n");
                 printf("\n --------------------\n");
            } else {
                 fprintf(nama_mhs_update,"%s;",nim);
                 fprintf(nama_mhs_update,"%s;",nama);
                 fprintf(nama_mhs_update,"%s;",strupr(kelas));
                 fprintf(nama_mhs_update,"%s;\n",dosen);
            }

        }
        if(d == 0){
            printf(" Mohon Maaf Data Tidak Tersedia\n");
        }
        fclose(nama_mhs_update);
        fclose(nama_mhs_view);
        remove("input.txt");
        rename("input_new.txt","input.txt");
        printf("\n");
        printf(" Press Enter....");
        getch();
        system("cls");
        goto menu;
     case 4:
     nama_mhs_view = fopen("input.txt","r");
     nama_mhs_update = fopen("input_new.txt","w");
        system("cls");
        e = 0;
        printf(" === Menghapus Data ===\n");
        printf(" Masukkan NIM Yang Ingin Di Hapus : ");
        scanf("%s",&update);
        printf("\n");
        while(fscanf(nama_mhs_view,"%[^;];%[^;];%[^;];%[^;];\n", nim, nama, kelas, dosen) !=EOF){
            if(strcmp(nim,update) != 0){
                fprintf(nama_mhs_update,"%s;",nim);
                fprintf(nama_mhs_update,"%s;",nama);
                fprintf(nama_mhs_update,"%s;",strupr(kelas));
                fprintf(nama_mhs_update,"%s;\n",dosen);
            } else if (strcmp(nim,update) != 1) {
                e++;
                printf(" Nim %s Telah Di Hapus\n",nim);
            }
        }
        if(e==0){
            printf(" Mohon Maaf Data Yang Di Hapus Tidak Ada\n");
        }
        fclose(nama_mhs_view);
        fclose(nama_mhs_update);
        remove("input.txt");
        rename("input_new.txt","input.txt");
        printf("\n");
        printf(" Press Enter....");
        getch();
        system("cls");
        goto menu;

     case 5:
        nama_mhs_view = fopen("input.txt","r");
        system("cls");
        printf(" === Search Data ===\n");
        printf(" Masukkan NIM Praktikan : ");
        scanf("%s",search);
        printf("\n");
        d=0;
        while(fscanf(nama_mhs_view,"%[^;];%[^;];%[^;];%[^;];\n", nim, nama, kelas, dosen) !=EOF){
            if(strcmp(nim,search)==0){
                d++;
                printf(" \t\tData Di Temukan\n");
                printf("-----------------------------------------------\n");
                printf(" Nim Praktikan\t\t: %s\n",nim);
                printf(" Nama Praktikan\t\t: %s\n",nama);
                printf(" Kelas Pemograman Dasar\t: %s\n",kelas);
                printf(" Dosen Pengampu\t\t: %s\n",dosen);
                printf("-----------------------------------------------\n");
            }
        }
        if(d == 0){
            fclose(nama_mhs_view);
            printf(" Mohon Maaf Data Yang Di Cari Tidak Ada\n");
            printf(" Press Enter....");
            getch();
            system("cls");
            goto menu;
        }
        fclose(nama_mhs_view);
        printf("\n");
        printf(" Press Enter....");
        getch();
        system("cls");
        goto menu;
    case 6:
            system("cls");
            printf(" %s\n",ctime(&mytime));
            printf(" --------------------------------------------------\n");
            printf(" \t  The Program Was Created By:\n");
            printf(" \t\tAhmad Rizky Has\n");
            printf(" \t\t     aka\n");
            printf(" \t\tX Y H U M A N\n");
            printf(" \t  Informatics Engineering 2K21\n");
            printf(" \tUniversity Of Muhammadiyah Malang\n");
            printf(" --------------------------------------------------\n");
            printf(" Thank You For Using My Program\n\n");
            printf(" Press Enter....");
            getch();
            printf("\n");
    }    
}