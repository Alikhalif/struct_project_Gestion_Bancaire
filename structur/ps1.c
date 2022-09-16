#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    char Ref[10];
    char Marque[30];
    int CapDisque;
    int CapMimoir;
    char system[30];

}ordinateur;

static int i;
int nbrO;
ordinateur *OT;
OT = (ordinateur *)malloc(2 * sizeof(ordinateur));



// void Ajouter(int);
// void Afficher(int);

int main(){
    //int nbrO;
    int choix;

    printf("  welcome to me app  ");

    // do{
    //     puts("\n1- Ajouter \n2- Afficher \n3- Supprimer \n4- modifier \n5- Exit \n");
    //     printf("entrer votre choix : ");
    //     scanf("%d",&choix);

    //     switch(choix){
    //         case 1 : printf("donner nomber de ordinateur : ");
    //                 scanf("%d",&nbrO);
    //                 Ajouter(nbrO);
    //                 //Afficher(nbrO);
    //                 break;
    //         case 2 : Afficher(nbrO);
    //                 break;
    //         case 3 : printf("delete");
    //                 break;
    //         case 4 : printf("update");
    //                 break;
    //         case 5 : printf("good By ^_^");
    //                 break;        
    //         default: printf("erreur");
    //                 break;  
    //     }
    // }while(choix != 5);
    
 
    
}

// void Ajouter(int nbrO){
//     for(i=0; i<nbrO; i++){
//         printf("donner les information de l'ordinateur %d \n",i+1);

//         printf("entre le references : ");
//         scanf("%s",&OT[i].Ref);
//         printf("entre la marque : ");
//         scanf("%s",&OT[i].Marque);
//         printf("entre la capasite de disque : ");
//         scanf("%d",&OT[i].CapDisque);
//         printf("entre le  capasite de mimoire ");
//         scanf("%d",&OT[i].CapMimoir);
//         printf("entre le systeme ");
//         scanf("%s",&OT[i].system);
        
//     }
//     puts("merci pour ajouter ");
// }

// void Afficher(int nbrO){
//     for(i=0; i<nbrO; i++){
//         printf("%s ",OT[i].Ref);
//         printf("%s ",OT[i].Marque);
//         printf("%s ",OT[i].CapDisque);
//         printf("%s ",OT[i].CapMimoir);
//         printf("%s ",OT[i].system);
//     }
// }