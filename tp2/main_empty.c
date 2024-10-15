#include <math.h>
#include <stdio.h>


void exercice1(void) {
    printf("\n\nEXERCICE 1\n\n");
    
    /******************** Votre code ci-dessous ********************/

    int entier_relatif;
    printf("Veuillez entrer un entier relatif : ");
    scanf("%d", &entier_relatif);

    if(entier_relatif > 0) {
        printf("%d est strictement positif\n", entier_relatif);
    } else if(entier_relatif < 0) {
        printf("%d est strictement négatif\n", entier_relatif);
    } else {
        printf("%d est nul\n", entier_relatif);
    }

    /******************** Votre code ci-dessus *********************/

    return;
}


void exercice2(void) {
    printf("\n\nEXERCICE 2\n\n");
    
    /******************** Votre code ci-dessous ********************/
    
    int entier_naturel;
    printf("Veuillez entrer un entier naturel : ");
    scanf("%d", &entier_naturel);
    
    if(entier_naturel < 0) {
        printf("%d n'est pas un entier naturel, bouh\n", entier_naturel);
    } else {
        int n = 0, somme = 0;
        while (n <= entier_naturel) {
            somme += n;
            n++;
        }


        printf("La somme de tous les entiers naturels jusqu'à %d est %d \n", entier_naturel, somme);
    }

    /******************** Votre code ci-dessus *********************/

    return;
}


void exercice2_bis(void) {
    printf("\n\nEXERCICE 2 BIS\n\n");
    
    /******************** Votre code ci-dessous ********************/

     
    int entier_naturel;
    printf("Veuillez entrer un entier naturel : ");
    scanf("%d", &entier_naturel);
    
    if(entier_naturel < 0) {
        printf("%d n'est pas un entier naturel, bouh\n", entier_naturel);
    } else {
       int somme = 0;
       for(int n = 0; n <= entier_naturel; n++) {
        somme += n;
       }

        printf("La somme de tous les entiers naturels jusqu'à %d est %d \n", entier_naturel, somme);
    }

    /******************** Votre code ci-dessus *********************/

    return;
}


void exercice3(void) {
    printf("\n\nEXERCICE 3\n\n");
    
    /******************** Votre code ci-dessous ********************/

    int entier;
    printf("Veuillez entrer un nombre entier compris entre 0 et 6 : ");
    scanf("%d", &entier);

    if(entier == 0) {
        printf("Cet entier correspond au lundi\n");
    } else if(entier == 1) {
        printf("Cet entier correspond au mardi\n");
    } else if(entier == 2) {
        printf("Cet entier correspond au mercredi\n");
    } else if(entier == 3) {
        printf("Cet entier correspond au jeudi\n");
    } else if(entier == 4) {
        printf("Cet entier correspond au vendredi\n");
    } else if(entier == 5) {
        printf("Cet entier correspond au samedi\n");
    } else if(entier == 6) {
        printf("Cet entier correspond au dimanche\n");
    } else {
        printf("Cet entier n'est pas compris entre 0 et 6, bouh\n");

    }


    /******************** Votre code ci-dessus *********************/

    return;
}


void exercice3_bis(void) {
    printf("\n\nEXERCICE 3 BIS\n\n");
    
    /******************** Votre code ci-dessous ********************/

    int entier;
    printf("Veuillez entrer un nombre entier compris entre 0 et 6 : ");
    scanf("%d", &entier);

    switch(entier) {
        case(0) :
            printf("Cet entier correspond au lundi\n");
            break;
        case(1) :
            printf("Cet entier correspond au mardi\n");
            break;
        case(2) :
            printf("Cet entier correspond au mercredi\n");
            break;
        case(3) :
            printf("Cet entier correspond au jeudi\n");
            break;
        case(4) :
            printf("Cet entier correspond au vendredi\n");
            break;
        case(5) :
            printf("Cet entier correspond au samedi\n");
            break;
        case(6) :
            printf("Cet entier correspond au dimanche\n");
            break;
        default :
            printf("Cet entier n'est pas compris entre 0 et 6\n");
            break;
    }

    /******************** Votre code ci-dessus *********************/

    return;
}


void exercice4(void) {
    printf("\n\nEXERCICE 4\n\n");
    
    /******************** Votre code ci-dessous ********************/

    int entiers[5];
    int somme = 0;

    for(int i = 0; i < 5; i++) {
        printf("Entrez l'entier numéro %d : ", i+1);
        scanf("%d", &entiers[i]);
        somme += entiers[i];
    }

    printf("La somme de ces entiers donne %d\n", somme);

    /******************** Votre code ci-dessus *********************/

    return;
}


void exercice4_bis(void) {
    printf("\n\nEXERCICE 4 BIS\n\n");
    
    /******************** Votre code ci-dessous ********************/

    int entiers[5];
    int entier_min = 0, entier_max = 0;

    for(int i = 0; i < 5; i++) {
        printf("Entrez l'entier numéro %d : ", i+1);
        scanf("%d", &entiers[i]);

        if(i == 0) {
            entier_min = entiers[0];
            entier_max = entiers[0];
        } else {
            if(entiers[i] < entier_min) {
                entier_min = entiers[i];
            }
            if(entiers[i] > entier_max) {
                entier_max = entiers[i];
            }
        }
    }

    printf("Le plus petit entier de la liste est %d, le plus grand est %d\n", entier_min, entier_max);
   

    /******************** Votre code ci-dessus *********************/

    return;
}


