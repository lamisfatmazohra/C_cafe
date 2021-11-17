#include<stdio.h>
#include<stdlib.h>

typedef struct liste liste;
typedef struct liste2 liste2;

struct liste{
	int numligne;
	liste *svt;
	liste2 *colonne;
};
struct liste2{
	int numcolonne;
	int val;
	liste2 *svt;
};

int main(){
	liste *tete=NULL;
	liste *p,*q;
	liste2 *r,*t;
	int i,j,n,m;
	int mat[20][20];
	
	printf("donnez le nombre de ligne");
	scanf("%d",&n);
	printf("donnez le nombre de colonne");
	scanf("%d",&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("donnez une valeur");
			scanf("%d",&mat[i][j]);
			
		}
	}
	for(i=0;i<n;i++){
		p=(liste*)malloc(sizeof(liste));
		p->numligne=i;
		p->svt=NULL;
		if(tete==NULL)
			tete=p;
		else
			q->svt=p;
		q=p;
		q->colonne=NULL;
		for(j=0;j<m;j++){
			if(mat[i][j]!=0){
				r=(liste2 *)malloc(sizeof(liste2));
				r->numcolonne=j;
				r->val=mat[i][j];
				r->svt=NULL;
				if(q->colonne==NULL){
					q->colonne=r;
				}else{
					t->svt=r;
					
				}
				t=r;
			}
		}
	}
	
	p=tete;
	while(p!=NULL){
		printf("\n%d ",p->numligne);
		t=p->colonne;
		while(t!=NULL){
			printf("%d %d->",t->numcolonne,t->val);
			t=t->svt;
		}
		p=p->svt;
	}

}

