#include <stdio.h>

int main(void){
    float celsius;
    float fahrenheit;

    printf("Ingresa los celsius ");
    scanf("%f",&celsius);

    fahrenheit = 9.0/5.0*celsius + 32;

    printf("%f C = ",celsius);
    printf("%f F\n",fahrenheit);

    return 0;
}
