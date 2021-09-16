#include<stdio.h>
#include"rectangle.h"

int main(){
	
	rectangle r;
	printf("donnez la longueur");
	scanf("%f",&r.x);
	printf("donnez la largeur");
	scanf("%f",&r.y);
	r.s=superficie(r);
	r.p=perimetre(r);
	printf("la superficie est %.1f\n",r.s);
	printf("le perimetre est %.1f\n",r.p);
}
