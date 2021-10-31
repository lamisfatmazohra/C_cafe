#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include"pile.h"


struct element{
	int val;
	struct element *svt;
};
typedef struct element liste;

void remplissage(liste **tete,int n);
void affichage(liste *tete);
void eclater(liste *tete,liste **lp,liste **ln);
int indicemax(liste *tete);
bool recherche(char nom[40],int val);
void fusionner(liste **tete,char nom[30],char nom2[30]);

int main(){
	
	liste *tete,*ln,*lp;
	int n;
	do{
		printf("donnez la taille de la liste");
		scanf("%d",&n);
	}while(n<0);
	
	remplissage(&tete,n);
	affichage(tete);
	printf("\n");
	eclater(tete,&lp,&ln);
	affichage(ln);
	printf("\n");
	affichage(lp);
	
	printf("\n");
	printf("l'indice de la valeur maximale est %d\n",indicemax(tete));
	
	pile *inverse;
	init(&inverse);
	lp=tete;
	while(lp!=NULL){
		empiler(&inverse,lp->val);
		lp=lp->svt;
	}
	while(!vide(inverse)){
		depiler(&inverse,&n);
		printf("%d ",n);
	}
	
	printf("\n");
	fusionner(&tete,"fichier 1.txt","fichier 2.txt");
	affichage(tete);
	
}

void remplissage(liste **tete,int n){
	*tete=NULL;
	liste *p,*q;
	int i;
	for(i=0;i<n;i++){
		p=(liste*)malloc(sizeof(liste));
		printf("donnez la valeur");
		scanf("%d",&p->val);
		p->svt=NULL;
		if(*tete==NULL)
			*tete=p;
		else
			q->svt=p;
		q=p;
	}
}
void affichage(liste *tete){
	liste *p;
	p=tete;
	while(p!=NULL){
		printf("%d ",p->val);
		p=p->svt;
	}
}
void eclater(liste *tete,liste **lp,liste **ln){
	liste *p,*l,*k,*s;
	p=tete;
	*lp=NULL;
	*ln=NULL;
	while(p!=NULL){
		s=(liste*)malloc(sizeof(liste));
		if(p->val<0){
			s->val=p->val;
			s->svt=NULL;
			if(*ln==NULL)
				*ln=s;
			else
				l->svt=s;
			l=s;
		}else{
			s->val=p->val;
			s->svt=NULL;
			if(*lp==NULL)
				*lp=s;
			else
				k->svt=s;
			k=s;

		}
		p=p->svt;
		
	}
	
}
int indicemax(liste *tete){
	liste *p;
	p=tete;
	int max,i,indice;
	max=p->val;
	indice=0;
	i=0;
	while(p!=NULL){
		if(p->val>max){
			max=p->val;
			indice=i;
		}
		i++;
		p=p->svt;
	}
	return indice;
}

bool recherche(char nom[40],int val){
	FILE *f;
	f=fopen(nom,"r");
	 bool trouve=false;
	char chaine[30];
	int nb;
	while(fgets(chaine,30,f) && trouve==false){
		strtok(chaine,"\n");
		nb=atoi(chaine);
		if(nb==val){
			trouve=true;
		}
	}
	return trouve;
	
}

void fusionner(liste **tete,char nom[30],char nom2[30]){
	FILE *f1,*f2;
	liste *p,*q;
	char chaine[30];
	int nb;
	f1=fopen(nom,"r");
	f2=fopen(nom2,"r");
	*tete=NULL;
	while(fgets(chaine,30,f1)){
		p=(liste*)malloc(sizeof(liste));
		strtok(chaine,"\n");
		nb=atoi(chaine);
		p->val=nb;
		p->svt=NULL;
		if(*tete==NULL){
			*tete=p;
		
		}else{
			q->svt=p;
		}
		q=p;
	}
	fclose(f1);
	while(fgets(chaine,30,f2)){
		p=(liste*)malloc(sizeof(liste));
		strtok(chaine,"\n");
		nb=atoi(chaine);
		if(recherche(nom,nb)==false){
		
			p->val=nb;
			p->svt=NULL;
			if(*tete==NULL){
				*tete=p;
		
			}else{
				q->svt=p;
			}
			q=p;
		}
	}
}
