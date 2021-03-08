#include <stdio.h>

int main(void){
    //Codifica un programa que pida al usuario su edad, su genero y su estatura
    //y los muestre


    int edad;
    float estatura;
    char genero;

    printf("Ingresa tu genero: ");
    scanf("%c",&genero);
    printf("Ingresa tu edad: ");
    scanf("%d",&edad);
    printf("Ingresa tu estatura: ");
    scanf("%f",&estatura);

    printf("Tu genero es: %c\n",genero);
    printf("Tu edad es: %d\n",edad);
    printf("Tu estatura es: %f\n",estatura);

    return 0;
}

