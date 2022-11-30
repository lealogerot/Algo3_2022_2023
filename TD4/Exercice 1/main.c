#include <stdio.h>
#include <stdlib.h>

typedef int Tab[5];

int dicho(Tab t,int c, int g,int d)
{
    int i;
    d=-1;
    for (i=0;i<g;i++)
        if(c == t[i])
            d=(i+1);
    return d;
}
int main()
{
    Tab t[]={65,94,12,1,23};
    printf("%d",dicho(t,12,4,65));
}
