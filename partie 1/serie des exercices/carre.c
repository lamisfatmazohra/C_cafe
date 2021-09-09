#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int carre(int n);
bool automorphe(int n);


int main(){
	
	int a,i,n;
	do{
		printf("donnez un nombre");
		scanf("%d",&n);
	}while(n<=0);
	
	
	for(i=0;i<n;i++){
		if(automorphe(i))
		printf("le nombre %d est automorphe\n",i);
	else
		printf("le nombre n'est pas automorphe\n",i);
	
	}
}

int carre(int n){
	return n*n;
	
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

