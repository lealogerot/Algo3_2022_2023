#include <stdio.h>
#include <stdlib.h>

void longueur(char* chaine){
    printf("%s", chaine);
    int i = 0;
    while(chaine[i] != '\0'){
        i=i+1;
    };
printf ("La longueur de la chaine est de : %d\n" , i);
};
void afficheInverse(char* chaine){
    int i = (longueur(chaine) -1);
    while (i>=0){
        printf("%c", chaine[i]);
        i=i-1 ;   }
};
int sontEgale(char* chaine, char* autreChaine){
    int i=0;
    while(chaine[i] != '\0' && autreChaine[i] == '\0'){
        if(chaine[i] != autreChaine[i]){
            return 0;
        }
        i=i+1;
    }

    if(chaine[i] == '\0' && autreChaine[i] == '\0'){
        return 1;
    }else{
        return 0;
    }
};
int appartientA (char *chaine, char a) {
    int i = 0;
    while (chaine[i] != '\0') {
        if (chaine[i] ==  a) {
            return 1;
        }
        i=i+1;
    }
    return 0;
}

int main(){
    char chaine[25];
    char autreChaine[25];
    printf("Entrez votre nom :\n");
        scanf("%c", &chaine);
    printf("Entrez un autre nom :\n");
        scanf("%c", &autreChaine);
    longueur(chaine);
    longueur(autreChaine);
    afficheInverse(chaine);
    afficheInverse(autreChaine);
    printf("\n");

    if(equalChain(chaine, autreChaine) == 1){
    printf("Les deux chaines sont égales \n");
    }else{
        printf("Les deux chaines ne sont pas égales \n");
    }
     printf("%d", appartientA(chaine, 'a'));

    return 0;
};
