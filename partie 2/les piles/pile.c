#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include"pile.h"

void remplissage(pile **tete,int n);
void affichage(pile *tete);
bool rechercher(pile *tete,int val);
int nbrele(pile *tete);
int minimum(pile *tete);
int maximum(pile *tete);
void inversertableau(int *tab,int n);

int main (){
	
	pile *tete;
	init(&tete);
	int val;
	remplissage(&tete,5);
	affichage(tete);
	
	printf("\n");
	printf("donnez la valeur");
	scanf("%d",&val);
	if(rechercher(tete,val)==true)
		printf("la valeur existe\n");
	else
		printf("la valeur n'existe pas\n");
	affichage(tete);
	
	printf("\nle nombre d'element est %d\n",nbrele(tete));
	
	printf("la valeur minimale est %d\n",minimum(tete));
	printf("la valeur maximale est %d\n",maximum(tete));
	
	int tab[7]={4,8,45,2,6,10,14};
	int i,n=7;
	for(i=0;i<n;i++){
		printf("%d ",tab[i]);
	}
	printf("le tableau inverser est\n");
	inversertableau(tab,n);
	for(i=0;i<n;i++){
		printf("%d ",tab[i]);
	}
}

void remplissage(pile **tete,int n){
	int i,val;
	for(i=0;i<n;i++){
		printf("donnez une valeur");
		scanf("%d",&val);
		empiler(&(*tete),val);
		
	}
}

void affichage(pile *tete){
	pile *temp;
	int val;
	init(&temp);
	while(!vide(tete)){
		depiler(&tete,&val);
		printf(" %d",val);
		empiler(&temp,val);
	}
	init(&tete);
	while(!vide(temp)){
		depiler(&temp,&val);
		empiler(&tete,val);
	}
}

bool rechercher(pile *tete,int val){
	pile *temp;
	int info;
	bool existe=false;
	init(&temp);
	while(!vide(tete) && existe==false){
		depiler(&tete,&info);
		if(info==val)
			existe=true;
		empiler(&temp,info);
		
	}
	while(!vide(temp)){
		depiler(&temp,&info);
		empiler(&tete,info);
	}
	return existe;
}

int nbrele(pile *tete){
	pile *temp;
	int nbr1,nbr2=0;
	init(&temp);
	while(!vide(tete)){
		depiler(&tete,&nbr1);
		nbr2++;
		empiler(&temp,nbr1);
		
	}
	init(&tete);
	while(!vide(temp)){
		depiler(&temp,&nbr1);
		empiler(&tete,nbr1);
	}
	return nbr2;
}

int minimum(pile *tete){
	pile *temp;
	int min,val;
	init(&temp);
	min=sommet(tete);
	while(!vide(tete)){
		depiler(&tete,&val);
		if(val<min)
			min=val;
		empiler(&temp,val);
	}
	init(&tete);
	while(!vide(temp)){
		depiler(&temp,&val);
		empiler(&tete,val);
		
	}
	return min;
}

int maximum(pile *tete){
	pile *temp;
	int max,val;
	init(&temp);
	max=sommet(tete);
	while(!vide(tete)){
		depiler(&tete,&val);
		if(val>max)
			max=val;
		empiler(&temp,val);
	}
	init(&tete);
	while(!vide(temp)){
		depiler(&temp,&val);
		empiler(&tete,val);
		
	}
	return max;
}

void inversertableau(int *tab,int n){
	pile *p;
	int i;
	init(&p);
	for(i=0;i<n;i++){
		empiler(&p,tab[i]);
	}
	i=0;
	while(!vide(p)){
		depiler(&p,&tab[i]);
		i++;
	}
	
}
