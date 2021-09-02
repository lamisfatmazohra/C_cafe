#include<stdio.h>

int main(){
	
	int n,s,i;
	
	do{
		printf("donnez un nombre");
		scanf("%d",&n);
	}while(n<=0);
	
	s=0;
	i=2;
	while(i<=n){
		s=s+i;
		i=i*(i+1);
	}
	printf("la somme est %d\n",s);
}
