#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "types.h"
#include "etudiant.h"
#include "section.h"

int main(){
	tetudiant a;
	int i,n;
	
	do{
		printf("donnez le nombre d'etudiant");
		scanf("%d",&n);
	}while(n<0);
		
	for(i=0;i<n;i++){
		printf("donnez le nom d'etudiant\n");
		scanf(" %s",a.nom);
		printf("donnez le prenom d'etudiant\n");
		scanf(" %s",a.prenom);
		printf("donnez le matricule\n");
		scanf("%d",&a.matricule);
		printf("donnez le nom de la section\n");
		scanf(" %s",a.section.nom);
		printf("donnez la filiere de la section\n");
		scanf(" %s",a.section.filiere);
		printf("donnez la moyenne d'etudiant\n");
		scanf("%f",&a.moy);
		ajouteretudiant(a);
		
		
	}
	printf("\n\n**************************************************\n\n");
	afficheretudiant();
	printf("\n\n**************************************************\n\n");
	int mat;
	printf("donnez un matricule\n");
	scanf("%d",&mat);
	supprimeretudiant(mat);
	afficheretudiant();
	printf("\n\n**************************************************\n\n");
	printf("donnez le nom d'etudiant\n");
	scanf(" %s",a.nom);
	printf("donnez le prenom d'etudiant\n");
	scanf(" %s",a.prenom);
	printf("donnez le matricule\n");
	scanf("%d",&a.matricule);
	printf("donnez le nom de la section\n\n");
	scanf(" %s",a.section.nom);
	printf("donnez la filiere de la section\n");
	scanf(" %s",a.section.filiere);
	printf("donnez la moyenne d'etudiant\n");
	scanf("%f",&a.moy);
	modifieretudiant(mat,a);
	printf("\n\n**************************************************\n\n");
	afficheretudiant();
	
	tsection sect;
	float m;
	printf("\n\n**************************************************\n\n");
	printf("donnez le nom de la section");
	scanf(" %s",sect.nom);
	afficheretudiants(sect);
	moyennegenerale(sect,&m);
	printf("la moyenne generale est %f",m);
	
	return 0;
	
	
	
	
}
