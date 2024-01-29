#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100

int nbr;
int choix;
int *p;
int i;

typedef struct {
	int annee;
	int mois;
	int jours;
}Date;
	
typedef struct {
	char description[100];
	Date date;
	int priorite;
}Tache;




void ajouter(int *p){
	Tache T[MAX];
	printf("Entrer les informations du tache \n");
	printf("Donner la description:\n");
	scanf("%s", &T[i].description);
	printf("Donner la date:\n");
	scanf("%d-%d-%d", &T[i].date.annee, &T[i].date.mois, &T[i].date.jours);
	printf("Donner la priorite:\n");
	scanf("%s", &T[i].priorite);
	(*p)++;
}

void afficher(int nbr){
	Tache T[MAX];
	for(int i;i<nbr;i++){
		printf("La Tache %d\n", i+i);
		printf("la description :%s\n", T[i].description);
		printf("la date: %d-%d-%d\n", T[i].date.jours, T[i].date.mois, T[i].date.annee);
		printf("la priorite: %d\n", T[i].priorite);
	}
}

void modifier(){
	Tache T[MAX];
	int numTache;
	int trouve = 0;
	
	printf("Entrer le numero de la tache à modifier: ");
	scanf("%d", &numTache);
	
		if(numTache >= 1 && numTache <= nbr){
			
			numTache--;
			
    		printf("Entrer la modification pour la tache %d\n", numTache+1);
    		printf("Nouvelle description : ");
    		scanf("%s", T[numTache].description);
    		printf("Nouvelle date : ");
    		scanf("%d", &T[i].date);
    		printf("Nouvelle priorite : ");
    		scanf("%d", &T[i].priorite);
    		printf("Tache modifiee avec succes!\n");
    		trouve=1;
			}
		else 
		printf("Aucune tache est trouve.\n");
	}

int main (){
	//La Déclaration des variables
	Tache T[MAX];
	int choix;
	p=&nbr;
	
	do{
		printf("\n\n Le menu principale\n\n");
		printf("1.  Ajouter une Tache\n");
		printf("2.  Afficher la Liste des Taches\n");
		printf("3.  Modifier une Tache\n");
		printf("4.  Supprimer une Tache\n");
		printf("5.  Ordonner les Taches\n");
		printf("6.  Filtrer les Taches\n");
		
		do{
			printf("Entrer votre choix:\n");
			scanf("%d", &choix);
			if(choix>8 || choix<1)
			printf("Votre choix doit compris entre 1 et 8\n");
		}while(choix>8 || choix<1);
		
		switch(choix){
			case 1:
				ajouter(p);
				printf("Tache %d", nbr);
				break;
				
			case 2:
				afficher(nbr);
				
				break;
			case 3:
                modifier();
				break;
			case 4:
				printf("Donner l indice de tache:");
				break;
			
			case 5:
				break;
			
			case 6:
				break;
			
			default:
				break;
			}
				
	}while(choix=!0); 
		
	return 0;
}
