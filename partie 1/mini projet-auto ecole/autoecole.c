#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include"autoecole.h"
#include"candidat.h"
#include"examen.h"

int main(){
	
	int montant;
	char nom[10];
	candidat cand;
	int frais=1000,nbr,numd,nume;
	int choix;
	while(1){
		printf("menu\n");
		printf("1-ajouter candidat\n");
		printf("2-supprimer candidat\n");
		printf("3-passer un examen\n");
		printf("4-afficher candidat\n");
		printf("donnez votre choix");
		scanf("%d",&choix);
		switch(choix){
			case 1 : printf("donnez le nom de condidateur");
				scanf(" %s",cand.nom);
				printf("donnez le numero de dossier");
				scanf("%d",&cand.num);
				printf("donnez l'age de condidateur");
				scanf("%d",&cand.age);
				strcpy(cand.exam[0].nom,"code");
				strcpy(cand.exam[1].nom,"cren");
				strcpy(cand.exam[2].nom,"conduite");
				cand.exam[0].reussi=0;
				cand.exam[1].reussi=0;
				cand.exam[2].reussi=0;
				cand.exam[0].frais=1000;
				cand.exam[1].frais=1000;
				cand.exam[2].frais=1000;
				cand.montantp=5000;
				cand.montantr=20000;
				cand.nbrseance=0;
				ajoutercandidat(cand);
				break;
			case 2 : printf("donnez le numero de dossier");
					 scanf("%d",&numd);
					 cand=recuperercandidat(numd);
					 supprimercandidat(cand);
					 break;
			case 3 : printf("donnez le numero d'examen 0 pour code 1 pour creneau 2 pour conduite");
					 scanf("%d",&numd);
					 printf("est ce que le condidateur a paye les frais d'examen(0 pour non et 1000 pour oui)");
					 scanf("%d",&frais);
					 printf("donnez le numero de dossier");
					 scanf("%d",&nume);
					 printf("donnez le nombre de seance");
					 scanf("%d",&nbr);
					 modifiernbrs(nume,nbr);
					 if(passerexamen(frais,5,numd,nume)==true){
						printf("le condidateur a le droit de passer l'examen\n");
						modifierexamen(numd,nume);
						modifiermontantr(nume);
					 }else
						printf("le condidateur n'a pas le droit de passer l'examen\n");
					break;
			case 4 : affichercandidat();
					 break;
			
			}						
	}

	
	

	
	
	
}
