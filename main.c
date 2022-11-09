#include <stdio.h>
#include <stdlib.h>
#define N 10

typedef char Chaine[15];

typedef struct _Client{
    unsigned short idClient; // Entiers de 0 a 65535
    Chaine nomClient;
}Client;

typedef Client Tab[N];

void saisie(Client *c){
    printf("\nEntrer l'id du client : ");
    scanf("%hd", &c->idClient);
    printf("Entrer le nom du client : ");
    scanf("%s", c->nomClient);
}
