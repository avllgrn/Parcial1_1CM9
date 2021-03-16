#include <stdio.h>
#include <math.h>
int main(void){

    float alpha;
    float alphaRad;

    printf("Ingresa tu angulo ");
    scanf("%f",&alpha);

    alphaRad = alpha * M_PI / 180.0;

    printf("%f Grad = ",alpha);
    printf("%f Rad\n",alphaRad);

    return 0;
}
