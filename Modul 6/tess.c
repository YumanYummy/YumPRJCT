#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>

int a;
int b;
int duplicate,i;
int k_a;
int menu=0;

char c[16];
char nama[50];
char NIM[10];
char kelas[10];
char nama_dosen[50];
char nama_blkng[99];
char NIMcek[99];

FILE *input,*view,*edit;

void create();
void show();
void update();
//void del();
//void serc();


void create(){
	input = fopen("data.txt","a");
	view = fopen("data.txt","r");
	printf(" ===  Create Data  ===\n ");
	printf("\nInput NIM Praktikan            : ");
	scanf(" %s",NIMcek);
    duplicate=0;
    printf("\n");
    while(fscanf(view,"%[^;];%[^;];%[^;];%[^;];\n", NIM, nama, kelas, nama_dosen) !=EOF){
            if(strcmp(NIM,NIMcek)==0){
                duplicate = 1;
            }
        }
	for (k_a = 0; NIMcek[k_a]!='\0'; k_a++) {
      if(NIM[k_a] >= 0x21 && NIMcek[k_a] <= 0x2F) {
                 printf(" NIM Tidak Boleh Ada Kata Spesial\n");
                 printf(" Press Enter....\n");
                 getch();
				 system("cls");
				 main();
      } else if(NIMcek[k_a] >= 0x3A && NIMcek[k_a] <= 0x40){
                 printf(" NIM Tidak Boleh Ada Kata Spesial\n");
                 printf(" Press Enter....\n");
                 getch();
				 system("cls");
				 main();
      }
   }
    if(duplicate==1){
        fclose(input);
		fclose(view);
        printf("Mohon Maaf Nim Yang Anda Input Telah Tersedia");
	    printf("\n\nPress Anything to Continue\n\n");
	    getch();
        system("cls");
    }
    if(duplicate==0){
        strcpy(NIM, NIMcek);
	    printf("\nInput Nama Depan          : ");
	    scanf(" %[^\n]s",nama);
		printf("\nInput Nama Belakang           : ");
	    scanf(" %[^\n]s",nama_blkng);
	    printf("\nInput Kelas Pemrograman Dasar  : ");
	    scanf(" %[^\n]s",kelas);
	    printf("\nInput Nama Dosen Pengampu      : ");
	    scanf(" %[^\n]s",nama_dosen);
		strcat(nama, nama_blkng);
    }	
		fprintf(input, "%s;", NIMcek);
		fprintf(input, "%s;", nama);
		fprintf(input, "%s;", strupr(kelas));
		fprintf(input, "%s;", nama_dosen);

	    fclose(input);
		fclose(view);
	    printf("\n ---------------------------\n");
	    printf("\n Data Berhasil Di Tambah. \n");
	    printf("\n ---------------------------\n");
    	printf("\n\nPress Anything to Continue\n\n");
	    getch(); 
        system("cls");
}

void show(){
	view = fopen("data.txt", "r");
	a=0;
	while(fscanf(view,"%[^;];%[^;];%[^;];%[^;];\n", NIM, nama, kelas, nama_dosen) !=EOF){
			a++;
            printf("\n == %d ==\n",a);
			printf("\n NIM Praktikan            : %s\n",NIM);
			printf("\n Nama Praktikan           : %s\n",nama);
			printf("\n Kelas Pemrograman Dasar  : %s\n",kelas);
			printf("\n Dosen Pengampu           : %s\n",nama_dosen);
			printf("\n ---------------------------\n");
	}
	if(a==0){
		printf("anda belum input data");
	}
	fclose(input);
	printf("\n\nPress Anything to Continue\n\n");
	getch();system("cls");
	
}

void update(){
	edit = fopen("data_baru.txt","w");
	view = fopen("data.txt", "r");
	printf(" Masukkan NIM Praktikan yang Ingin di Edit Data nya : ");
	scanf("%s",c);
	b=0;
	while(fscanf(view,"%[^;];%[^;];%[^;];%[^;];\n", NIM, nama, kelas, nama_dosen) !=EOF){
		if(strcmp(c,NIM)==0){
			b++;
			printf("\n Nama Depan Baru            : ");
			scanf(" %[^\n]s",nama);
			printf("\n Nama Belakang Baru            : ");
			scanf(" %[^\n]s",nama_blkng);
			printf("\n Kelas Baru           : ");
			scanf(" %[^\n]s",kelas);
			printf("\n Dosen Pengampu Baru  : ");
			scanf(" %[^\n]s",nama_dosen);
			strcat(nama, nama_blkng);

			fprintf(input, "%s;", NIMcek);
			fprintf(input, "%s;", nama);
			fprintf(input, "%s;", strupr(kelas));
			fprintf(input, "%s;", nama_dosen);

			printf("\n ---------------------\n ");
			printf("\n Data Berhasil Di Edit\n ");
			printf("\n ---------------------\n ");
		}
		else{
			fprintf(input, "%s;", NIMcek);
			fprintf(input, "%s;", nama);
			fprintf(input, "%s;", strupr(kelas));
			fprintf(input, "%s;", nama_dosen);
		}
	}
	if(b==0){
		printf(" data yang akan anda update mungkin tidak ada");
	}
	fclose(edit);
	fclose(view);
	remove("data.txt");
	rename("data_baru","data.txt");
	printf("\n\nPress Anything to Continue\n\n");
	getch();
    system("cls");
}
/*void del(){
	printf(" Masukkan NIM Praktikan yang Ingin Di Delete Data nya : ");
	scanf("%s",c);
	b=1;
	d=0;
	while(b<=a && d==0){
		if(strcmp(c,NIM[b])==0){
			d++;
		}
		b++;
	}
	if(d<1){
		printf(" Data yang akan anda delete mungkin tidak ada ");
	}else{
		b--;
		printf("\n ---------------------\n ");
		printf("\n Data berhasil di hapus\n ");
		printf("\n ---------------------\n ");

	}
	printf("\n\nPress Anything to Continue\n\n");
	getch();system("cls");
}*/
/*void serc(){
	printf(" Masukkan NIM Praktikan : "); scanf("%s", NIM[b]);
        b=1; 
		d=0;
        while(b <= NIM && d==0){
            if(strcmp(NIM[b],NIM[a]) == 0){
                d++;
            }
            b++;
        }
        
        if(d < 1){
            printf("\n --------------------\n");
            printf("\n Data Tidak di Temukan.\n");
            printf("\n --------------------\n");
        } else {
            b--;
            printf("\n Nama Praktikan\t\t\t: %s", nama[b]);
            printf("\n\n Kelas Pemrograman Dasar\t: %s", kelas[b]);
            printf("\n\n Dosen Pengampu\t\t\t: %s", nama_dosen[b]);
            
        }
  		printf("\n\nPress Anything to Continue\n\n");
        getch();system("cls");
}*/
int main(){
	while(menu!=6){
		printf(" Sistem Pendataan Akun I-Lab Infotech\n");
		printf("\n === Pilihan Menu === \n");
		printf("\n 1. Create Data.\n 2. Show data.\n 3. Update data.\n 4. Delete data.\n 5. Search data.\n 6. Exit. \n");
		printf("\n Masukkan Pilihan : ");
		scanf("%d",&menu);

		puts("");
		if(menu==1){
			create();
		}else if(menu==2){
			show();
		}else if(menu==3){
			update();
		//}//else if(menu==4){
			//del();	
		//}//else if(menu==5){
		//	serc();
		}else if(menu==6){
			printf("keluar...");
		}else{
			printf("pilih menu yang tersedia");
		}puts("");
	}
	return 0;
}