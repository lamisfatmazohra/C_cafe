#include<stdio.h>
#include<string.h>

int occurence(char s[50],char c);

int main(){
	
	char s[50],c;
	printf("donnez une chaine de caractere");
	scanf(" %s",&s);
	printf("donnez un carctere");
	scanf(" %c",&c);
	printf("le nombre d'occurence %c est %d",c,occurence(s,c));
	
	
	
}

int occurence(char s[50],char c){
	int cpt=0,i;
	for(i=0;i<strlen(s);i++){
		if(s[i]==c)
			cpt++;
	}
	return cpt;
}