void exercice5(void) {
    printf("\n\nEXERCICE 5\n\n");
    
    /******************** Votre code ci-dessous ********************/

    struct {
        char prenom[30];
        float note;
    } etudiant;

    printf("Entrez le prénom d'un étudiant : ");
    scanf("%s", etudiant.prenom);
    printf("Entrez sa note : ");
    scanf("%f", &etudiant.note);

    if(etudiant.note < 0 || etudiant.note > 6) {
         printf("Veuillez entrer une note comprise entre 0 et 6\n");
    } else if(etudiant.note < 4) {
        printf("Je suis navré de vous annoncer que %s a échoué à l'examen\n", etudiant.prenom);
    } else {
        printf("J'ai le plaisir de vous annoncer que %s a réussi l'examen !\n", etudiant.prenom);
    }


    /******************** Votre code ci-dessus *********************/

    return;
}


void exercice5_bis(void) {
    printf("\n\nEXERCICE 5 BIS\n\n");
    
    /******************** Votre code ci-dessous ********************/

     struct Etudiant {
        char prenom[30];
        float note;
    };

    struct Etudiant etudiant_1, etudiant_2, etudiant_3;

    struct Etudiant etudiants[3];

    for(int i = 0; i < 3; i++) {

        printf("Entrez le prénom de l'étudiant n°%d : ", i+1);
        scanf("%s", etudiants[i].prenom);
        printf("Entrez sa note : ");
        scanf("%f", &etudiants[i].note);

    }

    for(int i = 0; i < 3; i++) {

        if(etudiants[i].note < 0 || etudiants[i].note > 6) {
            printf("Veuillez entrer une note comprise entre 0 et 6\n");
        } else if(etudiants[i].note < 4) {
            printf("Je suis navré de vous annoncer que %s a échoué à l'examen\n", etudiants[i].prenom);
        } else {
            printf("J'ai le plaisir de vous annoncer que %s a réussi l'examen !\n", etudiants[i].prenom);
            }
    }

   

    /******************** Votre code ci-dessus *********************/

    return;
}


void exercice5_ter(void) {
    printf("\n\nEXERCICE 5 TER\n\n");
    
    /******************** Votre code ci-dessous ********************/

     struct Etudiant {
        char prenom[30];
        float note;
    };

    struct Etudiant etudiant_1, etudiant_2, etudiant_3;

    struct Etudiant etudiants[3];

    int size_of_table = 0, elements_in_table = 0;

    for(int i = 0; i < 3; i++) {

        printf("Entrez le prénom de l'étudiant n°%d : ", i+1);
        scanf("%s", etudiants[i].prenom);
        printf("Entrez sa note : ");
        scanf("%f", &etudiants[i].note);

    }

    size_of_table = sizeof(etudiants) / sizeof(struct Etudiant); 
    

    printf("Le tableau contient %d éléments\n", size_of_table);

    /******************** Votre code ci-dessus *********************/
}


void exercice6(void) {
    printf("\n\nEXERCICE 6\n\n");
    
    /******************** Votre code ci-dessous ********************/

    struct Passager {
        char prenom[30];
        int siege;
    };

    struct Vol {
        char depart[100];
        char destination[100];
        int duree;
        struct Passager passagers[2];
    };

    struct Vol vols[2];


    for(int i = 0; i < 2; i++) {
        printf("Entrez le lieu de départ du vol %d : ", i+1);
        scanf("%s", vols[i].depart);
        printf("Entrez le lieu de destination du vol %d : ", i+1);
        scanf("%s", vols[i].destination);
        printf("Entrez la duree du vol %d :", i+1);
        scanf("%d", &vols[i].duree);
    }

    for(int i = 0; i < 3; i++) {
        int numero_vol;
        numero_vol = 0;

        printf("Entrez le numéro de vol du passager %d : ", i+1);
        scanf("%d",&numero_vol);
        printf("Entrez le prénom du passager %d : ", i+1);
        scanf("%s", vols[numero_vol].passagers[i].prenom);
        printf("Entrez le numéro de siège du passager %d : ", i+1);
        scanf("%d", &vols[numero_vol].passagers[i].siege);
    }

    for(int i = 0; i < 2; i++) {
        int nombre_passagers;

        nombre_passagers = sizeof(vols[i].passagers) / sizeof(struct Passager);

        printf("Le vol au départ de %s et à destination de %s d'une durée de %d h attend les passagers suivants :\n", vols[i].depart, vols[i].destination, vols[i].duree);

        for(int j = 0; j < nombre_passagers; j++) {
             printf("Prénom : %s - siège n°%d\n", vols[i].passagers[j].prenom, vols[i].passagers[j].siege);
        }

    }


    /******************** Votre code ci-dessus *********************/

    return;
}


void exercice7(void) {
    printf("\n\nEXERCICE 7\n\n");
    
    /******************** Votre code ci-dessous ********************/

    /******************** Votre code ci-dessus *********************/

    return;
}


void exercice7_bis(void) {
    printf("\n\nEXERCICE 7 BIS\n\n");
    
    /******************** Votre code ci-dessous ********************/

    /******************** Votre code ci-dessus *********************/

    return;
}


int main(void) {   

    // Astuce : commenter tous les exercices sauf celui en cours pour gagner du temps !
    
    // exercice1();
    // exercice2();
    // exercice2_bis();
    // exercice3();
    // exercice3_bis();
    // exercice4();
    // exercice4_bis();
    // exercice5();
    // exercice5_bis();
    // exercice5_ter();
    exercice6();
    // exercice7();
    // exercice7_bis();

    return 0;
}
