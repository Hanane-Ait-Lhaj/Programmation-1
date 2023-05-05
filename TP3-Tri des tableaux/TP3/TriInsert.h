/*--------------------------------*/
void triInsert(int T[] ,int n);
void triInsertR(int T[] ,int n, int i);
void passeInsert(int T[], int i);
int decaler(int T[], int x, int i);

/*-------------------------------*/
void triInsert(int T[], int n){
	int i;
	for(i=1;i<=n-1;i++){
		passeInsert(T,i);
	}
}
/*--------------------------------*/
void triInsertR(int T[] ,int n, int i){
	if(i<=n-1){
		passeInsert(T,i);
		triInsertR(T,n,i+1);
	}
	
	
}
/*--------------------------------*/
void passeInsert(int T[], int i){
	int x, j;			//{ 0, 1, 2}
	x = T[i];
	j=decaler(T,x,i);
	if(i!=j) T[j]=x;
	// ou bien if(i!=j+1) T[j+1]=x; dans ce cas utiliser la ligne commentée dans la fonction decaler en bas
}
/*--------------------------------*/
int decaler(int T[], int x, int i){
	int j;
	j=i-1;
	while((j>=0)&&(x<T[j]))	{
		T[j+1]=T[j];
		j--;
	}	
	return j+1;
	//ou bien return j; si vous choisissez d'utiliser la ligne commentée dans passeInsert en haut
}

//
////////////////////////////////
//void triInsert(int T[], int n){
//	int i;
//	for(i=1;i<=n-1;i++){
//		int x, j;
//		x = T[i];
//		j=decaler(T,x,i);
//		if(i!=j) T[j]=x;
//	}
//}



