void ajouteretudiant( tetudiant etudiant ){
    FILE *f ;
    f=fopen("etudiants.txt","a") ;
    fwrite(&etudiant,sizeof(tetudiant),1,f);
    fclose (f);
}
void modifieretudiant(int matricule, tetudiant nbetd){
    FILE *f,*g ;
    tetudiant etd ;
    f=fopen("etudiants.txt","r") ;
    g=fopen("intermediaire.txt","w");
    while(fread(&etd,sizeof(tetudiant),1,f)) {
        if (etd.matricule==matricule) {
            fwrite (&nbetd , sizeof(tetudiant),1,g) ;



        }
        else
            fwrite (&etd,sizeof(tetudiant),1,g) ;
    }
    fclose(f);
    fclose(g);
    f=fopen("etudiants.txt","w");
    g=fopen("intermediaire.txt","r");
    while (fread(&etd,sizeof(tetudiant),1,g)) {
        fwrite(&etd,sizeof(tetudiant),1,f);

    }
    fclose(f);
    fclose(g);
}
void supprimeretudiant (int matricule){
    FILE *f ,*g ;
    tetudiant etd ;
    f=fopen("etudiants.txt","r") ;
    g=fopen ("intermediaire.txt","w");
    while (fread(&etd,sizeof(tetudiant),1,f)) {
        if(etd.matricule!=matricule) {
            fwrite(&etd,sizeof(tetudiant),1,g) ;

        }

    }
    fclose(f);
    fclose(g);
    f=fopen("etudiants.txt","w") ;
    g=fopen("intermediaire.txt","r") ;
    while(fread(&etd,sizeof(tetudiant),1,g))
    {
        fwrite(&etd,sizeof(tetudiant),1,f);
    }
    fclose(f);
    fclose(g);


}
void afficheretudiant (){
    FILE*f ;
    tetudiant etd ;
    f=fopen("etudiants.txt","r");
    while(fread(&etd, sizeof(tetudiant),1,f)) {
        printf("%s %s %d %s %s %.2f\n", etd.nom , etd.prenom ,etd.matricule,etd.section.nom , etd.section.filiere ,etd.moy);
    }
    fclose(f);

}

