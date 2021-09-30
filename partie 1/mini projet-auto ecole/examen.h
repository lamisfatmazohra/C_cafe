
bool passerexamen(int frais,int nbrs,int numd,int nume){
	FILE *f;
	f=fopen("candidat.txt","r");
	candidat k;
	bool passer=false;
	while(fread(&k,sizeof(candidat),1,f)){
		if(k.nbrseance>=nbrs && k.exam[numd].frais==frais && k.num==nume){
			passer=true;
		}
	}
	fclose(f);
	return passer;
}
void modifierexamen(int num,int nume){
	FILE *f,*g;
	candidat k;
	f=fopen("candidat.txt","r");
	g=fopen("candidat1.txt","w");
	while(fread(&k,sizeof(candidat),1,f)){
		if(k.num==nume){
			k.exam[num].reussi=true;
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

	

