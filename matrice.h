#ifndef MATRICE_H
#define MATRICE_H
#define Max 20

    struct matrice {
        int ligne;
        int colonne;
        float Mat[Max][Max];
    };
    typedef struct matrice matrice;

    matrice creer_matrice( );
    void afficher_matrice ( matrice ) ;
    void somme_matrice (matrice , matrice ) ;
    void produit_matrice (matrice , matrice ) ;

#endif