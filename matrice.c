#include <stdio.h>
#include "matrice.h"
   
matrice creer_matrice( )
{
    matrice M ;
    int i , j;
    printf ("Entrer le nombre de lignes\n");
    scanf ("%d",&M.ligne);
    printf ("Entrez le nombres de colonnes\n");
    scanf("%d", &M.colonne);
    for(i=0; i<M.ligne ; i++){
        for ( j=0 ; j<M.colonne ; j++ ) {
            printf("\n Elements ligne %d , %d : ",i+1, 1+j ) ;
            scanf("%f",&M.Mat[i][j] ) ;
        }
    }
    return M ;
}

void afficher_matrice ( matrice M) {
    for ( int i = 0 ; i< M.ligne ; i++){
        printf("  |") ;
        for (int j = 0; j< M.colonne; j++){
            printf(" %.2f ", M.Mat[i][j]);
        }
        printf("|\n");
    }
    printf ("\n");
}

void somme_matrice ( matrice M1, matrice M2 )
{
    matrice M ;
    int m = M1.colonne ;
    int n = M1.ligne ;
    if ( M1.colonne == M2.colonne && M1.ligne == M2.ligne ){
        int i, j;
        M.colonne = M1.colonne;
        M.ligne = M1.ligne;
        for(i=0; i<=n; i++){
            for(j=0; j<=m ; j++){
                M.Mat[i][j] = M1.Mat[i][j] + M2.Mat[i][j] ;
            }
        }
        printf ("\n La sommes des matrice est A+B = \n");
        afficher_matrice (M);
    }
    else 
        printf("Les dimensions des matrices ne corespondes pas\n") ; 
}
void produit_matrice (matrice M1, matrice M2)
{
    matrice M;
    int i, j;
    
    if (M2.ligne = M1.colonne){
    // initialisation du tableau    
        M.colonne = M2.colonne;
        M.ligne = M1.ligne;
        for( i=0 ; i<M.ligne ; i++ ){
            for( j=0 ; j< M.colonne; j++){
                M.Mat[i][j] = 0 ;
            }
        }
        for (int i = 0 ; i < M.ligne ; i++ ){
            for ( int j = 0 ; j < M.colonne ; j++ ) {
                for ( int k = 0 ; k < M1.colonne ; k++ ) {
                    M.Mat[i][j] += M1.Mat[i][k] * M2.Mat[k][j] ;
                }
            }
        }
        printf ("\n Le produit des matrice est AxB = \n ");
        afficher_matrice (M);
    }
    else 
        printf ("Produit impossible car dimension ne coresponde pas \n") ;
}