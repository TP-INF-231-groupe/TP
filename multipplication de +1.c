
#include <stdio.h>

// Multiplication a × b en utilisant seulement +1
int multiplicationPlusUn(int a, int b) {
    int resultat = 0;
    for (int i = 0; i < b; i++) {
        int compteur = 0;
        for (int j = 0; j < a; j++) {
            compteur += 1;  // incrémente de 1
        }
        resultat += compteur;
    }
    return resultat;
}

int main() {
    int a, b;
    printf("Entrez deux entiers positifs a et b : ");
    scanf("%d %d", &a, &b);

    if (a > 0 && b > 0) {
        int produit = multiplicationPlusUn(a, b);
        printf("%d × %d = %d\n", a, b, produit);
    } else {
        printf("Erreur : a et b doivent être > 0\n");
    }

    return 0;
}
