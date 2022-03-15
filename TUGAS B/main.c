#include <stdio.h>

//Inputan untuk nilai b:4 x:4 C;5
//Maka hasil akhir dari rumus adalah 0.36

int main(){
    float x,y,a;
    printf("b :");
    scanf("%f", &x);\
    printf("x :");
    scanf("%f", &y);
    printf("c :");
    scanf("%f", &a);

    y = 0.3*x*y/(2*a);
    printf("%.2f",y);
}
