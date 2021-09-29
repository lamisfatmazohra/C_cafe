
bool passerexamen(int frais,int nbrs,int numd){
	FILE *f;
	f=fopen("candidat.txt","a");
	candidat k;
	bool passer=false;
	while(fread(&k,sizeof(candidat),1,f)){
		if(k.nbrseance>=nbrs && k.exam[numd].frais==frais);
			passer=true;
	}
	fclose(f);
	return passer;
}

