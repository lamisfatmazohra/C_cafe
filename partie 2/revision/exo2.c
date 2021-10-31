#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<time.h>
#include"pile.h"



int main(){
	
	pile *val,*coef;
	int i,n=5;
	int v,c;
	srand(time(NULL));
	for(i=0;i<n;i++){
		v=rand()%20+1;
		c=rand()%5+1;
		empiler(&val,v);
		empiler(&coef,c);
	}
	
	float moy;
	int somme1=0,somme2=0;
	while(!vide(val)){
		depiler(&val,&v);
		depiler(&coef,&c);
		printf("%d %d\n",v,c);
		somme1=somme1+(v*c);
		somme2=somme2+c;
	}
	moy=somme1/somme2;
	printf("la moyenne est %.2f",moy);
	
	
	
	
	
	
	
}
