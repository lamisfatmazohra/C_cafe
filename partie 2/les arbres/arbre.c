#include<stdio.h>
#include<stdlib.h>

typedef struct arbre arbre;
struct arbre{
	int val;
	arbre *fg;
	arbre *fd;
};

void rechercher(arbre **p,arbre **prec,int val);
void remplissage(arbre **racine,int n);
void affichage(arbre *racine);
void minmax(arbre *racine,int *max,int *min);

int main(){
	
	arbre *racine;
	int n;
	do{
		printf("donnez la taille de l'arbre");
		scanf("%d",&n);
	}while(n<=0);
	
	remplissage(&racine,n);
	affichage(racine);
	printf("\n");
	
	int min,max;
	minmax(racine,&max,&min);
	printf("%d %d ",max,min);
	
	
}

void rechercher(arbre **p,arbre **prec,int val){
	while(*p!=NULL && (*p)->val!=val){
		*prec=*p;
		if((*p)->val<val)
			*p=(*p)->fd;
		else
			*p=(*p)->fg;
		
	}
}
void remplissage(arbre **racine,int n){
	arbre *p,*prec;
	int i,val;
	*racine=NULL;
	for(i=0;i<n;i++){
		printf("donnez une valeur");
		scanf("%d",&val);
		p=*racine;
		prec=NULL;
		rechercher(&p,&prec,val);
		if(p==NULL){
			p=(arbre*)malloc(sizeof(arbre));
			p->val=val;
			p->fd=NULL;
			p->fg=NULL;
			if(prec==NULL)
				*racine=p;
			else
				if(prec->val>val)
					prec->fg=p;
				else
					prec->fd=p;
			
			
		}
	}
}
void affichage(arbre *racine){
	if(racine!=NULL){
		affichage(racine->fg);
		printf("%d ",racine->val);
		affichage(racine->fd);
	}
}
void minmax(arbre *racine,int *max,int *min){
	arbre *p,*q;
	p=racine;
	q=racine;
	while(p->fd!=NULL){
		p=p->fd;
	}
	*max=p->val;
	while(q->fg!=NULL){
		q=q->fg;
	}
	*min=q->val;
}
