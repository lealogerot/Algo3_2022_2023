#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int Recursive(int n){
    if(n == 0){
        return 1;
    }
    else{
        return 2 + Recursive(n-1);
    }
}

int Puissance(int n, int a)
{
    if(a == 0){
        return 1;
    }
    else{
        return n*Puissance(n,a-1);
    }
}


int main ()
{
    printf("%d\n", Recursive(3));
    printf("%d\n", Recursive(0));
    printf("%d\n", Puissance(3,2));
}
