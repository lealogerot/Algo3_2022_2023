#include <stdio.h>
#include <stdlib.h>
#define N 10

typedef char Chaine[15];

typedef struct _Client{
    unsigned short idClient;
    Chaine nomClient;
}Client;

typedef Client Tab[N];

void saisie(Client *c){
    printf(" ID client : ");
    scanf("%hd", &c->idClient);
    printf("Nom client : ");
    scanf("%s", c->nomClient);
}
void ajouter(Client c, Tab t, int * nbClients) {
    if (*nbClients < N) {
        t[*nbClients] = c;
        (*nbClients)++;
    }
}
int saisieClients(Tab t, int p, int * nbClients) {
    int i;
    Client c;
    for (i = 0; i < p; i++) {
        saisie(&c);
        ajouter(c, t, nbClients);
    }
    return 1;
}
void modifierNom(Tab t, int nbClients, int i) {
    if (i < nbClients) {
        printf("ntrez le nouveau nom du client : ");
        scanf("%s", t[i].nomClient);
    }
}
void afficherClients(Tab t, int nbClients) {
    int i;
    for (i = 0; i < nbClients; i++) {
        printf("Client %d : %d %s \n", i, t[i].idClient, t[i].nomClient);
    }
}
int rechercheClient(int idClient, Tab t, int nbClients, int * indiceClient) {
    int i;
    for (i = 0; i < nbClients; i++) {
        if (t[i].idClient == idClient) {
            *indiceClient = i;
            return 1;
        }
    }
    return 0;
}

