#include <stdio.h>
#include <stdlib.h>
#define CMAX 10
int choix,x;
typedef struct sclient
{
	int code_cli;
	char Nom[CMAX];
	char prenom[CMAX];
}sclient;

typedef struct Date
{
	int jour;
	int mois;
	int anne;
}Date;

typedef struct scompte
{
	int code_cpt;
	int code_cli;
	struct Date d_compte;
}SCompte;

sclient clients[20];
scompte comptes[20];

void gerer_client(int a)
{
	switch(a)
	{
		case 1:{
			struct sclient client;
			FILE *file;
			
			printf("code client :");
			scanf("%d",&client.code_cli);
			printf("Nom: ");
			scanf("%s", &client.Nom);
			printf("prenom : ");
			scanf("%s", &client.prenom);
			
			file = fopen("client.txt","a");
			fwrite(&client, sizeof(client),1,file);
			if(fwrite !=0){
				printf("client ajouté avec succes");
			}
			
			fclose(file);
			break;
		}
	}
}

void sous_menu(int a)
{
	switch(a)
	{
		case 1:{
			printf("1-ajouter\n");
			printf("2-modifier\n");	
			printf("3-supprimer\n");
			printf("4-afficher\n");
		    printf("choisir votre option");
		    scanf("%d",&x);
		    gere_client(a);
		}
		case 2 :{
				printf("1-ajouter\n");
			printf("2-rechercher\n");	
			printf("3-supprimer\n");
			printf("4-afficher la liste\n");
		    printf("choisir votre option");
		    scanf("%d",&x);
		    gere_client();
		}
		case 3:{
			printf("1-retrait\n");
			printf("2-afficher le compte\n");
			printf("3-retour");
		    printf("choisir votre option");
		    scanf("%d",&x);
		    //gere_operation();
		}
	}
}

void menu()
{
	printf("1- Gestion des clients\n");
	printf("2- Gestion des comptes\n");
	printf("3- Gestion des operation\n");
	printf("4- Quitter le programme\n");
	printf("choisir le menu : ");
	scanf("%d",&choix);
	sous_menu(choix);
}
 int main()
{
	menu();
	return 0;
}
