#include <stdio.h>
#include <math.h>
void muestraSaludo(void);
void muestraMensajes(void);
void muestraDatosPrimitivos(void);
void muestraMasDatos(void);


float calculaAreaRectangulo(float b, float a);
float calculaPerimetroRectangulo(float b, float a);

int main(void){

    float area, perimetro, base, altura;

    //1.Pide datos
    printf("Ingresa base ");
    scanf("%f",&base);
    printf("Ingresa altura ");
    scanf("%f",&altura);


    area = calculaAreaRectangulo(base, altura);
    perimetro = calculaPerimetroRectangulo(base, altura);

    //3.Muestra resultados
    printf("Area: %f\n",area);
    printf("Perimetro: %f\n",perimetro);

    return 0;
}
float calculaAreaRectangulo(float b, float a){
    return b*a;//2.Calcula formulas
}
float calculaPerimetroRectangulo(float b, float a){
    return 2*b + 2*a;//2.Calcula formulas
}


void muestraSaludo(void){
    printf("Hola, mundo!");
}
void muestraMensajes(void){
    printf("Un mensaje.\n");
    printf("\tOtro mensaje.");
}
void muestraDatosPrimitivos(void){
    printf("%d + ",2);
    printf("%d = ",3);
    printf("%d\n\n",2+3);

    printf("%f + ",4.5);
    printf("%f = ",6.7);
    printf("%f\n\n",4.5+6.7);
}
void muestraMasDatos(void){
    printf("Bueno dias! Este programa...\n\n");

    printf("%d + ",2);
    printf("%d = ",3);
    printf("%d\n\n",2+3);

    printf("%f + ",4.5);
    printf("%f = ",6.7);
    printf("%f\n\n",4.5+6.7);

    printf("%c ",'#');
    printf("%c ",'{');
    printf("%c\n\n",'@');
}
