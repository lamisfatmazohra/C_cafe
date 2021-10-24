#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<time.h>
#include"file.h"

void remplissage(file *tete,int n);
void affichage(file tete);
bool rechercher(file tete,int val);

int main(){
	
	file tete;
	int n=6;
	
	remplissage(&tete,n);
	affichage(tete);
	if(rechercher(tete,9)==true)
		printf("la valeur existe");
	else
		printf("la valeur n'existe pas");
	
}

void remplissage(file *tete,int n){
	srand(time(NULL));
	int i;
	int v;
	init(&(*tete));
	for(i=0;i<n;i++){
		v=rand()%10;
		enfiler(&(*tete),v);
	
		
	}
}
void affichage(file tete){
	file temp;
	init(&temp);
	int val;
	while(!vide(tete)){
		defiler(&tete,&val);
		printf("%d ",val);
		enfiler(&temp,val);
	}
	while(!vide(tete)){
		defiler(&temp,&val);
		enfiler(&tete,val);
	}
}
bool rechercher(file tete,int val){
	file temp;
	init(&temp);
	int k;
	bool trouve=false;
	while(!vide(tete)){
		defiler(&tete,&k);
		if(k==val)
			trouve=true;
		enfiler(&temp,k);
	}
	return trouve;
}
