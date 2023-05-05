#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool EstPalindrome(char S[50]);
bool EstPalindromeR(char S[50], int i, int n);

bool EstPalindrome(char S[50]){
	int i = 0, n = strlen(S);
	while ((i<=n/2)&& (S[i] == S[n-i-1])){
		i++;
	}
	if(i<=n/2) return false;
	return true;
}

bool EstPalindromeR(char S[50], int i, int n){
	n=strlen(S);
	if((i<=n/2)&& (S[i] == S[n-i-1])){
		return EstPalindromeR(S,i+1,n);
	}
	if(i<=n/2) return false;
	return true;
}


int main() {
	int i,n;
	char S[50];
	n=strlen(S);
	printf("-------------------------------- \n-------Chaine Palindrome-------- \n--------------------------------\n");
	printf("Entrez une chaine de caractere: ");
	scanf("%49s",S);
	if (EstPalindrome(S)){
		printf("==>True");
	} else {
	printf ("==>False");
    }
    printf("\n\n-------Methode recursive-----");
	if (EstPalindromeR(S,0,n)){
		printf("\n==>True");
	} else {
	printf ("\n==>False");
    } 
	return 0;
}
