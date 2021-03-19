#include <stdio.h>
#include <math.h>
void muestraSaludo(void);
void muestraMensajes(void);
void muestraDatosPrimitivos(void);
void muestraMasDatos(void);

int main(void){

    muestraSaludo();
    muestraMensajes();
    muestraDatosPrimitivos();
    muestraMasDatos();


    return 0;
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
