#include <stdio.h>
#include <math.h>
int main(void){

    float alpha;
    float alphaRad;
    float senAlpha;
    float cosAlpha;
    float tanAlpha;

    printf("Ingresa tu angulo ");
    scanf("%f",&alpha);

    alphaRad = alpha * M_PI / 180.0;
    senAlpha = sin(alphaRad);
    cosAlpha = cos(alphaRad);
    tanAlpha = tan(alphaRad);

    printf("alpha = %f Grad\n",alpha);
    printf("alphaRad = %f Rad\n",alphaRad);
    printf("sin(%f) = ",alpha);
    printf("%f\n",senAlpha);
    printf("cos(%f) = ",alpha);
    printf("%f\n",cosAlpha);
    printf("tan(%f) = ",alpha);
    printf("%f\n",tanAlpha);

    return 0;
}
