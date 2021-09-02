#include<stdio.h>
#include<math.h>

int main(){
	int a,c,r,x,cpt;
	
	do{
		printf("donnez un nombre");
		scanf("%d",&a);
	} while(a<0);
	
	
	
	do{
		printf("donnez un nombre");
		scanf("%d",&c);
	} while(10<c || c<0);
	
	x=a;
	
	if(x==0 && c==0){
		cpt=1;
	} else{
		cpt=0;
		
		while(x!=0){
			r=x%10;
			if(r==c)
				cpt=cpt+1;
		x=x/10;
		}
	}
	
	printf("le nombre %d est %d",c,cpt);

}
