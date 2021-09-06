#include<stdio.h>

int main(){
	
	int tab[5][5];
	int i,j;
	
	// matrice 1
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
	// matrice 2
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i==5-j-1){
				tab[i][j]=1;
			}else{
				tab[i][j]=0;
			}
			
		}
		
	}
	printf("\n");
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d",tab[i][j]);
		}
		printf("\n");
		
	}
	// matrice 3
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i>=j){
				tab[i][j]=1;
			}else{
				tab[i][j]=0;
			}
			
		}
		
	}
	printf("\n");
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d",tab[i][j]);
		}
		printf("\n");

	}
	// matrice 4
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i<=j){
				tab[i][j]=1;
			}else{
				tab[i][j]=0;
			}
			
		}
		
	}
	printf("\n");
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d",tab[i][j]);
		}
		printf("\n");

	}	
	// matrice 5
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i==j||i==5-j-1){
				tab[i][j]=1;
			}else{
				tab[i][j]=0;
			}
			
		}
		
	}
	printf("\n");

	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d",tab[i][j]);
		}
		printf("\n");

	}
	// matrice 6	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if((i==j||i==5-j-1|| i==0)&&i<=5/2){
				tab[i][j]=1;
			}else{
				tab[i][j]=0;
			}
			
		}
		
	}
	printf("\n");
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d",tab[i][j]);
		}
		printf("\n");

	}	
	// matrice 7
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if((i==j||i==5-j-1|| i==4)&&i>=5/2){
				tab[i][j]=1;
			}else{
				tab[i][j]=0;
			}
			
		}
		
	}
	printf("\n");
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d",tab[i][j]);
		}
		printf("\n");

	}
	// matrice 8
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i==j||i==5-j-1|| i==0||i==4){
				tab[i][j]=1;
			}else{
				tab[i][j]=0;
			}
			
		}
		
	}
	printf("\n");
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d",tab[i][j]);
		}
		printf("\n");

	}	
	// matrice 9
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if((j==0||j==4|| i==0||i==4)|| (i==5/2 && j==5/2) ){
				tab[i][j]=1;
			}else{
				tab[i][j]=0;
			}
			
		}
		
	}
	printf("\n");
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d",tab[i][j]);
		}
		printf("\n");

	}	
	// matrice 10
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if((j==0||j==4|| i==0||i==4)|| (i==5/2) ){
				tab[i][j]=1;
			}else{
				tab[i][j]=0;
			}
			
		}
		
	}
	printf("\n");
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d",tab[i][j]);
		}
		printf("\n");

	}			
	// matrice 11
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if((j==0||j==4|| i==0||i==4)|| (j==5/2) ){
				tab[i][j]=1;
			}else{
				tab[i][j]=0;
			}
			
		}
		
	}
	printf("\n");
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d",tab[i][j]);
		}
		printf("\n");

	}																	
}



