#include <stdio.h>
#include <stdlib.h>
#define N 10

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

int main()
{   Tab t1, t2;
    remplirTableau(t1, N);
    afficheTableau(t1, N);
    copieTableau(t1, t2, N);
    afficheTableau(t2, N);
     printf("Tableau t1 non trié :\n");
    afficheTableau(t1, N);
    printf("Tableau t1 trié par sélection :\n");
    triSelection(t1, N);
    afficheTableau(t1, N);
    return 0;
}



