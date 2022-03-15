#include <stdio.h>

/*float c_r (float celcius){
    printf("Conversi Suhu %.2f C = %.2f R\n", celcius,(4.0/5.0)*celcius);
}

float c_f (float celcius){
    printf("Conversi Suhu %.2f C = %.2f F\n", celcius, (celcius+273.0));
}

float c_k (float celcius){
    printf("Conversi Suhu %.2f C = %.2f K\n", celcius,(9.0/5.0)*(celcius+32.0));
}

int main(){
    float celcius;
    printf("Masukkan Dejarat Suhu Dalam C: ");
    scanf("%f", &celcius);

    c_r(celcius);
    c_f(celcius);
    c_k(celcius);
}*/





int main(){
    float celcius, fahrenheit, kelvin, reamur;
    printf("Masukkan derajat suhu dalam (C): ");
    scanf("%f", &celcius);

    printf("\n");
    reamur = ((4.0/5.0)*celcius);
    kelvin = (celcius+273.15);
    fahrenheit = ((9.0/5.0)*celcius+32.0);
    printf("Maka Suhu Dalam %.0f derajat Adalah : %.2f R\n",celcius, reamur);
    printf("Maka Suhu Dalam %.0f derajat Adalah : %.2f K\n",celcius, kelvin);
    printf("Maka Suhu Dalam %.0f derajat Adalah : %.2f F\n",celcius, fahrenheit);




}
