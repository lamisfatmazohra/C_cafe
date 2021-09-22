#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

bool verifier(FILE *f);
void remplir(int n);
void affichage();
bool rechercher(int val);
void minmax(int *max,int *min);

int main(){
	
	int n,val,max,min;
	do{
		printf("donnez un nombre");
		scanf("%d",&n);
	}while(n<=0);
	
	remplir(n);
	affichage();
	
	printf("donnez une valeur a rechercher");
	scanf("%d",&val);
	if(rechercher(val)==true)
		printf("la valeur %d existe\n",val);
	else
		printf("la valeur %d n'existe pas\n",val);
		
	minmax(&max,&min);
	printf("la valeur maximal est %d\n",max);
	printf("la valeur minimal eest %d\n",min);
		
	
}
bool verifier(FILE *f){
	return f==NULL;
}
void remplir(int n){
	int i;
	FILE *f;
	f=fopen("nbr.txt","w");
	int a;
	for(i=0;i<n;i++){
		printf("donnez un nombre");
		scanf("%d",&a);
		fwrite(&a,sizeof(int),1,f);
	}
	fclose(f);
}
void affichage(){
	FILE *f;
	int a;
	f=fopen("nbr.txt","r");
	while(fread(&a,sizeof(int),1,f)){
		printf("%d\n",a);
	}
	fclose(f);
}
bool rechercher(int val){
	bool existe=false;
	int k;
	FILE *f;
	f=fopen("nbr.txt","r");
	while(fread(&k,sizeof(int),1,f) && existe==false){
		if(k==val)
			existe=true;
	}
	fclose(f);
	return existe;
}
void minmax(int *max,int *min){
	FILE *f;
	f=fopen("nbr.txt","r");
	fread(&(*max),sizeof(int),1,f);
	*min=*max;
	int e;
	while(fread(&e,sizeof(int),1,f)){
		if(e>*max)
			*max=e;
		if(e<*min)
			*min=e;
	}
	fclose(f);
}
