#include <stdio.h>
#include <stdlib.h>
#define chaine 10

typedef struct {
                int id;
                char nom[chaine];
                } Client;

void ajouteClientFichier(Client c, char *nomFichier) {
    FILE *f = fopen(nomFichier, "a");
    if (f == NULL) {
        printf("Erreur de l'ouverture du fichier %s", nomFichier);
        exit(1);
    }
    fprintf(f, "%d %s ", c.id, c.nom);
    fclose(f);
}

int main(){
return 0 ;
}

