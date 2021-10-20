typedef struct ville ville;
struct ville{
	char nom[10];
	float superficie;
	int nbrd;
};
typedef struct pile pile;
struct pile{
	ville val;
	pile *svt;
};

void init(pile **tete){
	*tete=NULL;
}

void empiler(pile **tete,ville val){
	pile *p;
	p=(pile *)malloc(sizeof(pile));
	p->val=val;
	p->svt=*tete;
	*tete=p;
}

void depiler(pile **tete,ville *val){
	pile *p;
	*val=(*tete)->val;
	p=*tete;
	*tete=(*tete)->svt;
	free(p);
}

ville sommet(pile *tete){
	return tete->val;
}

bool vide(pile *tete){
	return tete==NULL;
}
