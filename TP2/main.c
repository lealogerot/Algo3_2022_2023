#include <stdio.h>
#define N 10
typedef int Tab[N];
int somme(Tab t, int n, int i ){
    int res=0;
printf ("Calcul de la somme a partir de l’indice %d :\n",i);
    if (i<n){
printf ("\t appel du calcul de la somme a partir de l’indice %d :\n",i+1);
res=t[i]+somme(t,n,i+1);
printf ("\t addition avec t[%d]\n",i );
}
printf ("\t Somme a partir de l’indice %d = %d\n\n",i,res);
return res ;
}
void afficher(int *t, int n, int i){
    if (i == n){
        return;
    }
    printf("%d", t[0]);
    afficher(t+1, n, i+1);
}
int sum2Parameters (Tab t, int n)
{
    int res=0;
    if (n>0)
    {
        res=t[n-1]+sum2Parameters(t,n-1);
    }
    return res;
}


