#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define FILENAME_SIZE 1024
#define MAX_LINE 2048 //nombre max de ligne 
int main(){
	FILE *file;
	FILE *temp; //pour ouvrire la ligne a modifier
	FILE *temp1;
	FILE *temp2; 
	int p,i,n,ordre;
	int ea;
	char line[100]; //pour lire le fichier txt line par line
// pour taper les nv carac du livre
	struct livre{
		char titre[50];
		char isbn[50]; 
		char edition[50];
		char exmp[50];
		char nom[50];
		char prenom[50];
	};
	struct etu{
	char id[20];
	char nom[200];
	char prenn[20];
	char annee[20];
	char date[20];
};
    struct empr{
	char ide[20];
	char datedebut[20];
	char datefin[100];
	char dateret[100];
	char isbnl[100];
};
page1:
printf("**********************************************************************************\n");
printf("***        si vous etes admin cliquer 1                                        ***\n");
printf("***        si vous etes etudiant cliquer 2                                     ***\n");
printf("**********************************************************************************\n");
scanf("%d",&ea);
if(ea==1){
home :   
	printf("\n \n");
	printf("********************************************************************************** \n");
	printf("**    Pour gerer les livre cliquez  1                                           ** \n");
	printf("**    Pour gerer les abonnes 2                                                  ** \n");
	printf("**    Pour gerer les emprunts livres 3                                          ** \n");
	printf("**    Pour gerer ou voir les reservations 4                                     ** \n");
	printf("**    Pour chercher un livre cliquer 5                                          ** \n");
	printf("**    Pour claculer calculez et classer les points par insertion cliquez 6      ** \n");
	printf("**    Pour revenir cliquer 0                                                     **\n");
	printf("********************************************************************************** \n");
	scanf("%d", &ordre);
if(ordre==1){
home1 :
	printf("\n \n");
	printf("**************************************************************\n");
	printf("**         Pour ajouter un livre cliquer 1                  **\n");
	printf("**         Pour modifier un livre cliquer 2                 **\n");
	printf("**         Pour supprimer un livre cliquer 3                **\n");
	printf("**         Pour revenir cliquer 0                           **\n");
	printf("**************************************************************\n");
	scanf("%d", &p);
	if (p==1){
		printf("Entrer le nombre livre que vous voulez entrez\n");
		printf("\n");
		scanf("%d", &n);
		file = fopen("hamza.txt", "a");
		struct livre l[n];
		for(i=1 ; i <= n ; i++){
			printf("Entrer le titre du livre numero %d \n", i);
			scanf("%s",&l[i].titre);
			fprintf(file,"%d. ",i);
			fputs(" Titre: ", file);
			fputs(l[i].titre, file);
			fputs(" ", file);
			printf("Entrer l'ISBN du livre numero %d \n", i);
			scanf("%s",&l[i].isbn);
			fputs(" ISBN: ", file);
			fputs(l[i].isbn, file);
			fputs(" ", file);
			printf("Entrer l'edition du livre numero %d \n", i);
			scanf("%s",&l[i].edition);
			fputs(" Edition: ", file);
			fputs(l[i].edition, file);
			fputs(" ", file);
			printf("Entrer le nombre d'exemplaire du livre numero %d \n", i);
			scanf("%s",&l[i].exmp);
			fputs(" Le nombre d'exmp: ", file);
			fputs(l[i].exmp, file);
			fputs(" ", file);
			printf("Entrer le nom de l'auteur' %d \n", i);
			scanf("%s",&l[i].nom);
			fputs(" Le nom de l'auteur : ", file);
			fputs(l[i].nom, file);
			fputs(" ", file);
			printf("Entrer le prenom de l'auteur' %d \n", i);
			scanf("%s",&l[i].prenom);
			fputs(" Le prenom de l'auteur : ", file);
			fputs(l[i].prenom, file);
			fputs(" ", file);
			fputs("\n", file);
		}
		fclose(file);
		printf("\n \n");
		printf("Les livres ont ete ajoutes avec succes \n");
		printf("\n \n");
		goto home1; 
	}
	else if(p==2){
		struct livre l[n];
		printf("\n \n");
		printf("Les livres disponibles sont : \n");
		printf("\n");
		file=fopen("hamza.txt", "r");
		while (fgets(line, sizeof(line), file) != NULL) { // declarer flwl
        printf("%s", line);
        }
        fclose(file);
        printf("Entrer la ligne du livre a modifier :\n ");
        int numline; // pour savoir la ligne a modifier
        scanf(" %d", &numline);
        printf("Entrer les nouvelles caracteristique du livre. \n ");
        temp = fopen("temp.txt", "r+"); //le fichier temp
        printf("Entrer le nouveau titre du livre  \n" );
		scanf("%s",&l[numline].titre);
		fprintf(temp,"%d. ",numline);
		fputs(" Titre: ", temp);
		fputs(l[numline].titre, temp);
		fputs(" ", temp);
		printf("Entrer le nouveau ISBN du livre  \n" );
		scanf("%s",&l[numline].isbn);
		fputs(" ISBN: ", temp);
		fputs(l[numline].isbn, temp);
		fputs(" ", temp);
		printf("Entrer la nouvelle edition du livre numero \n" );
		scanf("%s",&l[numline].edition);
		fputs(" Edition: ", temp);
		fputs(l[numline].edition, temp);
		fputs(" ", temp);
		printf("Entrer le nouveau nombre d'exemplaire \n");
		scanf("%s",&l[numline].exmp);
		fputs(" Le nombre d'exmp: ", temp);
		fputs(l[numline].exmp, temp);
		fputs(" ", temp);
		printf("Entrer le nom de l'auteur \n");
		scanf("%s",&l[numline].nom);
		fputs(" Le nom de l'auteur: ", temp);
		fputs(l[numline].nom, file);
		fputs(" ", file);
		printf("Entrer le prenom de l'auteur \n");
		scanf("%s",&l[numline].prenom);
		fputs(" Le prenom de l'auteur: ", temp);
		fputs(l[numline].prenom, file);
		fputs(" ", temp);
		fclose(temp);
        char enre[1024]; //text dans temp prend buffer
        temp = fopen("temp.txt", "r");
        fgets(enre, 1024, temp);
        fclose(temp);
        FILE *file, *tempo;
   char hamza[FILENAME_SIZE] = "hamza";
   char tempo_hamza[FILENAME_SIZE];
   char buffer[MAX_LINE];
   char replace[MAX_LINE];
   strcpy(tempo_hamza, "temp____");
   strcat(tempo_hamza, hamza);
   fflush(stdin);
   file = fopen("hamza.txt", "r");
   tempo = fopen("tempo_hamza.txt", "w");
   bool keep_reading = true;
   int current_line = 1;
   do 
   {
    fgets(buffer, MAX_LINE, file);
    if (feof(file)) keep_reading = false;
    else if (current_line == numline){
    	fputs(enre, tempo);
    	fputs("\n", tempo);
	}
    else fputs(buffer, tempo);
    current_line++;
    } while (keep_reading);
    fclose(file);
    fclose(tempo);
    remove("hamza.txt");
    rename("tempo_hamza.txt", "hamza.txt");
    printf("Modification terminer les nouveaux les coordonnées sont : \n %s",enre);
        goto home1;
} 
// DEBUT SUUUUUUPPPPPPPPPPREEEEEEESSSSIONNNNNNNNNNNN
    else if(p==3){
    	printf("\n \n");
    	printf("Les livres disponibles sont : \n");
    	printf("\n");
		file=fopen("hamza.txt", "r");
		while (fgets(line, sizeof(line), file) != NULL) { // declarer flwl
        printf("%s", line);
        }
        fclose(file);
    	FILE *file, *tempo;

  char hamza[FILENAME_SIZE] = "hamza";
  char tempo_hamza[FILENAME_SIZE];

 
  char buffer[MAX_LINE];
  int delete_line = 0;
  strcpy(tempo_hamza, "temp____");
  strcat(tempo_hamza, hamza);
  
 
  printf("Entrer la ligne du livre a supprimer ");
  scanf("%d", &delete_line);
  
  
  file = fopen("hamza.txt", "r");
  tempo = fopen("tempo_hamza.txt", "w");

  bool keep_reading = true;
  int current_line = 1;
  do 
  {
    fgets(buffer, MAX_LINE, file);
   

    if (feof(file)) keep_reading = false;
    else if (current_line != delete_line)
      fputs(buffer, tempo);
    
    current_line++;
  
  } while (keep_reading);
  fclose(file);
  fclose(tempo);
  remove("hamza.txt");
  rename("tempo_hamza.txt", "hamza.txt");
  printf("La supression a etait faite avec succes ");
  goto home1;
	}
	else if(p==0){
		goto home;
	}
}
else if(ordre==2){
	home2 :
	printf("\n \n");
	printf("**************************************************************\n");
	printf("**         Pour ajouter un etudiant cliquer 1               **\n");
	printf("**         Pour modifier un etudiant cliquer 2              **\n");
	printf("**         Pour supprimer un etudiant cliquer 3             **\n");
	printf("**         Pour revenir cliquer 0                           **\n");
	printf("**************************************************************\n");
	scanf("%d", &p);
	if (p==1){
		printf("Entrer le nombre d'etudiant a ajouter : \n");
		printf("\n");
		scanf("%d", &n);
		file = fopen("inetude.txt", "w");
		struct etu e[n];
		for(i=1 ; i <= n ; i++){
			printf("Entrer le id de l'etudiant numero %d \n", i);
			scanf("%s",&e[i].id);
			fprintf(file,"%d. ",i);
			fputs(" ID: ", file);
			fputs(e[i].id, file);
			fputs(" ", file);
			printf("Entrer le nom de l'etudiant numero %d \n", i);
			scanf("%s",&e[i].nom);
			fputs(" Le nom: ", file);
			fputs(e[i].nom, file);
			fputs(" ", file);
			printf("Entrer le prenom de l'etudiant numero %d \n", i);
			scanf("%s",&e[i].prenn);
			fputs(" Le prenom: ", file);
			fputs(e[i].prenn, file);
			fputs(" ", file);
			printf("Entrer l'annee d'etude de l'etudiant numero %d \n", i);
			scanf("%s",&e[i].annee);
			fputs(" l'annee d'etude: ", file);
			fputs(e[i].annee, file);
			fputs(" ", file);
			printf("Entrer la date de naissance %d \n", i);
			scanf("%s",&e[i].date);
			fputs(" la date de naissance: ", file);
			fputs(e[i].date, file);
			fputs(" ", file);
			fputs("\n", file);
		printf("l'ajout d'etudiant terminer.\n");
		}
		fclose(file);
		goto home2; 
	}
	else if(p==2){
		struct etu e[n];
		printf("Les etudiants disponibles sont : \n");
		printf("\n");
		file=fopen("inetude.txt", "r");
		char line[100];
		while (fgets(line, sizeof(line), file) != NULL) { // declarer flwl
        printf("%s", line);
        }
        fclose(file);
        int numline;
        printf("Entrer la ligne des etudiant a modifier :\n ");
        scanf("%d", &numline);
        printf("Entrer les nouvelles cordo d'etudiant. \n ");
        temp1 = fopen("temp1.txt", "r+"); //le fichier temp
        fprintf(temp1,"%d. ",numline);
        printf("Entrer le id de l'etudiant numero %d \n", numline);
		scanf("%s",&e[i].id);
		fputs(" ID: ", file);
		fputs(e[i].id, temp1);
		fputs(" ", temp1);
		printf("Entrer le nom de l'etudiant numero %d \n", numline);
		scanf("%s",&e[i].nom);
		fputs(" Le nom: ", temp1);
		fputs(e[i].nom, temp1);
		fputs(" ", temp1);
		printf("Entrer le prenom de l'etudiant numero %d \n", numline);
		scanf("%s",&e[i].prenn);
		fputs(" Le prenom: ", temp1);
		fputs(e[i].prenn, temp1);
		fputs(" ", file);
		printf("Entrer l'annee d'etude de l'etudiant numero %d \n", numline);
		scanf("%s",&e[i].annee);
		fputs(" l'annee d'etude: ", temp1);
		fputs(e[i].annee, temp1);
		fputs(" ", temp1);
		printf("Entrer la date de naissance' %d \n", numline);
		scanf("%s",&e[i].date);
		fputs(" la date de naissance: ", temp1);
		fputs(e[i].date, temp1);
		fputs(" ", temp1);
		fclose(temp1);
		char nv[1024];
		temp1 = fopen("temp1.txt", "r");
		fgets(nv, 1024, temp1);
		fclose(temp1);
		FILE *file, *tempo1;
		char inetude[FILENAME_SIZE] = "inetude.";
		char tempo1_inetude[FILENAME_SIZE];
		char buffer[MAX_LINE];
        char replace[MAX_LINE];
        strcpy(tempo1_inetude, "temp____");
        strcat(tempo1_inetude, inetude);
        fflush(stdin);
        file = fopen("inetude.txt", "r");
        tempo1 = fopen("tempo1_inetude.txt", "w");
        bool keep_reading = true;
   int current_line = 1;
   do 
   {
    fgets(buffer, MAX_LINE, file);
    if (feof(file)) keep_reading = false;
    else if (current_line == numline){
    	fputs(nv, tempo1);
    	fputs("\n", tempo1);
	}
	else fputs(buffer, tempo1);
    current_line++;
    } while (keep_reading);
    fclose(file);
    fclose(tempo1);
    remove("inetude.txt");
    rename("tempo1_inetude.txt", "inetude.txt");
    printf("Modification terminer les nouveaux les coordonnées sont : \n %s",nv);
    goto home2;
	}
	else if(p==3){  // debut suuuupppp
		printf("La liste des etudiants est : \n");
		printf("\n");
		file=fopen("inetude.txt", "r");
		char line[100];
		while (fgets(line, sizeof(line), file) != NULL) { 
        printf("%s", line);
        }
        fclose(file);
        FILE *file, *tempa;
        char inetude[FILENAME_SIZE] = "inetude";
        char tempa_inetude[FILENAME_SIZE];
        char buffer[MAX_LINE];
        int delete_line = 0;
        strcpy(tempa_inetude, "temp____");
        strcat(tempa_inetude, inetude);
        printf("Entrer la ligne du livre a supprimer ");
        scanf("%d", &delete_line);
        file = fopen("inetude.txt", "r");
        tempa = fopen("tempa_inetude.txt", "w");
        bool keep_reading = true;
        int current_line = 1;
        do 
        {
           fgets(buffer, MAX_LINE, file);
            if (feof(file)) keep_reading = false;
             else if (current_line != delete_line)
            fputs(buffer, tempa);
    
            current_line++;
  
  } while (keep_reading);
        fclose(file);
        fclose(tempa);
        remove("inetude.txt");
        rename("tempa_inetude.txt", "inetude.txt");
        printf("La supression a etait faite avec succes ");
        goto home2;
	}
	else if(p==0){
		goto home;
	}
}
else if(ordre==3){
home3 :
	printf("*************************************************************\n");
	printf("**       Pour ajouter une emprunte cliquer 1               **\n");
	printf("**       pour modifier une emprunte cliquer 2              **\n");
	printf("**       pour supprimer une emprunte cliquer 3             **\n");
	printf("**       pour revenir cliquer sur 0                        **\n");
	printf("*************************************************************\n");
	scanf("%d", &p);
	if(p==1){
		printf("les lives disponibles sont : \n");
		printf("\n");
		file = fopen("hamza.txt", "r");
		while (fgets(line, sizeof(line), file) != NULL) { // declarer flwl
        printf("%s", line);
        }
        fclose(file);
		printf("Entrer le numero des emprunts a ajouter : \n");
		scanf("%d", &n);
		file = fopen("emp.txt", "a");
		struct empr e[n];
		for(i=1 ; i <= n ; i++){
			printf("Entrer l'ID de l'etudiant numero %d \n", i);
			scanf("%s",&e[i].ide);
			fprintf(file,"%d. ",i);
			fputs(" ID d'etudiant: ", file);
			fputs(e[i].ide, file);
			fputs(" ", file);
			printf("Entrer la date debut jj/mm/aaaa  \n" );
			scanf("%s",&e[i].datedebut);
			fputs(" Date debut: ", file);
			fputs(e[i].datedebut, file);
			fputs(" ", file);
			printf("Entrer la date de fin jj/mm/aaaa  \n" );
			scanf("%s",&e[i].datefin);
			fputs(" Date de fin: ", file);
			fputs(e[i].datefin, file);
			fputs(" ", file);
			printf("Entrer la date de retour jj/mm/aaaa en cas de non existance de la date retours entre 0000 \n" );
			scanf("%s",&e[i].dateret);
			fputs(" Date de retour: ", file);
			fputs(e[i].dateret, file);
			fputs(" ", file);
			fputs("\n", file);
		}
		fclose(file);
		printf("ajout avec succeee \n");
		goto home3;
	}
	else if(p==2){
		struct empr e[n];
		printf("Les emprunts active sont : \n");
		printf("\n");
		file=fopen("emp.txt", "r");
		char line[100];
		while (fgets(line, sizeof(line), file) != NULL) { // declarer flwl
        printf("%s", line);
        }
        fclose(file);
        int numline;
        printf("Entrer le numero de la ligne a modifier :\n ");
        scanf("%d", &numline);
        printf("Entrer les nouvelles cordo. \n ");
        temp2 = fopen("empt1.txt", "r+");
        fprintf(temp2,"%d. ",numline);
        printf("Entrer le nv ID de l'etudiant numero \n");
		scanf("%s",&e[numline].ide);
		fputs(" ID d'etudiant: ", temp2);
		fputs(e[numline].ide, temp2);
		fputs(" ", temp2);
		printf("Entrer la nouvelle date debut jj/mm/aaaa  \n" );
		scanf("%s",&e[numline].datedebut);
		fputs(" Date debut: ", temp2);
		fputs(e[i].datedebut, temp2);
		fputs(" ", temp2);
		printf("Entrer la nouvelle date de fin jj/mm/aaaa  \n" );
		scanf("%s",&e[numline].datefin);
		fputs(" Date de fin: ", temp2);
		fputs(e[numline].datefin, temp2);
		fputs(" ", temp2);
		printf("Entrer la nouvelle date de retour jj/mm/aaaa en cas de non existance de la date retours entre 0000 \n" );
		scanf("%s",&e[numline].dateret);
		fputs(" Date de retour: ", temp2);
		fputs(e[numline].dateret, temp2);
		fputs(" ", temp2);
		fclose(temp2);
		char nv[1024];
		temp2 = fopen("empt1.txt", "r"); // affecter toute les valeurs a NV
		fgets(nv, 1024, temp2);
		fclose(temp2);
		FILE *file, *temps;
		char empt[FILENAME_SIZE] = "empt";
		char tempo1_empt[FILENAME_SIZE];
		char buffer[MAX_LINE];
        char replace[MAX_LINE];
        strcpy(tempo1_empt, "temp____");
        strcat(tempo1_empt, empt);
        fflush(stdin);
        file = fopen("empt.txt", "r");
        temps = fopen("tempo1_empt.txt", "w");
        bool keep_reading = true;
        int current_line = 1;
   do 
   {
    fgets(buffer, MAX_LINE, file);
    if (feof(file)) keep_reading = false;
    else if (current_line == numline){
    	fputs(nv, temps);
    	fputs("\n", temps);
	}
	else fputs(buffer, temps);
    current_line++;
    } while (keep_reading);
    fclose(file);
    fclose(temps);
    remove("empt.txt");
    rename("tempo1_empt.txt", "empt.txt");
    printf("Modification terminer les nouveaux les coordonnées sont : \n %s",nv);
    goto home3; 
	}
	else if(p==3){
		printf("La liste des emprunts est : \n");
		file=fopen("emp.txt", "r");
		char line[100];
		while (fgets(line, sizeof(line), file) != NULL) { 
        printf("%s", line);
        }
         fclose(file);
        FILE *file, *temps;
        char emp[FILENAME_SIZE] = "emp";
        char temps_emp[FILENAME_SIZE];
        char buffer[MAX_LINE];
        int delete_line = 0;
        strcpy(temps_emp, "temp____");
        strcat(temps_emp, emp);
        printf("Entrer la ligne a supprimer ");
        scanf("%d", &delete_line);
        file = fopen("emp.txt", "r");
        temps = fopen("temps_emp.txt", "w");
        bool keep_reading = true;
        int current_line = 1;
        do 
        {
           fgets(buffer, MAX_LINE, file);
            if (feof(file)) keep_reading = false;
             else if (current_line != delete_line)
            fputs(buffer, temps);
    
            current_line++;
  
  } while (keep_reading);
        fclose(file);
        fclose(temps);
        remove("emp.txt");
        rename("temps_emp.txt", "emp.txt");
        printf("La supression a etait faite avec succes \n");
		goto home3;
	}
	else if(p==0){
		goto home;
	}
}
else if(ordre==4){
	home4:
    printf(" \n \n");
    printf("**************************************************************\n");
	printf("**           Pour faire une reservation cliquez 1           **\n");
	printf("**           Pour consulter les reservation cliquez 2       **\n");
	printf("**           Pour revenir cliquez sur 0                     **\n");
	printf("**************************************************************\n");
	scanf("%d",&p);
	if(p==1){
	file=fopen("reservation.txt", "a");
	char tt[20];
	char dd[20];
	printf("ecrire votre ID : ");     
	scanf("%s", &dd);
	fprintf(file, "L'etudiant avec ID: %s", dd);
	fputs(" ",file);
	printf("ecrire le titre de livre a reserver : ");
	scanf("%s", &tt);
	fprintf(file, "a reserver le titre : %s\n", tt);
	fclose(file);
	goto home4;
	}	
	else if(p==2){
		printf("les reservation demander sont : ");
		file=fopen("reservation.txt", "r");
		char line[100];
		while (fgets(line, sizeof(line), file) != NULL) { 
        printf("%s", line);
        }
        fclose(file);
        goto home4;
	}
	else if(p==0){
		goto home;
	}
}
else if(ordre==5){
	char liine[256];
    char tiitre[256];
    char *string=tiitre;
    printf("**************************************************************\n");
    printf("**   Entrer le titre du livre a chercher :                    \n");
    scanf("%s", tiitre);
    printf("**************************************************************\n");
    FILE *file = fopen("hamza.txt", "r");
  
    while (fgets(liine, sizeof(liine), file)) {
        if (strstr(liine, string)) {
            printf("les caracteristiques du livre sont : \n");
            printf("%s", liine);
        }
    }
    fclose(file);
    goto home;
}
else if(ordre==6){
    int points,m,d,j,E,nb;
    int T[50];
    printf("Entrer le nombre d'etudiant : \n");
    scanf("%d",&m);
    for(i=1;i<=m;i++){
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
    for(i=1;i<=m;i++){
    	printf("le score de l'etudiant num %d est : %d \n", i,T[i]);
	}
	// principe de tri par selection
	for(d=2;d<=m;d++){
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
	for (i=1;i<=m;i++){
		printf(" %d \n", T[i]);
	}
	goto home;
}
else if(ordre==0){
	goto page1;
}
}
else if(ea==2){
	page:
    printf("**********************************************************************************\n");
	printf("**     pour voir les livre dispo cliquer 1                                        \n");
	printf("**     pour faire une reservation cliquer 2                                       \n");
	printf("**     pour chercher un livre cliquez  3                                          \n");
	printf("**     pour revenir cliquez  0                                                    \n");
	printf("**********************************************************************************\n");
	int vv;
	scanf("%d", &vv);
	if(vv==1){
		printf("Les livres disponibles sont :\n");
		file=fopen("hamza.txt", "r");
		while (fgets(line, sizeof(line), file) != NULL) { // declarer flwl
        printf("%s", line);
        }
        fclose(file);
        printf("**************************************************************\n");
        goto page;
	}
	else if(vv==2){
		file=fopen("reservation.txt", "a");
	char tt[20];
	char dd[20];
	printf("ecrire votre ID : \n");     
	scanf("%s", &dd);
	fprintf(file, "L'etudiant avec ID: %s", dd);
	fputs(" ",file);
	printf("ecrire le titre de livre a reserver : \n");
	scanf("%s", &tt);
	fprintf(file, "a reserver le titre : %s\n", tt);
	fclose(file);
	printf("reservation faite avec succes \n");
	goto page;
	}
	else if(vv==0){
		goto page1;
	}
	else if(vv==3){
		char liine[256];
    char tiitre[256];
    char *string=tiitre;
    printf("**************************************************************\n");
    printf("**   Entrer le titre du livre a chercher :                    \n");
    scanf("%s", tiitre);
    printf("**************************************************************\n");
    FILE *file = fopen("hamza.txt", "r");
  
    while (fgets(liine, sizeof(liine), file)) {
        if (strstr(liine, string)) {
            printf("les caracteristiques du livre sont : \n");
            printf("%s", liine);
        }
    }
    fclose(file);
    goto page;
	}
}
}

