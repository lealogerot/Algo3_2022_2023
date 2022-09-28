#include <stdio.h>
#include <stdlib.h>

void calcMoy (int *notes, int *coefficients, int *max, int *min, int *note, int *note2, float *moy)
{
    int i;
    float moy = 0;
    for (i = 0; i < 8; i++) {
        moy = moy + (notes[i] * coefficients[i]);
    }
int main() {
    int notes[8], coefficients[8], i, max, min,note,note2;
    for (i = 0; i < 8; i++) {
        printf("Entrer une note %d:\n ", i + 1);
        scanf("%d", &notes[i]);
        if (notes[i] < 0 || notes[i] > 20) {
            printf("La note n'est pas comprise entre 0 et 20\n");
            i--;
        }
        printf("Donnez le coefficient de la note %d:\n ", i + 1);
        scanf("%d", &coefficients[i]);

    max = min = notes[7];
    for (i = 0; i < 8; i++) {
        if (notes[i] > max)
            max = notes[i];
        if (notes[i] < min)
            min = notes[i];
    }
     calcMoy(&notes, &coefficients, &max, &min, &note, &note2, &moy);
    moy = moy / 8;
    printf("La moyenne est de %f\n ", moy);
    printf(" La note minimale est de %d\n", min);
    printf(" La note maximale est de %d\n ", max);
    printf("Entrer la note que vous voulez modifier:\n ");
    scanf("%d", &note);
    printf("Entrer la nouvelle note:\n ");
    scanf("%d", &note2);
    notes[note - 1] = note2;
    for (i = 0; i < 8; i++) {
        printf("La note %d est de %d et le coefficien de %d\n ", i + 1, notes[i],coefficients[i]);
    }
    for (i = 0; i < 8; i++) {
        moy = moy + (notes[i] * coefficients[i]);
    }
    moy = moy / 8;
    printf("La nouvelle moyenne est de %f\n ", moy);
        printf(" La nouvelle note minimale est de %d\n", min);
    printf(" La nouvelle note maximale est de %d\n ", max);
    return 0;

