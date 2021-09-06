#include<stdio.h>
#include<string.h>
#include<stdbool.h>


int main(){
	
	char tab[50][10],mot[10];
	int i,n;
	bool trouver;
	
	do{
		printf("donnez un nombre");
		scanf("%d",&n);
	}while(n<=0);
	
	for(i=0;i<n;i++){
		printf("donnez la case %d du tableau",i+1);
		scanf(" %s",tab[i]);
	
	}
	for(i=0;i<n;i++){
		printf(" %s %d",tab[i],strlen(tab[i]));
	}
	
	printf("donnez un mot");
	scanf(" %s",mot);
	trouver=false;
	
	i=0;
	while(i<n && trouver==false){
		if(strcmp(mot,tab[i])==0)
			trouver=true;
		i++;
	}
	
	if(trouver==true){
		printf("le mot %s existe",mot);
	}else{
		printf("le mot %s n'existe pas",mot);
	}
	
	
}
