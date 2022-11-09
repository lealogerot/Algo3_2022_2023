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
