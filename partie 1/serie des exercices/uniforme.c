#include<stdio.h>
#include<stdbool.h>


int main(){
	
	int n,x,a;
	bool uniforme;
	
	do{
		printf("donnez un nombre");
		scanf("%d",&n);
	}while(n<=0);
	
	a=n;
	x=n%10;
	uniforme=true;
	while(n!=0 && uniforme==true){
		
		if(n%10!=x)
			uniforme=false;
		n=n/10;
	}
	
	if(uniforme==true){
		printf("le nombre %d est uniforme\n",a);
	} else{
		printf("le nombre %d est non uniforme\n",a);
	}
	
}
