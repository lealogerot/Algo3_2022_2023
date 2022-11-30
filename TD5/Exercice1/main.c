#include <stdio.h>
#define N 10
typedef int Tab[N];

int partitionner(int tab[],int g,int d)
{
int i,j;
int pivot,temp;
pivot=tab[g];
i=g-1;
j=d+1;
while (i<j)
{
while (tab[i]<=pivot)
{
    i++;
}
while (tab[j]>pivot)
{
    j--;
}
if (i<j)
{
    temp=tab[i];
    tab[i]=tab[j];
    tab[j]=temp;
}
}
    tab[g]=tab[j];
    tab[j]=pivot;
return j;
}

void triRapide(int *tab,int taille)
{
  int i,j;
  int pivot,temp;
  if (taille<2)
  {
      return pivot=tab[taille/2];
  }
  for (i=0,j=taille-1;;i++,j--)
    {
    while (tab[i]<pivot)
    {
        i++;
    }
    while (pivot<tab[j])
    {
        j--;
    }
    if (i>=j)
    {
    break;
    temp=tab[i];
    tab[i]=tab[j];
    tab[j]=temp;
    }
   }
}

int initPivot(int tab[],int n)
{
    int i,j;
    int temp;
    for (i=0;i<n-1;i++)
{
        for (j=i+1;j<n;j++)
    {
        if (tab[i]>tab[j])
        {
            temp=tab[i];
            tab[i]=tab[j];
            tab[j]=temp;
        }
    }
}
return tab[n/2];
}

int main()
{
    Tab t = {3,17,9,15,2,7,10,9,8,12};
    triRapide(t,N);
    return 0;
}
