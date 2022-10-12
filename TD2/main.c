#include <stdio.h>
#include <stdlib.h>

typedef char chaine[15];

typedef struct {
    char nom[15];
    char prenom[15];
    int codeFonction;
    float salaire;
}employe;
void saisiremploye (employe * e){
printf ("Quel est votre nom ?\n");
scanf("%s",(*e).nom);
printf ("Quel est votre prenom ?\n");
scanf("%s",(*e).prenom);
printf ("Quel est votre code de Fonction ?\n");
scanf("%d",(*e).codeFonction);
printf ("Quel est votre salaire ?\n");
scanf("%f",(*e).salaire)
};

void afficheemploye (employe * e){
printf("Vous vous appelez %s %s\n",(*e).prenom , (*e).nom);
printf("Votre code est : %d\n",(*e).codeFonction);
printf ("Votre salaire est de : %f\n",(*e).salaire);
};

void modifemploye (employe * e){
 printf("Quel est le nouveau nom de l'employe ?\n ");
scanf("%s", (*e).nom);
printf("Quel est le nouveau prenom de l'employe ?\n ");
scanf("%s", (*e).prenom);
printf("Quelle est le nouveau code de fonction de l'employe ?\n ");
scanf("%d", (*e).codeFonction);
printf("Quel est le nouveau salaire de l'employe ?\n ");
scanf("%f", (*e).salaire);
};

int main(){
employe e;
saisiremploye(&e);
afficheemploye (&e);
modifemploye (&e);
afficheemploye (&e);
return 0;
}
