#include <stdio.h>
#include <stdlib.h>

void saisie(int T[], int n)
{
    if (n>0)
    {
        saisie(T, n-1);
        scanf("%d", &T[n-1]);
    }
}

int calculSomme(int T[], int n)
{
    if (n>0)
    {
        return calculSomme(T, n-1) + T[n-1];
    }
    else
    {
        return 0;
    }
}

void remplacer(int T[], int n, int e)
{
    if (n>0)
    {
        remplacer(T, n-1, e);
        if (T[n-1] == e)
        {
            T[n-1] = 0;
        }
    }
}

int max(int T[], int n)
{
    if (n>1)
    {
        int maxnmoins1 = max(T, n-1);
        if (maxnmoins1 > T[n-1])
        {
            return maxnmoins1;
        }
        else
        {
            return T[n-1];
        }
    }
    else
    {
        return T[0];
    }
}

void minMax(int T[], int n, int *min, int *max)
{
    if (n>1)
    {
        int minnmoins1, maxnmoins1;
        minMax(T, n-1, &minnmoins1, &maxnmoins1);
        if (minnmoins1 < T[n-1])
        {
            *min = minnmoins1;
        }
        else
        {
            *min = T[n-1];
        }
        if (maxnmoins1 > T[n-1])
        {
            *max = maxnmoins1;
        }
        else
        {
            *max = T[n-1];
        }
    }
    else
    {
        *min = T[0];
        *max = T[0];
    }
}

int main()
{
    int T[12];
     int min, max;
    saisie(T, 12);
     printf("Somme : %d", calculSomme(T, 12));
    remplacer(T, 12, 3);
    minMax(T, 12 , &min, &max);
    printf("Minimum : %d - Maximum : %d ", min, max);
    return 0;
}
