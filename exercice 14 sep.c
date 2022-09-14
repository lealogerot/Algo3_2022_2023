#include <stdio.h>

int soustraction(int nbr1, int nbr2)
{
    int resultat;
    resultat = (nbr1-nbr2);
    return(resultat);
}

int carre(int nbr3)
{
    int resultat2;
    resultat2 = (nbr3*nbr3);
    return(resultat2);
}
int main ()
{
    int nbr1=8 , nbr3=3
    printf("%d",soustraction(2,6));
    printf("\n");
    printf("%d",soustraction(10,30));
    printf("\n");
    printf("%d",carre(2));
    return 0;
}

