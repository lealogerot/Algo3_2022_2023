#include <stdio.h>
#include <stdlib.h>

#define MAX 10

typedef int tab[MAX];


void f(tab t, int n)
{
    int b = 1, j = n, i;
    while (b == 1)
    {
        b = 0;
        i = 0;
        while (i < j)
        {
            if (t[i] > t[i + 1])
            {
                int tmp = t[i];
                t[i] = t[i + 1];
                t[i + 1] = tmp;
                b = 1;
            }
            i++;
        }
        j--;
    }
}

int main()
{
    int t = {3, 17, 9, 15, 2, 7, 10, 9, 8, 12};
    int n = 9;
    f(t, n);
    for (int i = 0; i < 10; i++){
        printf("%d ", t[i]);
    }
    return 0;
}
