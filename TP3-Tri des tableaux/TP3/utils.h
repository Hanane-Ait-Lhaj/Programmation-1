void remplissageAlea(int T[], int n);
void affichage( int T[], int n, char s[]);
/*---------------------------------*/
void remplissageAlea(int T[], int n){
	int i;
	
	for(i=0;i<n;i++){
		T[i]=rand()%1001;/* Tirer une valeur aléatoire entre 0 et 1000*/
	}
}
/*-----------------------------------------*/
void affichage( int T[], int n, char s[]){
int i;
printf("\nAffichage %s\n------------------------\n",s);
	for(i=0;i<n;i++){
		printf("T[%d] = %d \n", i,T[i]); 
	}
	printf("\n");
}

