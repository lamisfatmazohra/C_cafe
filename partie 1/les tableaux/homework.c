#include<stdio.h>
#include<time.h>
#include<stdlib.h>


int main(){
	
	// exercice 1 qst 1
	
	int tab[100];
	int i,n;
	
	do{
		printf("donnez un nombre");
		scanf("%d",&n);
	}while(n<=0);
	
	srand(time(NULL));
	
	for(i=0;i<n;i++){
		tab[i]=rand()%20;

	}
	
	for(i=0;i<n;i++){
		printf("%d ",tab[i]);
	}
	
	// qst 2
	
	int vecp[100],veci[100];
	int k=0,j=0;
	for(i=0;i<n;i++){
		if(tab[i]%2==0){
			vecp[j]=tab[i];
			j=j+1;
		}else{
			veci[k]=tab[i];
			k=k+1;
		}
		
	}
	printf("\n");
	for(i=0;i<j;i++){
		printf("%d ",vecp[i]);
	}
	printf("\n");
	for(i=0;i<k;i++){
		printf("%d ",veci[i]);
	}
	// exercice 2
	
	
	
	
	do{
		printf("donnez la taille du tableau");
		scanf("%d",&n);
	}while(n<=0);
	
	for(i=0;i<n;i++){
		do{
			printf("donnez une valeur");
			scanf("%d",&tab[i]);
		}while(tab[i]>=0);
	}
	
	for(i=0;i<n;i++){
		tab[i]=-1*tab[i];
		printf("%d ",tab[i]);
	}
	// exercice 3
	int vec[50][50];
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i<=j){
				printf("donnez une valeur");
				scanf("%d",&vec[i][j]);
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			vec[i][j]=vec[j][i];
		}
	}
	printf("\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",vec[i][j]);
		}
	printf("\n");
	}
	
}
