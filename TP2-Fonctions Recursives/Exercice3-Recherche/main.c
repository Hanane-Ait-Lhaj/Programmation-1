#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool ExisteCar(char S[50], char c);
bool ExisteCarR(char S[50], char c,int i);
int main() {
	char C, S[50];
	printf("Entrez une chaine de caracteres :");
	scanf("%49s",S);
	printf("Entrer une caractere :" );
	scanf("%1s",&C);
//	printf("%d",ExisteCar(S,c)); //si vrai return 1
	if(ExisteCar(S,C)){
		printf("\n ==>le caractere existe dans la chaine");
	}else{
			printf("\n ==>le caractere n'existe pas dans la chaine");
	}
	printf("\n\n\t-------la methode recursive----------");
	if(ExisteCarR(S,C,0)){
		printf("\n ==>le caractere existe dans la chaine");
	}else{
			printf("\n ==>le caractere n'existe pas dans la chaine");
	}
	return 0;
}
bool ExisteCar(char S[50], char C){
	int i=0;
	while(i<strlen(S)&&S[i]!=C){
		i++;
	}
	if(i<strlen(S)) return true;
	else return false;
}
bool ExisteCarR(char S[50], char c, int i){
	
	if( i<strlen(S) && S[i]!=c ) {
		printf("\nle i = %d",i);
		return (ExisteCarR(S,c,i+1));
	}
	if(i<strlen(S)) return true;
	return false;
}
