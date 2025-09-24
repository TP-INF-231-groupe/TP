#include <stdio.h>

int main() {
    int n, i, valeur, trouve = 0;
    printf("Entrez le nombre d'éléments du tableau : ");
    scanf("%d", &n);
    int tableau[n];
    for (i = 0; i < n; i++) {
        printf("Entrez l'élément %d : ", i);
        scanf("%d", &tableau[i]);
    }
    printf("Entrez la valeur à rechercher : ");
    scanf("%d", &valeur);
    for (i = 0; i < n; i++) {
        if (tableau[i] == valeur) {
            trouve = 1;
            break;
        }
    }
    if (trouve) {
        printf("Valeur trouvée\n");
    } else {
        printf("Valeur absente\n");
    }
    return 0;
}