typedef struct element element;

struct element{
	int val;
	element *svt;
};

typedef struct file file;

struct file{
	element *tete;
	element *q;
};

void init(file *head){
	(*head).tete=NULL;
	(*head).q=NULL;
}

void enfiler(file *head,int val){
	element *p;
	p=(element *)malloc(sizeof(element));
	p->val=val;
	p->svt=NULL;
	if((*head).q==NULL)
		(*head).tete=p;
	else		
		((*head).q)->svt=p;
	(*head).q=p;
}

void defiler(file *head,int *val){
	element *p;
	*val=((*head).tete)->val;
	p=(*head).tete;
	if((*head).tete==(*head).q){
		(*head).tete=NULL;
		(*head).q=NULL;
	}else{
		(*head).tete=((*head).tete)->svt;
	}
	free(p);
}

int tetefile(file head){
	return (head.tete)->val;
}

bool vide(file head){
	return (head.tete==NULL);
}
