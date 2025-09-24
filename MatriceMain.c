#include <stdio.h>
#include "matrice.h"
    
int main ()
{
    matrice M1 , M2 ;  
    int choix ;
    printf("-------Menu------\n\n");
    do
    {
        printf("1.sommes des matrices\n");
        printf("2.produits des matrices\n");
        printf("3.Produit Vecteur et matrices\n");
        printf("0.exit\n\n");
        printf ("Faites un choix \n");
        scanf("%d",&choix);
        switch(choix)
        {
            case 1:
                printf(" \n Entrez les information de la matrice A ");
                M1 = creer_matrice( ) ;
                printf(" \n Entrez les information de la matrice B ");
                M2 = creer_matrice( ) ;
                printf(" \n Matrice A = \n");
                afficher_matrice (M1) ;
                printf(" \n Matrice B = \n");
                afficher_matrice (M2) ;
                somme_matrice ( M1 ,M2 ) ;
                printf (" \n ");
            break;
            case 2:
                printf(" \n Entrez les information de la matrice A ");
                M1 = creer_matrice( ) ;
                printf(" \n Entrez les information de la matrice B ");
                M2 = creer_matrice( ) ;
                printf(" \n Matrice A = \n");
                afficher_matrice (M1) ;
                printf(" \n Matrice B = \n");
                afficher_matrice (M2) ;
                produit_matrice (M1,M2 );
                printf (" \n ");
            break;
            case 3:
                int nb ;
                printf (" Quel type de vecteur voulez vous utiliser \n 1-Vecteur ligne \n 2-Vecteur colone \n ");
                scanf ("%d",&nb) ;
                if ( nb == 1 ) {
                    printf (" Veuillez entrez 1 comme nombre de ligne \n");
                    printf(" \n Entrez les information du vecteur V ");
                    M1 = creer_matrice( ) ;
                    printf(" \n Entrez les information de la matrice A ");
                    M2 = creer_matrice( ) ;
                    printf(" \n Vecteur V = \n");
                    afficher_matrice (M1) ;
                    printf(" \n Matrice A = \n");
                    afficher_matrice (M2) ;
                    printf ("\n La sommes des matrice est VxA = \n");
                    produit_matrice (M1,M2 );
                    printf (" \n ");
                }else 
                {
                    printf (" Veuillez entrez 1 comme nombre de colone \n");
                    printf(" \n Entrez les information du vecteur ");
                    M1 = creer_matrice( ) ;
                    printf(" \n Entrez les information de la matrice ");
                    M2 = creer_matrice( ) ;
                    printf(" \n Matrice A = \n");
                    afficher_matrice (M1) ;
                    printf(" \n Matrice B = \n");
                    afficher_matrice (M2) ;
                    printf ("\n La sommes des matrice est VxA = \n") ;
                    produit_matrice (M1,M2 );
                    printf (" \n ");
                }
                printf (" \n ");
            break;
            case 0:
                return 0;
            break;
            default : printf ("Valeur incorrecte faites un autre choix \n");
        }   
    }while(choix!=0);

        return 0 ;
}