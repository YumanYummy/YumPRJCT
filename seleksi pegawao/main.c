#include <stdio.h>

void main(){
    //membuat studi seleksi pegawai, dengan syarat
    //Laki-Laki tinggi minimal 190
    //Perempuan tinggi minimal 160

    char jeniskelamin;
    int tinggi;

    printf("Inputkan Jenis Kelamin : ");
    scanf("%c", &jeniskelamin);
    printf("\nInputkan tinggi : ");
    scanf("%d", &tinggi);

    if(jeniskelamin == 'L'){
        if(tinggi >= 190){
            printf("Selamat Anda Termasuk Kategori");
        }else{
            printf("Mohon Maaf Anda Tidak Termasuk Kategori");
        }
    }else if(jeniskelamin == 'P'){
        if(tinggi >= 160){
            printf("Selamat Anda Termasuk Kategori");
        }else{
            printf("Mohon Maaf Anda Tidak Termasuk Kategori");
        }
    }
}
