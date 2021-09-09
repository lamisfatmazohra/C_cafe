#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool palindrome(char s[50]);
void inverser(char *s);


int main(){
	
	char tab[100][50];
	int i,j,n;
	do{
		printf("donnez une valeur");
		scanf("%d",&n);
	}while(n<=0);
	for(i=0;i<n;i++){
		printf("donnez un mot");
		scanf(" %s",tab[i]);
	}
	for(i=0;i<n;i++){
		if(palindrome(tab[i]))
			printf("la chaine %s est palindrome\n",tab[i]);
		else{
			printf("la chaine %s n'est pas palindrome\n",tab[i]);
			inverser(tab[i]);
				printf("la chaine inverser %s est",tab[i]);
		}
	
	}
	
}
bool palindrome(char s[50]){
	
	int i=0,j=strlen(s)-1;
	bool verifier=true;
	while(i<=strlen(s)/2 && verifier==true){
		if(s[i]!=s[j])
			verifier=false;
		i++;
		j--;
	}
	return verifier;
}

void inverser(char *s){
	char x;
	int i,j=strlen(s)-1;
	for(i=0;i<=strlen(s)/2;i++){
		x=s[i];
		s[i]=s[j];
		s[j]=x;
		j--;
	}
}

