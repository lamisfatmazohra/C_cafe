#include<stdio.h>
#include"calculatrice.h"

int main(){
	
	int a,b;
	printf("donnez un nombre");
	scanf("%d",&a);
	printf("donnez un autre nombre");
	scanf("%d",&b);
	printf("%d+%d=%d\n",a,b,add(a,b));
	printf("%d-%d=%d\n",a,b,sub(a,b));
	printf("%d*%d=%d\n",a,b,mul(a,b));
	printf("%d/%d=%d\n",a,b,div(a,b));
	printf("%d mod %d=%d\n",a,b,mod(a,b));
}
	
