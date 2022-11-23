#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 1000

typedef int Tab[N];

void remplirTableau(Tab t, int n)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < n; i++)
        t[i] = rand() % n;
}

void afficheTableau(Tab t, int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", t[i]);
    printf("\n");
}

void copieTableau(Tab t1, Tab t2, int n)
{
    int i;
    for (i = 0; i < n; i++)
        t2[i] = t1[i];
}

void triSelection(Tab t, int n)
{
    int i, j, min, tmp;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
            if (t[j] < t[min])
                min = j;
        tmp = t[i];
        t[i] = t[min];
        t[min] = tmp;
    }
}

void triRapide(Tab t, int n)
{
    int i, j, pivot, tmp;
    if (n < 2)
        return;
    pivot = t[n / 2];
    for (i = 0, j = n - 1;; i++, j--)
    {
        while (t[i] < pivot)
            i++;
        while (t[j] > pivot)
            j--;
        if (i >= j)
            break;
        tmp = t[i];
        t[i] = t[j];
        t[j] = tmp;
    }
    triRapide(t, i);
    triRapide(t + i, n - i);
}

int main()
{   double temps_debut, temps_fin;
    int i;
    double moyenne1 = 0, moyenne2 = 0;
    Tab t1, t2;
    remplirTableau(t1, N);
    printf ("tableau t1 : ");
    afficheTableau(t1, N);
    copieTableau(t1, t2, N);
    printf ("tableau t2 copie de t1 : ");
    afficheTableau(t2, N);
     printf("Tableau t1 non trié :\n");
    afficheTableau(t1, N);
    printf("Tableau t1 trié par sélection :\n");
    temps_debut=(double)clock();
    triSelection(t1, N);
    temps_fin = (double)clock();
    afficheTableau(t1, N);
    printf("\nDuree de traitement : %f ms\n", 1000*(temps_fin - temps_debut)/CLOCKS_PER_SEC);
    printf("Tableau t2 trié par tri rapide :\n");
    temps_debut=(double)clock();
    triRapide(t2, N);
    temps_fin = (double)clock();
    afficheTableau(t2, N);
    printf("\nDuree de traitement : %f ms\n", 1000*(temps_fin - temps_debut)/CLOCKS_PER_SEC
           
                for(i=0; i<10; i++){
        remplirTableau(t1, N);
        copieTableau(t1, t2, N);
        temps_debut=(double)clock();
        triSelection(t1, N);
        temps_fin = (double)clock();
        moyenne1 += 1000*(temps_fin - temps_debut)/CLOCKS_PER_SEC;
        temps_debut=(double)clock();
        triRapide(t2, N);
        temps_fin = (double)clock();
        moyenne2 += 1000*(temps_fin - temps_debut)/CLOCKS_PER_SEC;
    }
    printf("\nDuree de traitement moyen du triSelection : %f ms\n", moyenne1/10);
    printf("\nDuree de traitement moyen du triRapide : %f ms\n", moyenne2/10);
    return 0;
}

