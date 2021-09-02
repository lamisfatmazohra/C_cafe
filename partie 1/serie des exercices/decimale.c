#include<stdio.h>
#include<math.h>

int main(){
	
	int a,s,x,i;
	
	printf("donnez un nombre");
	scanf("%d",&x);
	
	a=x;
	s=0;
	i=0;
	while(x!=0){
		s=s+pow(2,i)*(x%10);
		x=x/10;
		i++;	
	}
	
	printf("le nombre %d en decimale est %d",a,s);
}
