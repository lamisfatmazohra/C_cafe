#include<stdio.h>
#include<string.h>
#include<stdbool.h>

typedef struct tcesar tcesar;
struct tcesar{
	int code;
	char lettre;
	
};


int main(){
	
	int i,j,shift;
	tcesar tab[26];
	char mot[10];
	bool trouve;
	int code;
	for(i=0;i<26;i++){
		tab[i].code=i;
		tab[i].lettre=65+i;
	}
	
	printf("donnez un mot");
	scanf(" %s",mot);
	printf("donnez shift");
	scanf("%d",&shift);
	
	for(i=0;i<strlen(mot);i++){
		j=0;
		trouve=false;
		while(j<26 && trouve==false){
			if(tab[j].lettre==mot[i]){
				code=tab[j].code;
				trouve=true;
			}
			j++;
		}
		code=code+shift;
		if(code>25)
			code=code-25;
		j=0;
		trouve=false;
		while(j<26 && trouve==false){
			if(tab[j].code==code){
				printf("%c",tab[j].lettre);
				trouve=true;
				
			}
			j++;
		}
		
	}
	
	
}
