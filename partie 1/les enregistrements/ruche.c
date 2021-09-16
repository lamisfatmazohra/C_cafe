#include<stdio.h>

struct ruche{
	int numero;
	int age;
	char type[11];
	float quantite;
};

typedef struct ruche ruche;

int main(){
	
	ruche tab[100];
	int i,n;
	do{
		printf("donnez la taille du tableau");
		scanf("%d",&n);
	}while(n<0 || n>100);
	
	for(i=0;i<n;i++){
		printf("donnez le numero de la ruche");
		scanf("%d",&tab[i].numero);
		printf("donnez l'age de la ruche");
		scanf("%d",&tab[i].age);
		printf("donnez le type de la ruche");
		scanf(" %s",tab[i].type);
		printf("donnez la quantite de la ruche");
		scanf("%f",&tab[i].quantite);
		
	}
	for(i=0;i<n;i++){
		printf("%d %d %s %f\n",tab[i].numero,tab[i].age,tab[i].type,tab[i].quantite);
	}
	
	ruche max;
	max=tab[0];
	for(i=1;i<n;i++){
		if(tab[i].quantite>max.quantite)
			max=tab[i];
	}
	printf("la ruche ayant produit la meilleur quantite du miel est %d\n",max.numero);
	
	float moy,nb;
	moy=0;
	nb=0;
	for(i=0;i<n;i++){
		if(strcmp(tab[i].type,"tellienne")==0){
			moy=moy+tab[i].quantite;
			nb=nb+1;
		}
		
	}
	
	printf("la production moyenne des ruches telliennes est %f",(moy/nb));
}
