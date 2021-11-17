#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

typedef struct dic dic;
struct dic{
	char mot[30];
	int nb;
};

bool existe(dic tab[100],char mot[30],int n);
void misajour(dic *tab,int n,char mot[30]);

int main(){
	
	dic tab[100];
	FILE *f;
	char mot[30];
	f=fopen("analyse.txt","r");
	int n=0;
	while(fgets(mot,30,f)!=NULL){
		strtok(mot,"\n");
		if(existe(tab,mot,n)){
			misajour(tab,n,mot);
			
		}else{
			strcpy(tab[n].mot,mot);
			tab[n].nb=1;
			n++;
			
		}
		
		
		
	}
	fclose(f);
	
	
	int i;
	for(i=0;i<n;i++){
		printf("%s %d\n",tab[i].mot,tab[i].nb);
	}
}

bool existe(dic tab[100],char mot[30],int n){
	bool trouve=false;
	int i;
	for(i=0;i<n && trouve==false;i++){
		if(strcmp(mot,tab[i].mot)==0){
			trouve=true;
		}
	}
	return trouve;
}

void misajour(dic *tab,int n,char mot[30]){
	int i;
	for(i=0;i<n;i++){
		if(strcmp(mot,tab[i].mot)==0){
			tab[i].nb++;
			break;
			
		}
	}
}
