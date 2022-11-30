#include <stdio.h>
#include <stdlib.h>

int Minimal(int tab[], int taille){
    int i,j=0;
    for (i = 0;i<taille;i++){ //
        if (tab[j] > tab[i+1]) {
            j = i+1;
        }
    }
    return j;
}
void permuter(int tab[],int i, int j){
    int temporaire;
    temporaire = tab[i];
    tab[i] = tab[j];
    tab[j] = permuter ;
}
int affiche_tab(int tab[], int taille)
{
    int i;
    for(i=0;i<taille;i++)
    {
        printf("%d\n",tab[i]);
    }
}
int main()
{
    int t[] = {3,17,9,15,2,7,10,9,8,12};
    printf("%d\n", Minimal(t,10));
    permuter(t,4,0);
    printf("%d\n", Minimal(t,10));
    affiche_tab(t,13);
    return 0;
}
