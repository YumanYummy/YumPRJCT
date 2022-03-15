#include <stdio.h>
//Inputan untuk nilai b:4 x:4 C;5
//Maka hasil akhir dari rumus adalah 73.50

int main(){
    float b,c,d,z,y;
    printf("Cari nilai y jika y=bx^2 +0.5x - c\n");
    printf("Maka\n");
    printf("b :");
    scanf("%f", &b);
    printf("c :");
    scanf("%f", &c);
    printf("d :");
    scanf("%f", &d);

    y = (b*x*x) +0.5x - c;
    printf("%.2f",y);
}


