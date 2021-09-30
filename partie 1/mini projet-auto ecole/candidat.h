
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
		printf("num: %d\nnom: %s \nmontantr: %d\nnbseance: %d\n",k.num,k.nom,k.montantr,k.nbrseance);
		printf("examen code: %d %d\nexamen creneau: %d %d\nexamen conduite: %d %d\n\n",k.exam[0].reussi,k.exam[0].frais,k.exam[1].reussi,k.exam[1].frais,k.exam[2].reussi,k.exam[2].frais);
	}
	fclose(f);
}

void supprimercandidat(candidat cand){
	FILE *f,*g;
	candidat k;
	bool sup=false;
	f=fopen("candidat.txt","r");
	g=fopen("candidat1.txt","w");
	while(fread(&k,sizeof(candidat),1,f)){
		if(k.exam[0].reussi==0 && k.exam[1].reussi==0 && k.exam[2].reussi==0 && k.montantr!=0){
			fwrite(&k,sizeof(candidat),1,g);
		}else {
			sup=true;
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
		if(sup==false){
		printf("le condidat ne peut pas etre supprimer\n");
	}
	
}
candidat recuperercandidat(int num){
	FILE *f;
	candidat a,b;
	bool existe=true;
	f=fopen("candidat.txt","r");
	while(fread(&a,sizeof(candidat),1,f) && existe==true){
		if(a.num==num){
			existe=false;
			b=a;
		}
		
			
	}
	fclose(f);
	return b;
}
void modifiernbrs(int num,int nbrs){
	FILE *f,*g;
	candidat k;
	f=fopen("candidat.txt","r");
	g=fopen("candidat1.txt","w");
	while(fread(&k,sizeof(candidat),1,f)){
		if(k.num==num){
			k.nbrseance=nbrs;
			fwrite(&k,sizeof(candidat),1,g);
		}else{
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
void modifiermontantr(int num){
	FILE *f,*g;
	candidat k;
	f=fopen("candidat.txt","r");
	g=fopen("candidat1.txt","w");
	while(fread(&k,sizeof(candidat),1,f)){
		if(k.num==num){
			k.montantr=0;
			fwrite(&k,sizeof(candidat),1,g);
		}else{
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


