#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "utils.h"
#include "TriSelect.h"

int main(){
	int n;
	int T[100];
	srand( time( NULL ) );
	printf("Donner n "); scanf("%d",&n);
	/*----------Version Iterative-----------------------*/
	remplissageAlea(T,n);
	
	affichage(T,n," AVANT triSelect");
	
	triSelect(T,n);
	
	affichage(T,n,"APRES triSelect");
	
	/*----------Version Recursive------------------*/
	remplissageAlea(T,n);
	
	affichage(T,n,"AVANT triSelectR");
	
	triSelectR(T,n,0);
	
	affichage(T,n,"APRES triSelectR");
	/*---------------------------------*/
	system("PAUSE");
}
