/*--------------------------------*/
void triSelect(int T[] ,int n);
void triSelectR(int T[] ,int n, int i);
void passeSelect(int T[], int n, int i);
int getmin(int T[], int n, int i);
void echanger(int T[], int i, int j);
/*-----------------------------------------------*/
void echanger(int T[], int i, int j){
	int x;
	x=T[i]; T[i]=T[j]; T[j]=x;
}
/*-------------------------------*/
void triSelect(int T[], int n){
	int i;
	for(i=0;i<n-1;i++){
		passeSelect(T,n,i);
	}
}
/*--------------------------------*/
void triSelectR(int T[] ,int n, int i){
	if(i<n-1){
		passeSelect(T,n,i);
		triSelectR(T,n,i+1);
	}
	
	
}
/*--------------------------------*/
void passeSelect(int T[], int n, int i){
	int imin;
	imin=getmin(T,n,i);
	if(i!=imin) echanger(T,i,imin);
	// ou bien if(i!=j+1) T[j+1]=x; dans ce cas utiliser la ligne commentée dans la fonction decaler en bas
}
/*--------------------------------*/
int getmin(int T[], int n, int i){
	int imin,j;
	imin=i;
	j=i+1;
	while(j<n)	{
		if(T[j]<T[imin]) imin=j;
		j++;
	}	
	return imin;

}
