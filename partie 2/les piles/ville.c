#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include"pile1.h"

void affichage(pile *tete);
void supprimer(pile **tete);
void supprimerb(pile **tete);

int main(){
	
	pile *tete;
	ville v;
	char c;
	init(&tete);
	do{
		printf("donnez le nom de la ville");
		scanf(" %s",v.nom);
		printf("donnez la superficie");
		scanf("%f",&v.superficie);
		printf("donnez le nombre d'habitants");
		scanf("%d",&v.nbrd);
		printf("voullez vous continuer o pour oui n pour non");
		scanf(" %c",&c);
		empiler(&tete,v);
	}while(c=='o');
	
	affichage(tete);
	supprimer(&tete);
	printf("affichage apres suppression\n");
	affichage(tete);
	supprimerb(&tete);
	printf("affichage apres suppression b\n");
	affichage(tete);
	
	
}
void affichage(pile *tete){
	pile *temp;
	init(&temp);
	ville v;
	while(!vide(tete)){
		depiler(&tete,&v);
		printf("%s %.2f %d\n",v.nom,v.superficie,v.nbrd);
		empiler(&temp,v);
	}
	while(!vide(temp)){
		depiler(&temp,&v);
		empiler(&tete,v);
	}
}
void supprimer(pile **tete){
	int i=0;
	ville v1;
	pile *temp;
	init(&temp);
	while(!vide(*tete)){
		depiler(&(*tete),&v1);
		if(i!=2){
			empiler(&temp,v1);
		}
		i++;
	}
	while(!vide(temp)){
		depiler(&temp,&v1);
			empiler(&(*tete),v1);
	}
}

void supprimerb(pile **tete){
	ville v1;
	pile *temp;
	init(&temp);
	while(!vide(*tete)){
		depiler(&(*tete),&v1);
		if(v1.nom[0]!='b'){
			empiler(&temp,v1);
		}
	
	}
	while(!vide(temp)){
		depiler(&temp,&v1);
			empiler(&(*tete),v1);
	}
}

