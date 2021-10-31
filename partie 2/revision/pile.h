typedef struct pile pile;
struct pile{
	int val;
	pile *svt;
};

void init(pile **tete){
	*tete=NULL;
}

void empiler(pile **tete,int val){
	pile *p;
	p=(pile *)malloc(sizeof(pile));
	p->val=val;
	p->svt=*tete;
	*tete=p;
}

void depiler(pile **tete,int *val){
	pile *p;
	*val=(*tete)->val;
	p=*tete;
	*tete=(*tete)->svt;
	free(p);
}

int sommet(pile *tete){
	return tete->val;
}

bool vide(pile *tete){
	return tete==NULL;
}
