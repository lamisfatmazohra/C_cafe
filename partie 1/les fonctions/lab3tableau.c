#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<stdbool.h>

void remplisage(int *tab,int *n);
void affichage(int tab[100],int n);
int occurence(int tab[100],int val,int n);
bool existe(int tab[100],int val,int n);
void pair(int tab[100],int n,int *vec,int *k);

int main(){
	
	int tab[100];
	int i,n,val;
	
	remplisage(tab,&n);
	affichage(tab,n);
	printf("donnez une valeur");
	scanf("%d",&val);
	printf("le nombre d'occurence %d est %d\n",val,occurence(tab,val,n));
	if(existe(tab,val,n))
		printf("la valeur %d existe",val);
	else
		printf("la valeur %d n'existe pas",val);
		
	int vec[100];
	int k;
	pair(tab,n,vec,&k);
	affichage(vec,k);
	
}
void remplisage(int *tab,int *n){
	do{
		printf("donnez la taille du tableau");
		scanf("%d",&(*n));
	}while(*n<=0);
	
	srand(time(NULL));
	int i;
	for(i=0;i<*n;i++){
		tab[i]=rand()%20;
	}
	
}
void affichage(int tab[100],int n){
	int i;
	for(i=0;i<n;i++)
		printf("%d ",tab[i]);

}
int occurence(int tab[100],int val,int n){
	int cpt=0,i;
	for(i=0;i<n;i++){
		if(tab[i]==val)
			cpt=cpt+1;
		
	}
	return cpt;
}
bool existe(int tab[100],int val,int n){
	bool rechercher=false;
	int i=0;
	while(i<n && rechercher==false){
		if(tab[i]==val)
			rechercher=true;
		i++;
	}
	return rechercher;
}
void pair(int tab[100],int n,int *vec,int *k){
	int i;
	*k=0;
	for(i=0;i<n;i++){
		if(tab[i]%2==0){
			vec[*k]=tab[i];
			*k=*k+1;
		}
			
	}
}


