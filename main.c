#include <stdio.h>
#include <math.h>
void muestraSaludo(void);
void muestraMensajes(void);
void muestraDatosPrimitivos(void);
void muestraMasDatos(void);


float calculaAreaRectangulo(float b, float a);
float calculaPerimetroRectangulo(float b, float a);
float calculaX1(float a, float b, float c);
float calculaX2(float a, float b, float c);
int main(void){

    float a, b, c, x1, x2;

    //1.Pide datos
    printf("Ingresa a ");
    scanf("%f",&a);
    printf("Ingresa b ");
    scanf("%f",&b);
    printf("Ingresa c ");
    scanf("%f",&c);

    x1 = calculaX1(a,b,c);
    x2 = calculaX2(a,b,c);

    //3.Muestra resultados
    printf("x1: %f\n",x1);
    printf("x2: %f\n",x2);

    return 0;
}
float calculaX1(float a, float b, float c){
    return (-b+sqrt(pow(b,2)-4*a*c))/(2*a);//2.Calcula formulas
}
float calculaX2(float a, float b, float c){
    return (-b-sqrt(pow(b,2)-4*a*c))/(2*a);//2.Calcula formulas
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
