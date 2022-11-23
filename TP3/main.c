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




int main()
{   Tab t1 ;
    remplirTableau(t1, N);
    afficheTableau(t1, N);
    return 0;
}


