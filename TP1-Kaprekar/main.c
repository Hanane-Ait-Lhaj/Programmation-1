#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void decomposer(int n, int T[4]);
void Afficher(int T[4]);
int calculern1(int T[4]);
int calculrn2(int T[4]);
void tri_croissant(int T[4]);
void echanger(int T[4],int i, int min);
void kaprekar(int N,int max,int T[4]);

int main() {

	int n,T[4];
	int K, n1, n2;

	printf("Veuillez entrer un nombre de 4 chiffres\t");
	scanf("%d", &n);
	printf("le nombre que vous avez entrer est  : %d",n);

	decomposer(n,T);
	printf("\nVoici le tableau T[] : ");
	Afficher(T);

	printf("\ntableau apres triage : ");
	tri_croissant(T);
	Afficher(T);

	n1 = calculern1(T);
	printf("\n le n1 = %d",n1);

	n2 = calculern2(T);
	printf("\n n2 = %d",n2);
	K= n2-n1;

	printf("\n K = n2-n1 = %d",K);

	kaprekar(K,5,T);

	return 0;
}
void kaprekar(int N,int maxiter,int T[4]){
	int K=N,i=0;
	do{
		N=K; //N : previous value of K
		decomposer(K,T);
		tri_croissant(T);
		K= calculern2(T)-calculern1(T);
		printf("\n K = %d-%d = %d",calculern2(T),calculern1(T),K);
		i++;
	}while(K!=N && K!=0 && i!=maxiter); //maxiter est le nombre max des itteratives
}

void decomposer(int n, int T[4]){
	int i=0;
	while(i<4){
		T[i] = n % 10; //stocker le premier chiffre au droite du nbr dans le premier element du tableau : n=1234 =>T[0]=4
		n = n/10; //remove the number that was stored : n=123
		i++;
	}
}

void Afficher(int T[4]){
	int i;
	for(i=0;i<4;i++){
		printf("|%d\t",T[i]);
	}
	printf("\n");
}
int calculern1(int T[4]){ //croissant
 int i,n1=T[0];
   for (i=1;i<4;i++){
   	n1= (n1*10) +T[i];
   }

   return n1;
}

int calculern2(int T[4]){ //decroissant
 int i,n2=T[3];
   for (i=2;i>=0;i--){
   	n2= (n2*10) +T[i];
   }

   return n2;
}

void tri_croissant(int T[4]){ //trier le tableau en sens croissant => tri par selection
	int i,min,j;
	for(i = 0 ; i<3 ; i++){
		min=i;
		for(j=i+1;j<4;j++){
			if(T[j]<T[min]){
				min=j;
			}
		}
		if(min!=i){
			echanger(T,i,min);
		}
	}
}
//void tri_croissant(int T[4]){ //trier le tableau en sens croissant
//	int i,j, c;
//	for(i = 0 ; i<3 ; i++){
//		for(j=i+1;j<4;j++){
//			if(T[i]<T[j]){
//				c=T[i];
//				T[i]=T[j];
//				T[j]=c;
//			}
//		}
//	}
//}

void echanger(int T[4], int i, int min){
	int tmp;

	tmp=T[i];
	T[i]=T[min];
	T[min]=tmp;

}
