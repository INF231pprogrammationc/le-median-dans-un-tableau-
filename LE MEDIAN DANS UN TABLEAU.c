Conversation opened. 5 messages. 1 message unread.

Skip to content
Using Gmail with screen readers
Conversations
0% of 15 GB used
Terms · Privacy · Program Policies
Last account activity: 0 minutes ago
Open in 2 other locations · Details
#include <stdio.h>
#include <stdlib.h>
int comparer(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
    }
float calculerMediane(int tableau[], int taille) {
    qsort(tableau, taille, sizeof(int), comparer);
    printf("Tableau trié : ");
    for (int i = 0; i < taille; i++) {
    printf("%d ", tableau[i]);
    }
    printf("\n");
    if (taille % 2 == 1) {
    return (float)tableau[taille / 2];
    } else {
    int milieu1 = tableau[taille / 2 - 1];
    int milieu2 = tableau[taille / 2];
    return (float)(milieu1 + milieu2) / 2.0;
    }
    }

int main() {
    int taille;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &taille);
    if (taille <= 0) {
    printf("La taille doit être positive.\n");
    return 1;
    }
    int *tableau = (int*)malloc(taille * sizeof(int));
    if (tableau == NULL) {
    printf("Erreur d'allocation mémoire.\n");
    return 1;
    }
    printf("Entrez les %d éléments du tableau :\n", taille);
    for (int i = 0; i < taille; i++) {
    printf("Élément %d : ", i + 1);
    scanf("%d", &tableau[i]);
    }
    printf("\nTableau original : ");
    for (int i = 0; i < taille; i++) {
    printf("%d ", tableau[i]);
    }
    printf("\n");
    float mediane = calculerMediane(tableau, taille);
    printf("La médiane est : %.2f\n", mediane);
    free(tableau);
    return 0;
}
la médiane.c
Displaying la médiane.c.