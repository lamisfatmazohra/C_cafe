#include<stdio.h>
#include<stdbool.h>
#include<math.h>


bool premier(int a);
bool parfait(int a);
bool armstrong(int a);
bool automorphe(int a);
void rq(int a,int b,int *r,int *q);

int main(){
	int n;
	do{
		printf("donnez un nombre");
		scanf("%d",&n);
	}while(n<=0);
	
	if(premier(n))
		printf("le nombre %d est premier\n",n);
	else 
		printf("le nombre n'est pas premier\n",n);
	
	if(parfait(n))
		printf("le nombre %d est parfait\n",n);
	else
		printf("le nombre %d n'est pas parfait\n",n);
	
	if(armstrong(n))
		printf("le nombre %d est armstrong\n",n);
	else
		printf("le nombre %d n'est pas armstrong\n",n);
	if(automorphe(n))
		printf("le nombre %d est automorphe",n);
	else
		printf("le nombre n'est pas automorphe",n);
	
	int a,b,r,q;
	do{
		printf("donnez un nombre");
		scanf("%d",&a);
	}while(a<0);
	do{
		printf("donnez un nombre");
		scanf("%d",&b);
	}while(b<=0);
		
	rq(a,b,&r,&q);
	printf("%d/%d=%d",a,b,q);
	printf("%d mod %d=%d",a,b,r);
	
	return 0;
		
}
bool premier(int a){
	int cpt=2;
	bool verifier=true;
	if (a==1)
		return false;
	while(cpt<=a/2 && verifier==true){
		if(a%cpt==0)
			verifier=false;
		cpt++;
	}
	return verifier;
}
bool parfait(int a){
	int cpt=0,i;
	for(i=1;i<=a/2;i++){
		if(a%i==0)
			cpt=cpt+i;
		
		
	}
	return cpt==a;
	
	
	
}
bool armstrong(int a){
	int s=0;
	int x=a;
	while (x!=0){
			s=s+pow(x%10,3);
			x=x/10;
	}
	return s==a;
}
bool automorphe(int a){
	int carre=a*a;
	int x=a;
   	bool autom=true;
	while(x!=0 && autom==true){
		if(x%10!=carre%10)
			autom=false;
		x=x/10;
		carre=carre/10;
		
	}
	return autom;
}
void rq(int a,int b,int *r,int *q){
	*r=a;
	*q=0;
	while(*r>=b){
		*r=*r-b;
		*q=*q+1;
	
	}
}
	
	

