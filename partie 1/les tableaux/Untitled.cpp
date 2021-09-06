#include<stdio.h>

int main(){
	
	int tab[5][5];
	int i,j;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i==j){
				tab[i][j]=1;
			}else{
				tab[i][j]=0;
			}
			
		}
	}
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d",tab[i][j]);
		}
		printf("\n");
	}
	
}
