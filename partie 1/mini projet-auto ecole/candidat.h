
void ajoutercandidat(candidat cand){
	FILE *f;
	candidat k;
	f=fopen("candidat.txt","a");
	fwrite(&cand,sizeof(candidat),1,f);
	fclose(f);	
}

void affichercandidat(){
	FILE *f;
	candidat k;
	f=fopen("candidat.txt","r");
	while(fread(&k,sizeof(candidat),1,f)){
		printf("%s %d %d %d",k.nom,k.num,k.montantp,k.montantr);
	}
	fclose(f);
}

void supprimercandidat(candidat cand){
	FILE *f,*g;
	candidat k;
	f=fopen("candidat.txt","r");
	g=fopen("candidat1.txt","w");
	while(fread(&k,sizeof(candidat),1,f)){
		if(k.exam[0].reussi==false && k.exam[1].reussi==false && k.exam[2].reussi==false && k.montantr!=0){
			fwrite(&k,sizeof(candidat),1,g);
		}
	}
	fclose(f);
	fclose(g);
	f=fopen("candidat.txt","w");
	g=fopen("candidat1.txt","r");
	while(fread(&k,sizeof(candidat),1,g)){
		fwrite(&k,sizeof(candidat),1,f);
	}
	fclose(f);
	fclose(g);
}

