#include<stdio.h>

int main()
{
    int a=5;
    float b=2.5;
    printf("la valeur de a est %d, est la valeur de b est %.2f\n",a,b);
    
    float pied=5.3;
    printf("donnez un nombre reel");
    scanf("%f",&pied);
    printf("%.1f pied=%.1fpouces=%.4fkm=%.3fcm",pied,(pied*12),(pied*0.3048)/1000,(pied*0.3048)*100);
    return 0;
}

