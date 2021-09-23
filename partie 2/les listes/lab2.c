#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

typedef struct liste liste;

struct liste{
	int val;
    liste *svt;
};

void remplissage(liste **tete,int n);
void affichage(liste *tete);
bool rechercher(liste *tete,int val);
bool vide(liste *tete);
void supprimer(liste **tete,int val);
void inserer(liste **tete,int position,int val);

int main(){
	
	liste *tete;
	int n;
	int val;
	int position;
	do{
		printf("donnez un nombre");
		scanf("%d",&n);
	}while(n<=0);
	
	remplissage(&tete,n);
	affichage(tete);
	
	printf("donnez une valeur");
	scanf("%d",&val);
	if(rechercher(tete,val)==true)
		printf("la valeur %d existe\n",val);
	else
		printf("la valeur %d n'existe pas\n",val);
		
	if(vide(tete)==true)
		printf("la liste est vide\n");
	else
		printf("la liste n'est pas vide\n");
	
	printf("donnez la valeur");
	scanf("%d",&val);
	supprimer(&tete,val);
	affichage(tete);
	
	printf("donnez la valeur");
	scanf("%d",&val);
	printf("donnez la position");
	scanf("%d",&position);
	inserer(&tete,position,val);
	affichage(tete);
	
}
void remplissage(liste **tete,int n){
	int i;
	*tete=NULL;
	srand(time(NULL));
	liste *p,*q;
	for(i=0;i<n;i++){
		p=(liste*)malloc(sizeof(liste));
		p->val=rand()%10;
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
		printf("%d\n",p->val);
		p=p->svt;
	}
}
bool rechercher(liste *tete,int val){
	bool existe=false;
	liste *p;
	p=tete;

	while(p!=NULL && existe==false){
		if(p->val==val)
			existe=true;
		p=p->svt;
	}
	return existe;
}
bool vide(liste *tete){
	return tete==NULL;
}
void supprimer(liste **tete,int val){
	liste *p,*prec;
	p=*tete;
	prec=NULL;
	while(p!=NULL){
		if(p->val==val){
			if(p==*tete){
				*tete=(*tete)->svt;
				free(p);
				p=*tete;
			}
			else{
				prec->svt=p->svt;
				free(p);
				p=prec->svt;
			}
		}else{
			prec=p;
			p=p->svt;
		}
		
	}
}
void inserer(liste **tete,int position,int val){
	liste *p,*prec;
	prec=NULL;
	p=*tete;
	int i=1;
	while(p!=NULL && i<position){
		prec=p;
		p=p->svt;
		i++;
		
	}
	p=(liste*)malloc(sizeof(liste*));
	p->val=val;
	if(p==*tete){
		p->svt=*tete;
		*tete=p;
	}else{
		p->svt=prec->svt;
		prec->svt=p;
		
	}
}

