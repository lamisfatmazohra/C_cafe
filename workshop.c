#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<stdbool.h>


int main(){
	
	
	int random;
	int stime;
	long ltime;
	
	// Initialisation du compteur pour avoir un nombre al�atoire diff�rent pour chaque ex�cutation 
	ltime = time (NULL) ;
	stime = (unsigned) ltime /2 ;
	srand(stime);
	//g�n�rer un nombre al�atoire entre 1 et 1000.
	random = rand () % 1000 ;
	
	int i=1,chance=3,nombre;
	bool deviner=false;

	
	while(i<=3 && deviner==false){
		printf("donnez un nombre");
		scanf("%d",&nombre);
		if(nombre==random)
			deviner=true; 
		i++;
		
	}
	
	if(deviner==true)
		printf("bravo");
	else 
		printf("vous avez echoue, le nombre est %d",random);
	
}
