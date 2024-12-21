#include <stdio.h>
int main() {
    int nb, i;
    int points;
    int n;
    int d,j;
    int E;
    int T[50];
    printf("Entrer le nombre d'etudiant : \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    	printf("Entrer le nombre d'emprunte realiser par l'etudiant numero %d : \n",i);
    	scanf("%d", &T[i]);
    	if (T[i] > 9 ) {
            points = 30;
            T[i]=points;
        } else if (T[i] >= 6 ) {
            points = 20;
            T[i]=points;
        } else if ( T[i] <= 3 ) {  
            points = T[i];
            T[i]=points;
		} else if (T[i] < 6 ) {
            points = 10;
            T[i]=points;
        } 
        //printf("le score de l'etudiant numero %d est : %d \n",i,points);  
	}
    printf("****************************************************\n");
    for(i=1;i<=n;i++){
    	printf("le score de l'etudiant num %d est : %d \n", i,T[i]);
	}
	// principe de tri par selection
	for(d=2;d<=n;d++){
		E=T[d-1];
		i=0;
		while(E>=T[i] && i<d-1){i++;}
			if(i>=d-1){
			 T[d-1]=E;}
			else {
				for(j=d-1;j>i;j--){
					T[j]=T[j-1];
				}
				T[i]=E;
			}
	}
	printf("le tri est terminer : \n");
	for (i=1;i<=n;i++){
		printf(" %d \n", T[i]);
	}
}

