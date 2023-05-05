
#include <stdlib.h>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int MinTab(int T[100], int N);
int MinTabR(int T[100], int N, int i, int min);
int SomTab(int T[100], int N);
int SomTabR(int T[100], int N, int i,int somme);

void LectureTab(int T[100], int N);
void AfficheTab(int T[100], int N);

void main() {
	int N, m1, m2,s1,s2;
	int T[100];
	printf("Donner N = \t"); 
	scanf("%d",&N);
	printf("Remplissage du tableau : \n");
	LectureTab(T,N);
	printf("Affichage du tableau : \n");
	AfficheTab(T,N);
	printf("\nle min du tableau avec fonction MinTab : %d",MinTab(T,N));
	printf("\nle min du tableau avec fonction MinTabR : %d",MinTabR(T,N,1,T[0]));
	printf("\nla somme du tableau avec fonction SomTab : %d",SomTab(T,N));
	printf("\nla somme du tableau avec fonction SomTabR : %d",SomTabR(T,N,1,T[0]));

}

int MinTab(int T[100], int N){
	int i;
	int min=T[0];
    for (i=1;i<N;i++){
    	if ( T[i]<min) min= T[i];
    }
    
	return min;
}
int MinTabR(int T[100], int N, int i, int min){

	if(i<N){
		if(T[i]<min){
			min = T[i];
		}
		return MinTabR(T,N,i+1,min);
	}
	return min;
}

int SomTab(int T[100],int N){
	int i,somme=0;
	for(i=0;i<N;i++){
		somme= somme+T[i];
	}
	return somme;
}
int SomTabR(int T[100],int N, int i , int somme){
	
	if(i<N){
		return /*somme = somme +*/ SomTabR(T,N,i+1,somme+T[i]);
	}
	return somme;
}

void LectureTab(int T[100], int N){
	int i;
	while (i<N){
		printf("T[%d] = ",i);
		 scanf("%d",&T[i]);
		 i++;
	}
}

void AfficheTab(int T[100], int N){
	int i;
	for(i=0;i<N;i++){
		printf("T[%d] = %d\n",i,T[i]);
	}
}
