#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct numbers_struct {
    char cin[10];
    char nom[30];
    int age;
    char numbers_array[1000];
};

int  main(void){


    int i=0;
    int indexTable=0;
    int size;
    printf(">> donner nomber des Perssone : ");
    scanf("%d",&size);

    //int i;
    struct numbers_struct *s= malloc(size * sizeof(struct numbers_struct));



    void AjouterCompte(){
        int i=0;
        printf("creer un compte : \n");
        printf("Entre CIN : ");
        scanf("%s",&s[i].cin);
        printf("Entre Nom : ");
        scanf("%s",&s[i].nom);
        printf("Entre Montant : ");
        scanf("%d",&s[i].age);
        indexTable++;
    }



    void AjouterPluseurCompt(){
        int nbrC;
        printf("creer Plusseur compte : \n");
        for(i=0; i<size; i++){
            printf("\nEntre CIN : ");
            scanf("%s",&s[i].cin);
            printf("Entre Nom : ");
            scanf("%s",&s[i].nom);
            printf("Entre Montant : ");
            scanf("%d",&s[i].age);
            indexTable++;
        }
    }

    void Afficher(){
        printf("--------------------------------\n");
        for(i=0; i<indexTable; i++){
            printf("Entre CIN : %s\n",s[i].cin);
            printf("Entre Nom : %s\n",s[i].nom);
            printf("Entre Montant : %d\n",s[i].age);
        }
    }

    void Menu(){
        int choix;

        printf("\n\t\twelcom to my banck");


        do{
            printf("\n\tEntre votre choix de list suivant : ");
            printf("\n\t1 - Ajouter un compte .\n\t2 - Ajouter Plussieur compte .\n\t3 - Recherche .");
            printf("\n\t4 - Supprimer .\n\t5 - Modifier .\n\t6 - Afficher .");
            printf("\n\t7 - Tri Par Order Decroissant .\n\t8 - Max Montant .\n\t9 - Min Montant .");
            printf("\n\t10 - Traitement de Compte .\n\t 0 - Quitter .\n");
            printf("\n\t===> ");
            scanf("%d",&choix);

            switch (choix)
            {
            case 1:
                AjouterCompte();
                break;
            case 2:
                AjouterPluseurCompt();
                break;
            // case 3:
            //     Recherche();
            //     break;
            // case 4:
            //     Supprimer();
            //     break;
            // case 5:
            //     modifier();
            //     break;
            case 6:
                Afficher();
                break;
            // case 7:
            //     decroissant();
            //     break;
            // case 8:
            //     MaxMontant();
            //     break;
            // case 9:
            //     MinMontant();
            //     break; 
            // case 10:
            //     traitementCompte();
            //     break;  
            default:
                printf("entre choix exacte");
                break;
            }
        }while(choix != 0);
    }

    Menu();


    free(s);
}