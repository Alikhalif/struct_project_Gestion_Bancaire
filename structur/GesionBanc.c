#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>


typedef struct{
    char CIN[10];
    char Nom[30]; 
    float Montant;
}compte;

compte info[1000];
int i=0;
int indexTable=0;


void AjouterCompte(){
    printf("creer un compte : \n");
    printf("Entre CIN : ");
    scanf("%s",&info[i].CIN);
    printf("Entre Nom : ");
    scanf("%s",&info[i].Nom);
    printf("Entre Montant : ");
    scanf("%f",&info[i].Montant);
    indexTable++;
}



void AjouterPluseurCompt(){
    int nbrC;
    printf("creer Plusseur compte : \n");
    printf("donner nomber de compte : ");
    scanf("%d",&nbrC);
    for(i=0; i<nbrC; i++){
        printf("\nEntre CIN : ");
        scanf("%s",&info[i].CIN);
        printf("\nEntre Nom : ");
        scanf("%s",&info[i].Nom);
        printf("\nEntre Montant : ");
        scanf("%f",&info[i].Montant);
        indexTable++;
    }
}

void Afficher(){
    printf("--------------------------------\n");
    for(i=0; i<indexTable; i++){
        printf("Entre CIN : %s\n",info[i].CIN);
        printf("Entre Nom : %s\n",info[i].Nom);
        printf("Entre Montant : %f\n",info[i].Montant);
    }
}

int Recherche(){
    char cin[10];
    int i;
    int res = 0;
    printf("donner le CIN de compte rechercher : ");
    scanf("%s",&cin);

    for(i=0; i<indexTable; i++){
        if(stricmp(cin,info[i].CIN) == 0){
            res = 1;
            printf("les info : %s %s %f",info[i].CIN, info[i].Nom,info[i].Montant);
            return i;
        }
    }
    if(res == 0){
        printf("le compte n'existe pas ");
        return -1;
    }
}

int Supprimer(){
    char cin[10];
    int Res;
    Res = Recherche();

    if(Res != -1){
        for(i=Res; i<indexTable; i++){
            info[i] = info[i+1];
        }
        indexTable--;
    }
    else{
        printf("not faninda");
    }
}

int modifier(){
    char cin[10];
    int Res;
    Res = Recherche();

    if(Res != -1){
        printf("donner nouveau CIN : ");
        scanf("%s",&info[Res].CIN);
        printf("donner nouveau Nom : ");
        scanf("%s",&info[Res].Nom);
        printf("donner nouveau Montant : ");
        scanf("%s",&info[Res].Montant);
        
    }
}

void decroissant(){
    printf("--------------------- Tri par decroissant\n");
    for(i=indexTable; i>=0; i--){
        printf("Entre CIN : %s\n",info[i].CIN);
        printf("Entre Nom : %s\n",info[i].Nom);
        printf("Entre Montant : %f\n",info[i].Montant);
    }
}

void MaxMontant(){
    float maxM = info[0].Montant;
    int k;

    for(i=0; i<indexTable; i++){
        if(maxM < info[i].Montant){
            maxM = info[i].Montant;
            k=i;
        }
    }
    printf("\nle montant max est : %s %s %f",info[k].CIN, info[k].Nom, info[k].Montant);
}

void MinMontant(){
    float minM = info[0].Montant;
    int x;

    for(i=0; i<indexTable; i++){
        if( info[i].Montant < minM ){
            minM = info[i].Montant;
            x=i;
        }
    }
    printf("\nle montant min est : %s %s %f",info[x].CIN, info[x].Nom, info[x].Montant);
}

// montant -
void Retrait(){
    float Mr;
    int search;

    search = Recherche();
    printf("donner le montant retrait : ");
    scanf("%f",&Mr);
    if(search != -1){
        if(Mr > info[search].Montant){
            printf("impossible de retrait montant ");
        }
        else{
            info[search].Montant = info[search].Montant - Mr;
            printf("votre montant est : %f", info[search].Montant);
        }
    }
    else{
        printf("le compte not found");
    }
}

void depot(){
    int Res = Recherche();
    float Md;
    printf("entre le montant depot : ");
    scanf("%f", &Md);

    if(Res != -1){
        info[Res].Montant = info[Res].Montant + Md;
        printf("votre montant est : %f", info[Res].Montant);
    }
    else{
        printf("le compte not found");
    }
}

void traitementCompte(){
    int choix;
    
    do{
        printf("\n\t1 - Retrait .");
        printf("\n\t2 - Depot .");
        printf("\n\t3 - Quitter .");

        printf("\n\tEntre votre choix de list suivant : ");
        scanf("%d",&choix);
        
        
        if(choix == 1){
            Retrait();
        }
        if(choix == 2){
            depot();
        }
        if(choix == 0){
            printf("Goodby .\n");
        }
        else{
            printf("error");
        }
    }while (choix != 0);
    
    
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
        case 3:
            Recherche();
            break;
        case 4:
            Supprimer();
            break;
        case 5:
            modifier();
            break;
        case 6:
            Afficher();
            break;   
        case 7:
            decroissant();
            break; 
        case 8:
            MaxMontant();
            break; 
        case 9:
            MinMontant();
            break; 
        case 10:
            traitementCompte();
            break;  
        default:
            printf("entre choix exacte");
            break;
        }
    }while(choix != 0);
}

int main(){
    
    Menu();

    //AjouterCompte();
    //AjouterPluseurCompt();
    
    //Recherche();
    //Supprimer();
    //Afficher();
    //modifier();
    //Afficher();
    //decroissant();
    // MaxMontant();
    // MinMontant();
    //Retrait();
    //depot();
    //Afficher();

    return 0;
}