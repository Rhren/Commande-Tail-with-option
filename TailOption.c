#include <stdio.h>
#include <stdlib.h>
#include "option.h"
#include "option.c"
#include <string.h>
int main(int argc,char *argv[])
{
	int nbr;
	int n;
	FILE *fichier=NULL;
	char *chaine=NULL;
	
	if(strcmp(argv[1],"-n") == 0 )
	{
		nbr=compteur(argv[3]);
		n=argument(argv[2]);
		chaine=allocation(nbr);
		optionAvecNombre(fichier,chaine,argv[3],nbr,n);
	}
	if(strcmp(argv[1],"-v") == 0 || strcmp(argv[1],"--verbose") == 0)
	{
		optionVerbose(argv[2]);
		nbr=compteur(argv[2]);
		chaine=allocation(nbr);
		optionAvecNombre(fichier,chaine,argv[2],nbr,10);
	}
	if(strcmp(argv[1],"-z") == 0 )
	{
		nbr=compteur(argv[2]);
		chaine=allocation(nbr);
		afficherTout(fichier,argv[2],chaine,nbr);
	}
	
	
	
	free(chaine);
	return 0;
}








