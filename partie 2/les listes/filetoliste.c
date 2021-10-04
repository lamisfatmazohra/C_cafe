#include<stdio.h>
#include<stdlib.h>

typedef struct liste liste;
struct liste{
	int val;
	int occ;
	liste *svt;
};

void construction(liste *tete);
void affichage();

int main(){
	
	liste *tete;
	tete=NULL;
	int n,i;
	do{
		printf("donnez la taille de la liste");
		scanf("%d",&n);
	}while(n<=0);
	liste *p,*q;
	for(i=0;i<n;i++){
		p=(liste*)malloc(sizeof(liste));
		printf("donnez la valeur");
		scanf("%d",&p->val);
		printf("donnez le nombre d'occurence de la valeur");
		scanf("%d",&p->occ);
		p->svt=NULL;
		if(tete==NULL){
			tete=p;
		}else{
			q->svt=p;
		}
		q=p;
	}
	p=tete;
	while(p!=NULL){
		printf("%d %d\n",p->val,p->occ);
		p=p->svt;
	}
	
	construction(tete);
	printf("le fichier est\n");
	affichage();
}

void construction(liste *tete){
	FILE *f;
	f=fopen("liste.txt","w");
	liste *p;
	p=tete;
	int i;
	while(p!=NULL){
		for(i=0;i<p->occ;i++){
			fprintf(f,"%d\n",p->val);
		}
		fprintf(f,"%d\n",0);
		p=p->svt;
	}
	fclose(f);
}
void affichage(){
	FILE *f;
	f=fopen("liste.txt","r");
	char s[20];
	while(fgets(s,20,f)!=NULL){
		printf("%s\n",s);
	}
}
