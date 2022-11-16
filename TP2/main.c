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
int vSup(Tab t, int n ,int i,int v)
{
    int res=0;
    if (i<n)
    {
        if (t[i]>v)
        {
            res=1+vSup(t,n,i+1,v);
        }
        else
        {
            res=vSup(t,n,i+1,v);
        }
    }
    return res;
}
void decroissant(Tab t, int n ,int i)
{
    if (i>=0)
    {
        printf("t[%d]=%d\n",i,t[i]);
        decroissant(t,n,i-1);
    }
}
int rechercheV(Tab t, int n ,int i,int v)
{
    int res=-1;
    if (i<n)
    {
    if (t[i]==v)
        {
            res=i;
        }
    else
        {
            res=rechercheV(t,n,i+1,v);
        }
    }
    return res;
}
int rechercheDicho(Tab t, int n ,int i,int v)
{
    int res=-1;
    if (i<n)
    {
        if (t[i]==v)
        {
            res=i;
        }
        else
        {
            res=rechercheV(t,n,i+1,v);
        }
    }
    return res;
}
int main()
{
    Tab t1 = {4,2,8,0,7,3,1,5,9,6};
    Tab t2 = {6,12,8,52,41,2,7,23,16,25};
    printf ("La somme des entiers du tableau t1 = %d\n",somme(t1,N,0)); // Avec 3 paramètres
    afficher(&t1, N, 0);
    printf("\nLa somme des entiers du tableau t1 est %d\n",sum2Parameters(t1,N)); // Avec 2 paramètres
    printf("Le nombre d'elements du tableau superieur a 6 est %d\n",vSup(t1, N, 0, 6));
    decroissant(t1,N,N-1);
    printf("L'indice de la valeur 6 est %d\n",rechercheV(t1,N,0,6));
    printf("L'indice de la valeur 12 est %d\n",rechercheDicho(t2,N,0,12));
    return 0;
}
