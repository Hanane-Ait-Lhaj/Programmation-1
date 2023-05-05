#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "utils.h"
#include "triInsert.h"

int main(){
	int n;
	int T[50];
	srand( time( NULL ) );
	printf("Donner n "); scanf("%d",&n);
	/*----------Version Iterative-----------------------*/
	remplissageAlea(T,n);
	
	affichage(T,n," AVANT triInsert");
	
	triInsert(T,n);
	
	affichage(T,n,"APRES triInsert");
	
	/*----------Version Recursive------------------*/
	remplissageAlea(T,n);
	
	affichage(T,n,"AVANT triInsertR");
	
	triInsertR(T,n,1);
	
	affichage(T,n,"APRES triInsertR");
	/*---------------------------------*/
	system("PAUSE");
}
