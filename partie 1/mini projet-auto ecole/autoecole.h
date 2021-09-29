

struct examen{
	char nom[10];
	int frais;
	bool reussi;

};
typedef struct examen examen;

struct candidat{
	char nom[10];
	int num;
	int age;
	examen exam[3];
	int nbrseance;
	int montantp;
	int montantr;
};
typedef struct candidat candidat;
