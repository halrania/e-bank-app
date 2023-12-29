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

int comparer(cost void* a , const void* b ){
	const sclient*c1=a;
	const sclient*c2=b;
	return strcmp(c1->NOM,c2->Nom);
}

typedef struct Date
{
	int jour;
	int mois;
	int annee;
}Date;

typedef struct scompte
{
	int code_cpt;
	int code_cli;
	int somme;
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
		case 4:{
			FILE*file;
			struct sclient client;
			file=fopen("client.txt","r");
			int nbclients = 0;
			while(fread(&client, sizeof(struct sclient),1,file)){
				clients[newclients]=client;
				nbclients++;
			}
			fclose(file);
			qsort(clients,nbclients,sizeof(sclient),comparer)
			
			for (int c=0; c<nbclients ;c++){
				printf("\ncode client:%d,client[c].coe_cli");
				printf("\nNom: %s | %s,clients[c].Nom,clients[c].prenom");
				printf("\n");
			}
			break;
		}
		case 2:{
			struct sclient client;
			struct sclient newclient;
			
			printf("code client a modifier: ");
			scanf("%d", &newclient.code_cli);
			printf("nv nom : ");
			scanf("%s",&nvclient.Nom);
			printf("nvprenom : ");
			scanf("%s",&newclient.prenom);
			
			file=fopen("client.txt","r");
			int nbclients=0;
			while(fread(&client, sizeof(struct sclient),1,file)){
				clients[newclients]=client;
				nbclients++;
			}
			fclose(file);
			remove("client.txt");
			FILE *newf;
			newf= fopen("new.txt","a");
			for(int i=0; i<nbclients;i++)
			{
				if(clients[i].code_cli == newclient.code_cli){
					fwrite(&newclient, sizeof(clients[i]),1 newf);
				}
				else{
					fwrite(&clients[i], sizeof(clients[i]),1,newf);
				}	
			}
			fclose(newf);
			rename("newv.txt","client.txt")
			
			
			break;
		}
		case 3:{
			struct sclient client;	
			FILE * file;
			int code;
					
			printf("code client a supprimer: ");
			scanf("%d", &code);
		
			file=fopen("client.txt","r");
			int nbclients=0;
			
			while(fread(&client, sizeof(struct sclient),1,file)){
				clients[newclients]=client;
				nbclients++;
			}
			fclose(file);
			remove("client.txt");
			
			FILE *newf;
			newf= fopen("new.txt","a");
			for(int i=0; i<nbclients;i++)
			{
				if(clients[i].code_cli != code){
					
					fwrite(&newclient, sizeof(clients[i]),1 newf);
				}
				else{
					fwrite(&clients[i], sizeof(clients[i]),1,newf);
				}	
			}
			fclose(newf);
			rename("newv.txt","client.txt")		
			break;
		}		
	}
}
void gerer_compte(int a){
	switch(a){
		case 1:{
			struct scompte compte;
			FILE *file;
			
			printf("code compte : ");
			scanf("%d",&compte.code_cpt);
			printf("code client : ");
			scanf("%d",&compte.code_cli);
			printf("jour : ");
			scanf("%d",&compte.d_compte.jour);
			printf("mois : ");
			scanf("%d",&compte.d_compte.mois);
			printf("annee : ");
			scanf("%d",&compte.d_compte.annee)
			printf("somme: ");
			scanf("%d",&compte.somme);
			
			file=fopen("compte.txt","a");
			fwrite(&compte, sizeof(compte),1,file);
			
			if(fwrite !=0){
				printf("compte ajoute avec succes");
			}
			else{
				printf("error");
			}
			break;
		}
		case 2:{
			struct scompte compte;			
			int code ;
			FILE* file;
			printf("code compte s'il vous plait:");
			scanf("%d",&code);
			
			file=fopen("compte.txt","r");
			int found=0;
			while(fread(&compte, sizeof(struct scompte),1,file) && found ==0){
				if(compte.code_cpt==code){
					printf("\n code compte :%d",compte[c].code_cpt);
				    printf("\n code client : %d", compte.code_cli);
				    printf("\n date creation %d/%d/%d/",compte.d_compte.jour,compte.d_compte.mois,compte.d_compte.annee);
				    printf("\n somme %d", compte.somme);
				    found = 1;
			    }
			
			}
			if(found==0){
				printf("code inexistant \n")
			}
			fclose(file);			
			break;
		}
		case 3:{
			struct scompte compte;			
			FILE* file;
			
			file=fopen("compte.txt","r");
			
			while(fread(&compte, sizeof(struct scompte),1,file) ){
				if(compte.code_cpt==code){
					printf("\n code compte :%d",compte[c].code_cpt);
				    printf("\n code client : %d", compte.code_cli);
				    printf("\n date creation %d/%d/%d/",compte.d_compte.jour,compte.d_compte.mois,compte.d_compte.annee);
				    printf("\n____________________________");		
					printf("\n somme %d", compte.somme);	
			}
			fclose(file);	
			break;
		}	
		case 4:{
			struct scompte compte;	
			FILE * file;
			int code;
					
			printf("code compte a supprimer: ");
			scanf("%d", &code);
		
			file=fopen("compte.txt","r");
			int nbcompte=0;
			
			while(fread(&compte, sizeof(struct scompte),1,file)){
				comptes[nbcompte] = compte;
				nbcompte++;
			}
			fclose(file);
			remove("compte.txt");
			
			FILE *newf;
			newf= fopen("new.txt","a");
			for(int i=0; i<nbcompte;i++)
			{
				if(compte[i].code_cpt != code){					
					fwrite(&comptes[i], sizeof(comptes[i]),1 newf);
				}
			}
			fclose(newf);
			rename("newv.txt","compte.txt")			
			break;
		}
		
	}
}
void gerer_operation(int a){
	switch(a){
		case 1:{
			struct scompte compte;	
			FILE * file;
			int code , montant;
					
			printf("code compte ");
			scanf("%d", &code);
			printf("saisie votre montant: ");
			scanf("%d",&montant);
			
			file=fopen("compte.txt","r");
			
			int nbcompte=0;
			
			while(fread(&compte, sizeof(struct scompte),1,file)){
				comptes[nbcompte] = compte;
				nbcompte++;
			}
			
			fclose(file);
			remove("compte.txt");
			
			FILE *newf;
			newf= fopen("new.txt","a");
			
			for(int i=0 ; i<nbcompte ; i++)
			{
				if(comptes[i].code_cpt == code){
					comptes[i].somme = comptes[i]-montant;				
					fwrite(&comptes[i], sizeof(comptes[i]),1 newf);
				}
			}
			fclose(newf);
			rename("newv.txt","compte.txt")	
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
		    gere_client(x);
		}
		case 2 :{
			printf("1-ajouter\n");
			printf("2-rechercher\n");	
			printf("3-supprimer\n");
			printf("4-afficher la liste\n");
		    printf("choisir votre option");
		    scanf("%d",&x);
		    gere_compte(x);
		}
		case 3:{
			printf("1-retrait\n");
			printf("2-afficher le compte\n");
			printf("3-retour");
		    printf("choisir votre option");
		    scanf("%d",&x);
		    gere_operation(x);
		}
	}
}

void menu()
{
	printf("1- clients managment\n");
	printf("2- accounts managment\n");
	printf("3- operation managment\n");
	printf("4- exit programme\n");
	printf("choisir le menu : ");
	scanf("%d",&choix);
	sous_menu(choix);
}
 int main()
{
	menu();
	return 0;
}
