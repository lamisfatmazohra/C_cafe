#include<stdio.h>
#include<stdbool.h>

int convertir(int tab[50],int n);
bool pairimpair(int a);
bool stable(int a);

int main(){
	 int n,b,i,a;
	 int tab[50];
	 do{
	 	printf("donnez la taille du tableau");
	 	scanf("%d",&n);
	 }while(n>=15);
	 
	 for(i=0;i<n;i++){
	 	printf("donnez une valeur");
	 	scanf("%d",&tab[i]);
	 }
	 a=convertir(tab,n);
	 printf("le nombre est %d\n",a);
	 
	 if(pairimpair(a)==true){
	 	printf("le nombre %d est equilibre\n",a);
	 	if(stable(a)==true)
	 		printf("le nombre %d est stable",a);
		 }
	else
		printf("le nombre %d n'est pas equilibre\n",a);
		
	 
}
int convertir(int tab[50],int n){
	int i,s=tab[0];
	for(i=1;i<n;i++){
		s=(s*10)+tab[i];
	}
	return s;
}
bool pairimpair(int a){
	
	int i=0,r,cpt1=0,cpt2=0;
	while(a!=0){
		r=a%10;
		if(r%2==0){
			cpt1=cpt1+1;
		}else{
			cpt2=cpt2+1;
		}
		a=a/10;	
	}
	return cpt1==cpt2;
}
bool stable(int a){
	int chiffre1,chiffre2;
	bool st=true;
	while(a!=0){
		chiffre1=a%10; a=a/10;
		chiffre2=a%10;
		a=a/10;
		if(chiffre1%2!=0 && chiffre2%2==0)
			st=false;
	}
	return st;
		
}
