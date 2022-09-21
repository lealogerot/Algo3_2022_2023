#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=10;
    int * pa=&a;

    printf ("a=%d (adresse : %p) \n",a,&a);
    printf("=> %p\n",pa);

 return 0;
}



int main()
{
    char b ;
    char * pb=&b;

    printf ("b adresse : %p \n",&b);
    printf("=> %p\n",pb);

 return 0;
}



int addition (int * x, int * y){
return *x + *y ;
}
void swap (int * x, int * y){
int tmp = *x;
*x = *y;
*y = tmp;
}
int main(){
int a =12;
int b =23;
printf("a=%d , b=%d\n" , a,b );
swap(&a , &b);
printf("swap...\n");
printf("a=%d , b=%d\n" ,a,b);
return 0;
}



int main()
{
    int a,b,c,max, min;
    printf("Donnez la valeur de a : ");
    scanf("%d",&a);

     printf("Donnez la valeur de b : ");
    scanf("%d",&b);

     printf("Donnez la valeur de c : ");
    scanf("%d",&c);

    if ((a<b)&&(a<c))
        min=a;
    else if ((b<a)&&(b<c))
        min=b;
    else if ((c<a)&&(c<b))
        min=c;
        else min=-1;
        if (min>=0)
            printf("Le minimum est : %d\n",min);
        else printf("Il n'y a pas de minimum");


   if ((a>b)&&(a>c))
        max=a;
    else if ((b>a)&&(b>c))
        max=b;
    else if ((c>a)&&(c>b))
        max=c;
        else max=-1;
        if (max>=0)
            printf("Le maximum est : %d",max);
        else printf("Il n'y a pas de maximum");
        return 0;
}
