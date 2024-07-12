#include <stdio.h>
#include <stdlib.h>

void optionAvecNombre(FILE *fichier,char *chaine,char *file,int nbr,int n)
{
	
	int i;
	int j=0;
	int a;
	int l=0;
	int b; 
	fichier=fopen(file,"r");
	
	if(fichier == NULL)
	{
		printf("Erreur d'ouverture du fichier\n");
		exit(1);
	}
	{
		for(i=0 ; i<nbr;i++)
		{
			fscanf(fichier,"%c",&chaine[i]);
		}
		for(i=0 ; i<nbr; i++)
		{
			if(chaine[i] == '\n')
			{
				j++;
			}
		}
		
		for (a=0; a<nbr; a++)
		{
			if(chaine[a] == '\n')
			{
				l++;
			}
			if(j-l==n) 
				break;
		}	
		
		for(b=a ; b<nbr; b++)
		{
			printf("%c",chaine[b]);
		}
			
	}
		fclose(fichier);
	}
	
int compteur(char *file)
{
	int nbr=0;
	FILE *fichier=fopen(file,"r");
	while(fgetc(fichier) != EOF)
	{
		nbr++;
	}
	fclose(fichier);
	return nbr;
}
char *allocation(int nbr)
{
	char *tab=NULL;
	tab=(char*)malloc(nbr*sizeof(char));
	return (tab);
}
int argument(char *arg)
{
	int n;
	n=atoi(arg);
	return n;
}
void optionVerbose(char argv[2])
{
	printf(" ==> %d <== \n",argv[2]);
	
}
void afficherTout(FILE *fichier,char *file,char *chaine,int nbr)
{
	int i;
	fichier=fopen(file,"r");
	if(fichier == NULL)
	{
		printf("Erreur d'ouverture du fichier\n");
		exit(1);
	}
	else
	{
		for(i=0 ; i<=nbr;i++)
		{
			fscanf(fichier,"%c",&chaine[i]);
		}
		for(i=0 ; i<=nbr; i++)
		{
			printf("%c",chaine[i]);
		}
	}
}
	
	
	

