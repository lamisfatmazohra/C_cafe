#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include"flie.h"

int main (){
	
	file tete;
	file temp;
	int val,nbval,mode,nbmode,i,n;
	do{
		printf("donnez la taille de la file");
		scanf("%d",&n);
	}while(n<0);
	
	init(&tete);
	for(i=0;i<n;i++){
		printf("donnez une valeur");
		scanf("%d",&val);
		enfiler(&tete,val);
		
	}
	
	init(&temp);
	while(!vide(tete)){
		defiler(&tete,&val);
		printf("%d ",val);
		enfiler(&temp,val);
	}
	
	while(!vide(temp)){
		defiler(&temp,&val);
		enfiler(&tete,val);
	}
	
	mode=tetefile(tete);
	nbmode=1;
	nbval=1;
	val=mode;
	while(!vide(tete)){
		defiler(&tete,&val);
		init(&temp);
		nbval=1;
		while(!vide(tete)){
			defiler(&tete,&n);
			if(val==n)
				nbval++;
			else
				enfiler(&temp,n);
		}
		if(nbval>nbmode){
			mode=val;
			nbmode=nbval;
		}
		init(&tete);
		while(!vide(temp)){
			defiler(&temp,&val);
			enfiler(&tete,val);
		}
	}
	printf("le mode est %d",mode);

}
