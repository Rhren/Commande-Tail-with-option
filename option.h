#include <stdio.h>

int compteur (char *file);
void optionAvecNombre(FILE *fichier,char *chaine,char *file,int nbr,int n);
char *allocation(int nbr);
int argument(char *arg);
void optionVerbose(char argv[2]);
void afficherTout(FILE *fichier,char *file,char *chaine,int nbr);
