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
void afficheClientsFichier(char *nomFichier) {
    FILE *f = fopen(nomFichier, "r");
    if (f == NULL) {
        printf("Erreur de l'ouverture du fichier %s", nomFichier);
        exit(1);
    }
    Client c;
    while (fscanf(f, "%d %s ", &c.id, c.nom) != EOF) {
        printf("%d %s ", c.id, c.nom);
    }

    fclose(f);
}
int nombreClientsFichier(char *nomFichier) {
    FILE *f = fopen(nomFichier, "r");
    if (f == NULL) {
        printf("Erreur de l'ouverture du fichier %s", nomFichier);
        exit(1);
    }
    Client c;
    int nb = 0;
    while (fscanf(f, "%d %s ", &c.id, &c.nom) != EOF) {
        nb++;
    }
    fclose(f);
    return nb;
}
int main(){
return 0 ;
}

