
struct tsection{
	char nom[20];
	char filiere[10];
};

typedef struct tsection tsection;

struct tetudiant{
	char nom[20];
	char prenom[20];
	int matricule;
	float moy;
	tsection section;
};

typedef struct tetudiant tetudiant;

