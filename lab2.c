#include<stdio.h>

int main(){
	int n,i;
	
	do {
	 	printf("donnez un nombre");
	 	scanf("%d",&n);
    } while (n<=0);
    
    // afficher les nombres paires
    for(i=1;i<=n;i++){
    	if(i%2==0)
    		printf("le nombre %d est pair\n",i);
    		
    	
	}
	
	// afficher les nombre impaires
	int s=0;
	for(i=1;i<=n;i++){
		if(i%2!=0){
			printf("%d",i); s=s+i; 
			if(i<n-1)
				printf("+");
		
		}
		
			
	}
	printf("=%d",s);
}
