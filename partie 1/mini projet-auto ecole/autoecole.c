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
	int frais=1000,nbr,numd;
	printf("donnez le nom de condidateur");
	scanf(" %s",cand.nom);
	printf("donnez le numero de dossier");
	scanf("%d",&cand.num);
	printf("donnez l'age de condidateur");
	scanf("%d",&cand.age);
	strcpy(cand.exam[0].nom,"code");
	strcpy(cand.exam[1].nom,"cren");
	strcpy(cand.exam[2].nom,"conduite");
	cand.exam[0].reussi=false;
	cand.exam[1].reussi=false;
	cand.exam[2].reussi=false;
	cand.exam[0].frais=1000;
	cand.exam[1].frais=1000;
	cand.exam[2].frais=1000;
	cand.montantp=5000;
	cand.montantr=20000;
	cand.nbrseance=0;
	ajoutercandidat(cand);
	affichercandidat();


	printf("donnez le nombre de seance");
	scanf("%d",&nbr);
	printf("donnez le numero d'examen 0 pour code 1 pour creneau 2 pour conduite");
	scanf("%d",&numd);
	printf("est ce que le condidateur a paye les frais d'examen");
	scanf("%d",&frais);
	if(passerexamen(frais,nbr,numd)==true)
		printf("le condidateur a le droit de passer l'examen\n");
	else
		printf("le condidateur n'a pas le droit de passer l'examen\n");
	
	cand.exam[0].reussi=true;
	cand.exam[1].reussi=false;
	cand.exam[2].reussi=false;
	cand.montantp=10000;
	cand.montantr=15000;
	printf("donnez le nombre de seance");
	scanf("%d",&nbr);
	printf("donnez le numero d'examen 0 pour code 1 pour creneau 2 pour conduite");
	scanf("%d",&numd);
	if(passerexamen(frais,nbr,numd)==true)
		printf("le condidateur a le droit de passer l'examen\n");
	else
		printf("le condidateur n'a pas le droit de passer l'examen\n");
	

	cand.exam[0].reussi=true;
	cand.exam[1].reussi=true;
	cand.exam[2].reussi=false;
	cand.montantp=15000;
	cand.montantr=5000;
	printf("donnez le nombre de seance");
	scanf("%d",&nbr);
	printf("donnez le numero d'examen 0 pour code 1 pour creneau 2 pour conduite");
	scanf("%d",&numd);
	printf("donnez le numero d'examen 0 pour code 1 pour creneau 2 pour conduite");
	scanf("%d",&numd);
	if(passerexamen(frais,nbr,numd)==true)
		printf("le condidateur a le droit de passer l'examen\n");
	else
		printf("le condidateur n'a pas le droit de passer l'examen\n");
	
	cand.exam[0].reussi=true;
	cand.exam[1].reussi=true;
	cand.exam[2].reussi=true;
	cand.montantp=25000;
	cand.montantr=0;
	printf("donnez le nombre de seance");
	scanf("%d",&nbr);
	printf("donnez le numero d'examen 0 pour code 1 pour creneau 2 pour conduite");
	scanf("%d",&numd);
	printf("donnez le numero d'examen 0 pour code 1 pour creneau 2 pour conduite");
	scanf("%d",&numd);
	if(passerexamen(frais,nbr,numd)==true)
		printf("le condidateur a le droit de passer l'examen\n");
	else
		printf("le condidateur n'a pas le droit de passer l'examen\n");
	
	supprimercandidat(cand);
	affichercandidat();
	
}
