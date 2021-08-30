#include<stdio.h>
#include<math.h>

int main(){
	 
	int cpt=0,n,i;
	
	do{
		printf("donnez un nombre");
		scanf("%d",&n);
	} while(n<=0);
	
	for(i=1;i<=n/2;i++){
		if(n%i==0)
			cpt=cpt+i;
	}
	
	if(n==cpt){
		printf("le nombre %d est parfait\n",n);
	}else{
		printf("le nombre %d est non parfait\n",n);
	}
}
