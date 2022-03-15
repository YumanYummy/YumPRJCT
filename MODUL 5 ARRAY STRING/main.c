#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int pilmenu,pilih;
    int jumlah=0;
    char update[10];
    int data, d;
    int i;
    char search[30],nama['0'][99],nim['0'][99],kelas['0'][99],dosen['0'][99];

    printf(" Sistem Pendataan Akun I-Lab Infotech\n\n");
    printf(" === Pilihan Menu ===\n\n");

    printf("  1. Create Data\n");
    printf("  2. Show Data\n");
    printf("  3. Update Data\n");
    printf("  4. Delete Data\n");
    printf("  5. Search data\n");
    printf("  6. Exit\n\n");

    menu:
    for(i=0;1<=1;i++){
        printf(" Masukkan Pilihan : ");
        scanf("%d",&pilih);
        printf("\n");

    switch(pilih){
    case 1:
        jumlah=jumlah+1;
        printf(" === Create Data ===\n\n");
        printf(" Input Nim Praktikum\t\t: ");
        scanf("%s",&nim[jumlah]);
        printf(" Input Nama Praktikan\t\t: ");
        scanf(" %[^\n]s",&nama[jumlah]);
        printf(" Input Kelas Pemograman Dasar\t: ");
        scanf("%s",&kelas[jumlah]);
        fflush(stdin);
        printf(" Input Nama Dosen Pengampu\t: ");
        scanf(" %[^\n]s",&dosen[jumlah]);
        printf(" ----------------------------------\n");
        printf(" Data Berhasil Di Tambah\n");
        printf(" ----------------------------------\n");
        printf(" Press Enter....\n\n");
        getch();
        goto menu;
        break;
    case 2:
        printf(" === List Data ===\n\n");
        if(jumlah<1){
            printf(" Mohon Maaf Data Yang Di Input Tidak Ada\n");
        }else{
            data=1;
         while(data<=jumlah){
        printf(" === %d ===\n", data);
        printf(" Nim Praktikan\t\t: %s\n",nim[data]);
        printf(" Nama Praktikan\t\t: %s \n",nama[data]);
        printf(" Kelas Pemograman Dasar\t: %s \n",kelas[data]);
        printf(" Dosen Pengampu\t\t: %s \n",dosen[data]);
        printf("\n");
        data++;
        }
    }
        printf("Press Enter....\n\n");
        getch();
        goto menu;
    case 3:
        fflush(stdin);
        printf(" === Update Data ===\n");
        printf(" Masukkan NIM Yang Ingin Di Update: ");
        scanf("%s",&update);
        data=1;
        d=0;
        while(data<=jumlah && d==0){
            if(strcmp(update,nim[data])==0){
              d++;
            }
            data++;
        }
        if(d<1){
            printf(" Mohon Maaf Data Yang Di Update Tidak Ada\n");
        }
        else{
        	data--;
            printf(" Nama Baru\t\t: ");
            scanf(" %[^\n]s",&nama[data]);
            printf(" Kelas Baru\t\t: ");
            scanf(" %s",&kelas[data]);
            printf(" Dosen Pengampu Baru\t: ");
            scanf(" %[^\n]s",&dosen[data]);
            printf(" ---------------------------------\n");
            printf(" Data Berhasil Di Edit\n");
            printf(" ---------------------------------\n");
            }
        printf(" Press Enter....\n\n");
        getch();
        goto menu;

    case 4:
        printf(" === Menghapus Data ===\n");
        printf(" \nMasukkan NIM Yang Ingin Di Hapus : ");
        scanf("%s",&update);
        data=1;
        d=0;
        while(data<=jumlah && d==0){
            if(strcmp(update,nim[data])==0){
                d++;
            }
            data++;
        }
        if(d<1){
            printf(" Nim Yang Anda Ingin Hapus Tidak Ada\n");
        }else{
            data--;
            printf(" Data Telah Di Hapus\n");
            while(data<=jumlah){
                strcpy(nama[data],nama[data+1]);
                strcpy(nim[data],nim[data+1]);
                strcpy(kelas[data],kelas[data+1]);
                strcpy(dosen[data],dosen[data+1]);
                data++;
            }
            data--;
            strcpy(nim[data],"");
            jumlah--;
        }
        printf(" Press Enter....\n\n");
        getch();
        goto menu;

    case 5:
            printf(" === Search Data ===\n");
            printf(" Masukkan NIM Praktikan : ");
            scanf("%s",search);
            data=1;
            d=0;
            while(data<=jumlah && d==0)
            {
                if(strcmp(search,nim[data])==0){
                    d++;
                }
                data++;
            }
            if(d<1){
                printf(" Data Yang Anda Cari Tidak Di Temukan\n");
            }
            else{
                data--;
                printf(" Nama Praktikan\t\t: %s\n",nama[data]);
                printf(" Kelas Prodas\t\t: %s\n",kelas[data]);
                printf(" Dosen Pengampu\t\t: %s\n",dosen[data]);
                printf(" -------------------------------------------------\n");
                printf(" Data Berhasil Ditemukan\n");
                printf(" -------------------------------------------------\n");
            }

            printf(" Press Enter....\n\n");
            getch();
            goto menu;
    case 6:
        printf("\tTerima Kasih Telah Menggunakan Program\n");
        printf("\t\t\t^_^\n\n");
        return 0;
      }


    }

}
