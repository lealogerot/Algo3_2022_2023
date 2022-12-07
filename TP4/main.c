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
void appartientClientFichier(char *nomClient, char *nomFichier) {
    FILE *f = fopen(nomFichier, "r");
    if (f == NULL) {
        printf("Erreur d'ouverture du fichier %s", nomFichier);
        exit(1);
    }
    Client c;
    int trouve = 0;
    while (fscanf(f, "%d %s ", &c.id, c.nom) != EOF) {
        if (strcmp(c.nom, nomClient) == 0) {
            printf("%d %s ", c.id, c.nom);
            trouve = 1;
        }
    }
    if (trouve == 0) {
        printf("Client non répertorié");
    }
    fclose(f);
}
int main(){
    Client c;
    printf("id du client : ");
    scanf("%d", &c.id);
    printf("nom du client : ");
    scanf("%s", c.nom);
    ajouteClientFichier(c, "clients.txt");
    afficheClientsFichier("clients.txt");
    printf("\n nombre de clients : %d", nombreClientsFichier("clients.txt"));
    printf("\n nom du client à rechercher : ");
    char nomClient[10];
    scanf("%s", nomClient);
    appartientClientFichier(nomClient, "clients.txt");
    return 0;
}


