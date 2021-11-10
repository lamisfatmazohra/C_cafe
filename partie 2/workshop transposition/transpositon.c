#include<stdio.h>
#include<string.h>

int main(){
	char mot[20];
	char mat[20][20];
	int i,j,n,m,k;
	
	printf("donnez le mot");
	scanf(" %s",mot);
	printf("donnez la taille de la matrice");
	scanf("%d %d",&n,&m);
	
	i=0;j=0;
	for(k=0;k<strlen(mot);k++){
			mat[i][j]=mot[k];
			j++;
			if(j>=m){
				j=0;
				i++;
			}
	}
	
/*	while(i<n){
		while(j<m){
			mat[i][j]=' ';
			j++;
		}
		i++;
	} */
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%c",mat[i][j]);
		}
	}
	printf("\n");
	for(j=0;j<m;j++){
		for(i=0;i<n;i++){
			printf("%c",mat[i][j]);
		}
	}
}
