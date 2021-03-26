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
float convierteCelsiusAFahrenheit(float celsius);
int main(void){

    float c, f;

    //1.Pide datos
    printf("Ingresa celsius ");
    scanf("%f",&c);

    f = convierteCelsiusAFahrenheit(c);

    //3.Muestra resultados
    printf("%f Celius = ",c);
    printf("%f Fahrenheit\n",f);

    return 0;
}
float convierteCelsiusAFahrenheit(float celsius){
    return 9.0/5.0*celsius + 32;
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
