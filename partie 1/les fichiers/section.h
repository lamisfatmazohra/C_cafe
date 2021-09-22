

void afficheretudiants(tsection sec){
	FILE *f;
	tetudiant etud;
	f=fopen("etudiants.txt","r");
	while(fread(&etud,sizeof(tetudiant),1,f)){
		if(strcmp(etud.section.nom,sec.nom)==0)
			printf("%s %s %d %s %s %.2f\n",etud.nom,etud.prenom,etud.matricule,etud.section.nom ,etud.section.filiere,etud.moy);
	}
	fclose(f);
	
}

void moyennegenerale(tsection sec,float *m){
	FILE *f;
	tetudiant etud;
	float s=0;
	int cpt=0;
	f=fopen("etudiants.txt","r");
	while(fread(&etud,sizeof(tetudiant),1,f)){
		if(strcmp(etud.section.nom,sec.nom)==0){
		
			s=s+etud.moy;
			cpt=cpt+1;
		
		}
			
	}
	*m=s/cpt;
	fclose(f);
}
