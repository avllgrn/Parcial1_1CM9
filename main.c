#include <stdio.h>

int main(void){
    //Codifica un programa que calcule el area y el perimetro de un
    //rectangulo

    float base;
    float altura;
    float area;
    float perimetro;

    printf("Este programa calcula el area y el perimetro de un rectangulo\n\n");


    printf("Ingresa la base: ");
    scanf("%f",&base);
    printf("Ingresa la altura: ");
    scanf("%f",&altura);

    area = base * altura;
    perimetro = 2*base + 2*altura;

    printf("Base = %f\n",base);
    printf("Altura = %f\n",altura);
    printf("Area = %f\n",area);
    printf("Perimetro = %f\n",perimetro);

    return 0;
}

