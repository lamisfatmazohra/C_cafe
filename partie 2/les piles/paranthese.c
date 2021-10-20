#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include"pile.h"

int main(){
	
	char *phrase;
	phrase=(char*)malloc(sizeof(char));
	pile *tete;
	int i,n;
	bool bien=true;
	char val;
	init(&tete);
	printf("donnez la chaine");
	gets(phrase);
	n=strlen(phrase);
	for(i=0;i<n && bien==true;i++){
		if(phrase[i]=='('){
			empiler(&tete,phrase[i]);
		}else if(phrase[i]==')'){
			if(vide(tete)==true)
				bien=false;
			else 
				depiler(&tete,&val);
		}
	
		
	}
	if(vide(tete)==true && bien==true)
		printf("la phrase est bien paranthese");
	else
		printf("la phrase est mal paranthese");
	

}
