#include <stdio.h>
#include <stdlib.h>
void EntrerNotre (float note[8]){
 int i;
    for (i=0 ; i<8 ; i++){
printf ("Entrez la note %d : \n" , i++);
scanf("%f\n", &note[i]);

if (note[i]< 0 || note[i]> 20){
printf("La note doit être comprise entre 0 et 20\n");
            i--;
    }
}

void SaisirCoefficient ( int coefficient[8]){
int i;
    for (i=0 ; i<8 ; i++){
printf("Quel est le coefficient de la note %d ? \n" , i++);
scanf("%d" , &coefficient[i]);
    }
}

float calcMoy (float note[8] , int coefficient[8] ){
int i;
float moy =0;
float somme =0;
for (i = 0; i < 10; i++) {
       somme=somme+note[i]*coefficient[i];
        }
moy=somme / 8 ;
printf ("La moyenne est : %f\n",moy);
}

float min_max (float note[8] ){
int i;
float min=0;
float max=0;
 max = min = note[7];
    for (i = 0; i < 10; i++) {
        if (note[i] > max)
            max = note[i];
        if (note[i] < min)
            min = note[i];
            }
printf(" La note minimale est de %d\n", min);
printf(" La note maximale est de %d\n ", max);
}

void modif_note (float *note[8] , int *coefficient[8]){
int i;
float note2;
printf("Entrez la note que vous voulez modifier :\n ");
    scanf("%f", &note2);
    note2 = note[note - 1];
    for (i = 0; i < 8; i++) {
        printf("La note %d est de %f et le coefficient est de %d\n ", i + 1, note[i],coefficient[i]);
    }
}

void ajouter1 (float note)
            {
int i;
for(i=0;i<8;i++){

if((note+i)< 19)
{
(note+i)=(note+i)+1;
}
else{

(note+i)=20;
    }
                }
            }


int main () {
float note[8];
int coefficient[8];
EntrerNotre (&note);
SaisirCoefficient (&coefficient);
calcMoy (&note , &coefficient );
min_max(&note);
modif_note (&note , &coefficient );
ajouter1(&note);
}
