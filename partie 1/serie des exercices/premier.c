#include<stdio.h>
#include<math.h>

int main(){
	int n,cpt,i;
	
	do{
		printf("donnez un nombre");
		scanf("%d",&n);
	} while(n<=0);
	
	if(n==1){
		printf("le nombre %d est non premier\n",n);
	}else {
		cpt=2;
		
		for(i=2;i<=n/2;i++){
			if(n%i==0)
				cpt=cpt+1;
		}
	}
	
	if(cpt==2){
		printf("le nombre %d est premier\n",n);
	} else{
		printf("le nombre %d est non premier\n",n);
	}
}
