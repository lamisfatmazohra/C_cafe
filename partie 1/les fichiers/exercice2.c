#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int mat[5][5];
int n=5;

void remplissage();
void affichage();
void somme(int *s1,int *s2);

int main(){
	
	int s1,s2;
	remplissage();
	affichage();
	somme(&s1,&s2);
	printf("la somme de la premiere diagonale est %d\n",s1);
	printf("la somme de a deuxieme diagonale est %d\n",s2);
	
}
void remplissage(){
	int i,j;
	srand(time(NULL));
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			mat[i][j]=rand()%20;
		}
	}
}
void affichage(){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	
}
void somme(int *s1,int *s2){
	*s1=0;
	*s2=0;
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j)
				*s1=*s1+mat[i][j];
			if(i==n-j-1)
				*s2=*s2+mat[i][j];
		}
	}
}
