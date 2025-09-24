#include <stdio.h>

int main() {

    float u[3], v[3], w[3];

    // Saisie des coordonnees du vecteur u
    printf("Entrez les coordonnees du vecteur u (x y z) : \n");
    scanf("%f %f %f", &u[0], &u[1], &u[2]);

    // Saisie des coordonnees du vecteur v
    printf("Entrez les coordonnees du vecteur v (x y z) : \n");
    scanf("%f %f %f", &v[0], &v[1], &v[2]);

    // Calcul du produit vectoriel w = u × v
    w[0] = u[1]*v[2] - u[2]*v[1];
    w[1] = u[2]*v[0] - u[0]*v[2];
    w[2] = u[0]*v[1] - u[1]*v[0];

    // Affichage du resultat
    printf("Produit vectoriel u × v = (%.2f, %.2f, %.2f)\n", w[0], w[1], w[2]);

    return 0;
}
