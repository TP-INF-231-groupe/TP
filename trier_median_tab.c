#include <stdio.h>
#include <string.h>


void echanger(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}


void tri_sequentiel(float tab[], int n) {
    int i, j, min;
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (tab[j] < tab[min]) {
                min = j;
            }
        }
        if (min != i) {
            echanger(&tab[i], &tab[min]);
        }
    }
}


void verifier_trie(float tab[], int n) {
    int croissant = 1, decroissant = 1;
    for (int i = 0; i < n - 1; i++) {
        if (tab[i] > tab[i+1]) croissant = 0;
        if (tab[i] < tab[i+1]) decroissant = 0;
    }

    if (croissant)
        printf("\nLe tableau est trié par ordre croissant.\n");
    else if (decroissant)
        printf("\nLe tableau est trié par ordre décroissant.\n");
    else
        printf("\nLe tableau n'est pas trié.\n");
}


float median_tableau(float tab[], int n) {
    float m;
    if (n % 2 == 0) {
        m = (tab[n/2 - 1] + tab[n/2]) / 2;
    } else {
        m = tab[n/2];
    }
    printf("\nLa médiane est : %.2f\n", m);
    return m;
}


int main() {
    int n;
    printf("\n ---------- PROGRAMME TRI + MEDIAN ---------- \n");  
    printf("Veuillez saisir le nombre d'elements du tableau: ");
    scanf("%d", &n);

    float t[n];
    for (int i = 0; i < n; i++) {
        printf("Entrez l'element [%d] : ", i+1);
        scanf("%f", &t[i]);
    }

    
    printf("\nVotre tableau : ");
    for (int i = 0; i < n; i++) {
        printf("|%.2f|", t[i]);
    }
    printf("\n");

    
    verifier_trie(t, n);

    
    tri_sequentiel(t, n);
    printf("\nTableau après tri croissant : ");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", t[i]);
    }
    printf("\n");

    
    median_tableau(t, n);

    return 0;
}