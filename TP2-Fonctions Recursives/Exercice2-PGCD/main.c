#include <stdlib.h>
#include <stdio.h>

int PGCD(int a,int b);

int PGCD(int a,int b){
	if (a%b == 0)
		return b;
	
	if (a>b)
		return PGCD(a%b,b);
	
	return PGCD(b,a);
}

int main (){
	int a,b, pgcd;
	printf(" Donnez la valeur de a et b \n");
	printf("a = ");
	scanf("%d",&a);
	printf(" b = ");
	scanf("%d",&b);
	pgcd = PGCD(a,b);
	
	printf("le pgcd de %d  et %d = %d\n", a,b,pgcd);
}
