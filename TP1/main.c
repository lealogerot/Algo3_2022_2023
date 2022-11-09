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
void rechercheIdMinMax(Tab t, int nbClients, int * indiceIdMin, int * indiceIdMax) {
    int i;
    int idMin = t[0].idClient;
    int idMax = t[0].idClient;
    for (i = 0; i < nbClients; i++) {
        if (t[i].idClient < idMin) {
            idMin = t[i].idClient;
            *indiceIdMin = i;
        }
        if (t[i].idClient > idMax) {
            idMax = t[i].idClient;
            *indiceIdMax = i;
        }
    }
}
int afficherDoublons(Tab t, int nbClients) {
    int i, j;
    int nbDoublons = 0;
    for (i = 0; i < nbClients; i++) {
        for (j = i + 1; j < nbClients; j++) {
            if (t[i].idClient == t[j].idClient && strcmp(t[i].nomClient, t[j].nomClient) == 0) {
                printf("Doublon : %d %s \n", t[i].idClient, t[i].nomClient);
                nbDoublons++;
            }
        }
    }
    return nbDoublons;
}
int ajouterSansDoublon(Client c, Tab t, int * nbClients) {
    int i;
    for (i = 0; i < *nbClients; i++) {
        if (t[i].idClient == c.idClient && strcmp(t[i].nomClient, c.nomClient) == 0) {
            return 0;
        }
    }
    ajouter(c, t, nbClients);
    return 1;
}
int enleverClient(int idClient, Tab t, int * nbClients) {
    int i, j;
    for (i = 0; i < *nbClients; i++) {
        if (t[i].idClient == idClient) {
            for (j = i; j < *nbClients - 1; j++) {
                t[j] = t[j + 1];
            }
            (*nbClients)--;
            return 1;
        }
    }
    return 0;
}

