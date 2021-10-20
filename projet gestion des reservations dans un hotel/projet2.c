#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>


typedef struct reservation reservation;
struct reservation{
	int numch;
	int pension;
	int duree;
	bool piscine;
	reservation *svt;
};

void lirereservation(reservation **tete,int n);
void afficherreservation(reservation *tete);
int facture(reservation *tete,int numch);
void affichage(reservation *tete);
void supprimerreservation(reservation **tete);


int main(){
	
	int n,numch;
	int pension;
	reservation *tete;
	tete=NULL;
	bool piscine;
	
	do{
		printf("donnez la taille de la liste");
		scanf("%d",&n);
	}while(n<0);
	
	lirereservation(&tete,n);
	afficherreservation(tete);
	
	printf("donnez le numero de la chambre");
	scanf("%d",&numch);
	printf("la facture est\n");
	printf("%d",facture(tete,numch));
	
	
	printf("affichage all inclusif\n");
	affichage(tete);
	
	supprimerreservation(&tete);
	printf("affichage apres suppresion\n");
	afficherreservation(tete);
	
}

void lirereservation(reservation **tete,int n){
	reservation *p,*q;
	p=*tete;
	int i=0;
	while(i<n){
		p=(reservation*)malloc(sizeof(reservation));
		printf("donnez le numero de la chambre");
		scanf("%d",&p->numch);
		printf("donnez le type de pension 0 pour petit dejeuner 1 pour demi pension 2 pour all inclusif");
		scanf("%d",&p->pension);
		printf("donnez la duree du sejour");
		scanf("%d",&p->duree);
		printf("acces piscine");
		scanf("%d",&p->piscine);
		p->svt=NULL;
		if(*tete==NULL)
			*tete=p;
		else
			q->svt=p;
		q=p;
		i++;
	}
	

}

void afficherreservation(reservation *tete){
	reservation *p;
	p=tete;
	while(p!=NULL){
		printf("%d %d %d %d\n",p->numch,p->pension,p->duree,p->piscine);
		p=p->svt;
	}
}
	


int facture(reservation *tete,int numch){
	reservation *p;
	p=tete;
	int frais=0;
	int duree;
	while(p!=NULL){
		if(p->numch==numch){
			duree=p->duree;
			if(p->pension==0){
				frais=3300;
			}else{
				if(p->pension==1){
				frais=4500;
				}else{
					if(p->pension==2){
					frais=6500;
					}
				}
			}
			if(p->piscine==true){
				frais=frais+1500;
				
			}
		}	
		p=p->svt;
	}
	
	return frais*duree;
}

void affichage(reservation *tete){
	reservation *p;
	p=tete;
	while(p!=NULL){
		if(p->pension==2 && p->piscine==true){
			printf("%d %d %d %d\n",p->numch,p->pension,p->duree,p->piscine);
		}
		p=p->svt;
	}

}

void supprimerreservation(reservation **tete){
		reservation *p,*prec;
		p=*tete;
		prec=NULL;
		while(p!=NULL){
			if(p->pension==0){
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


