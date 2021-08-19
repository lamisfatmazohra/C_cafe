#include<stdio.h>
#include<math.h>

int main ()
{
	int a;
	printf("donnez un nombre");
	scanf("%d",&a);
	if(a%2==0){
		printf("le nombre %d est pair\n",a);
	} else {
		printf("le nombre %d est impair\n",a);
	}
	// exercice 2
	int x,y;
	printf("donnez un nombre");
	scanf("%d",&x);
	printf("donnez un autre nombre");
	scanf("%d",&y);
	printf("le resultat de la puissance est %.1f\n",pow(x,y));
	// exercice 3
	char c;
	printf("donnez un caractere");
	scanf(" %c",&c);
	switch (c){
		case 'M': printf("%c coresspand a un masculin\n",c);
		break;
		case 'F': printf("%c coresspand a un feminin\n",c);
		break;
		default : printf("incorect");
		
	}
	// exercice 4
	switch(c){
		case 'A': 
		case 'E':
		case 'I':
		case 'O':
		case 'Y':
		case 'U': printf("%c est une voyelle",c);
		break;
		default : printf ("%c est une constante",c);
	
	}
		

	return 0;
}


