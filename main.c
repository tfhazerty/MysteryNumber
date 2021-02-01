#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    unsigned int max;
    unsigned int *pointeurMax = &max;
    int min = 1;
    int i = 1;
    int continuerpartie = 1;
    //
    int nbjeu = 0;
    unsigned int nbjeu2;
    unsigned int *pointeurJeu2 = &nbjeu2;
    unsigned int nbjeu3 = 0; 
    int choixmenu = 0;
    int choixmenu2 = 0;
    //
    srand(time(NULL));
    //int nombreMystere = (rand() % (max  - min + 1))+ min;
    //
    system("cls");
    printf("<---------MENU--------->\n");
    printf("1. Mode 1 joueur.\n");
    printf("2. Mode 2 joueurs.\n\n");
    printf("3. Quitter\n");
    scanf("%d", &choixmenu);
    ///////////
    switch(choixmenu){
        case 1:
        system("cls");
        printf("----------------NIVEAUX--------------------\n");
        printf("1. Niveau 1 -- 0 a 100\n");
        printf("2. Niveau 2 -- 0 a 1000\n");
        printf("3. Niveau 3 -- 0 a 10000\n");
        printf("4. Choisir mon nombre maximum. \n");
        scanf("%d", &choixmenu2);
        if (choixmenu2 == 1)
        {
            min = 0;
            max = 100;
            int nombreMystere = (rand() % (max  - min + 1))+ min;
            printf("Votre nombre a ete generer !\n");
            scanf("%d", &nbjeu);
            
            while (nbjeu3 !=  nombreMystere){
            if (nbjeu < nombreMystere)
            {
                printf("C'est plus!\n");
                scanf("%d", &nbjeu);
            }
            else if (nbjeu > nombreMystere)
            {
                printf("C'est moins!\n");
                scanf("%d", &nbjeu);
            }
            i++;
            }
            if (nbjeu == nombreMystere){
                printf("Bravo, vous avez gagnez !!!\nEn %d coups\n", i);
            }
        }
        else if (choixmenu2 == 2)
        {
            min = 0;
            max = 1000;
            int nombreMystere = (rand() % (max  - min + 1))+ min;
            printf("Votre nombre a ete generer !\n");
            scanf("%d", &nbjeu);
            
            while (nbjeu !=  nombreMystere){
            if (nbjeu < nombreMystere)
            {
                printf("C'est plus!\n");
                scanf("%d", &nbjeu);
            }
            else if (nbjeu > nombreMystere)
            {
                printf("C'est moins!\n");
                scanf("%d", &nbjeu);
            }
            i++;
            }
            if (nbjeu == nombreMystere){
                printf("Bravo, vous avez gagnez !!!\nEn %d coups\n", i);
            }
        }
        else if (choixmenu2 == 3)
        {
            min = 0;
            max = 10000;
            int nombreMystere = (rand() % (max  - min + 1))+ min;
            printf("Votre nombre a ete generer !\n");
            scanf("%d", &nbjeu);
            
            while (nbjeu !=  nombreMystere){
            if (nbjeu < nombreMystere)
            {
                printf("C'est plus!\n");
                scanf("%d", &nbjeu);
            }
            else if (nbjeu > nombreMystere)
            {
                printf("C'est moins!\n");
                scanf("%d", &nbjeu);
            }
            i++;
            }
            if (nbjeu == nombreMystere){
                printf("Bravo, vous avez gagnez !!!\nEn %d coups\n", i);
            }
        }
        else if (choixmenu2 == 4)
        {
            system("cls");
            printf("Vous devez choisir le nombre maximum, allez-y (jusqu'a 4,294,967,295)\n");
            scanf("%d", &*pointeurMax);
            printf("Vous avez bien saisie %d\n", *pointeurMax);
            /////////////
            unsigned int nombreMystere = (rand() % (*pointeurMax  - min + 1))+ min;
            printf("Votre nombre a ete generer !\n");
            scanf("%d", &nbjeu3);
            
            while (nbjeu3 !=  nombreMystere){
            if (nbjeu3 < nombreMystere)
            {
                printf("C'est plus!\n");
                scanf("%d", &nbjeu3);
            }
            else if (nbjeu3 > nombreMystere)
            {
                printf("C'est moins!\n");
                scanf("%d", &nbjeu3);
            }
            }
            if (nbjeu3 == nombreMystere){
                printf("Bravo, vous avez gagnez !!!");
            }
        }
    break;
    /////////////
    case 2:
        system("cls");
        printf("Bienvenu dans le mode 2 joueurs !\nUn des deux joueurs est obliger de saisir un nombre pour que le second le devienne (jusqu'a 4,294,967,295)\n");
        scanf("%d", &*pointeurJeu2);
        system("cls"); 
        printf("Maintenant au second joueur de devinnez !!! x)\n");
        scanf("%d", &nbjeu3);
        while (nbjeu3 != *pointeurJeu2)
    {
        if (nbjeu3 < *pointeurJeu2)
    {
        printf("C'est plus\n");
        scanf("%d", &nbjeu3);
    }
    else if (nbjeu3 > *pointeurJeu2)
    {
        printf("C'est moins\n");
        scanf("%d", &nbjeu3);
    }
    i++;
    }
    if (nbjeu3 == *pointeurJeu2)
    {
        printf("Bravo, tu as gagne !\nEn %d coups\n", i);
    }
    break;

    ///////////
    case 3:
        system("cls");
        printf("A la prochaine !\n");
        return 0;
        break;
    default:
    printf("Vous avez saisie n'importe quoi !!!\n");
    break;
    }
    
while(continuerpartie == 1){
printf("Voulez vous rejouez ?\n");
printf("Tapez 1 pour rejouez, tapez 0 pour quitter le programme.\n");
scanf("%d", &continuerpartie);
    while (continuerpartie == 1)
    {
    system("cls");
    printf("<---------MENU--------->\n");
    printf("1. Mode 1 joueur.\n");
    printf("2. Mode 2 joueurs.\n\n");
    printf("3. Quitter\n");
    scanf("%d", &choixmenu);
    ///////////
    switch(choixmenu){
        case 1:
        system("cls");
        printf("----------------NIVEAUX--------------------\n");
        printf("1. Niveau 1 -- 0 a 100\n");
        printf("2. Niveau 2 -- 0 a 1000\n");
        printf("3. Niveau 3 -- 0 a 10000\n");
        printf("4. Choisir mon nombre maximum. \n");
        scanf("%d", &choixmenu2);
        if (choixmenu2 == 1)
        {
            min = 0;
            max = 100;
            int nombreMystere = (rand() % (max  - min + 1))+ min;
            printf("Votre nombre a ete generer !\n");
            scanf("%d", &nbjeu);
            
            while (nbjeu3 !=  nombreMystere){
            if (nbjeu < nombreMystere)
            {
                printf("C'est plus!\n");
                scanf("%d", &nbjeu);
            }
            else if (nbjeu > nombreMystere)
            {
                printf("C'est moins!\n");
                scanf("%d", &nbjeu);
            }
            i++;
            }
            if (nbjeu == nombreMystere){
                printf("Bravo, vous avez gagnez !!!\nEn %d coups\n", i);
            }
        }
        else if (choixmenu2 == 2)
        {
            min = 0;
            max = 1000;
            int nombreMystere = (rand() % (max  - min + 1))+ min;
            printf("Votre nombre a ete generer !\n");
            scanf("%d", &nbjeu);
            
            while (nbjeu !=  nombreMystere){
            if (nbjeu < nombreMystere)
            {
                printf("C'est plus!\n");
                scanf("%d", &nbjeu);
            }
            else if (nbjeu > nombreMystere)
            {
                printf("C'est moins!\n");
                scanf("%d", &nbjeu);
            }
            i++;
            }
            if (nbjeu == nombreMystere){
                printf("Bravo, vous avez gagnez !!!\nEn %d coups\n", i);
            }
        }
        else if (choixmenu2 == 3)
        {
            min = 0;
            max = 10000;
            int nombreMystere = (rand() % (max  - min + 1))+ min;
            printf("Votre nombre a ete generer !\n");
            scanf("%d", &nbjeu);
            
            while (nbjeu !=  nombreMystere){
            if (nbjeu < nombreMystere)
            {
                printf("C'est plus!\n");
                scanf("%d", &nbjeu);
            }
            else if (nbjeu > nombreMystere)
            {
                printf("C'est moins!\n");
                scanf("%d", &nbjeu);
            }
            i++;
            }
            if (nbjeu == nombreMystere){
                printf("Bravo, vous avez gagnez !!!\nEn %d coups\n", i);
            }
        }
        else if (choixmenu2 == 4)
        {
            system("cls");
            printf("Vous devez choisir le nombre maximum, allez-y (jusqu'a 4,294,967,295)\n");
            scanf("%d", &*pointeurMax);
            /////////////
            unsigned int nombreMystere = (rand() % (*pointeurMax  - min + 1))+ min;
            printf("Votre nombre a ete generer !\n");
            scanf("%d", &nbjeu3);
            
            while (nbjeu3 !=  nombreMystere){
            if (nbjeu3 < nombreMystere)
            {
                printf("C'est plus!\n");
                scanf("%d", &nbjeu3);
            }
            else if (nbjeu3 > nombreMystere)
            {
                printf("C'est moins!\n");
                scanf("%d", &nbjeu3);
            }
            }
            if (nbjeu3 == nombreMystere){
                printf("Bravo, vous avez gagnez !!!");
            }
        }
    break;
    /////////////
    case 2:
        system("cls");
        printf("Bienvenu dans le mode 2 joueurs !\nUn des deux joueurs est obliger de saisir un nombre pour que le second le devienne (jusqu'a 4,294,967,295)\n");
        scanf("%d", &*pointeurJeu2);
        system("cls"); 
        printf("Maintenant au second joueur de devinnez !!! x)\n");
        scanf("%d", &nbjeu3);
        while (nbjeu3 != *pointeurJeu2)
    {
        if (nbjeu3 < *pointeurJeu2)
    {
        printf("C'est plus\n");
        scanf("%d", &nbjeu3);
    }
    else if (nbjeu3 > *pointeurJeu2)
    {
        printf("C'est moins\n");
        scanf("%d", &nbjeu3);
    }
    i++;
    }
    if (nbjeu3 == *pointeurJeu2)
    {
        printf("Bravo, tu as gagne !\nEn %d coups\n", i);
    }
    break;

    ///////////
    case 3:
        system("cls");
        printf("A la prochaine !\n");
        return 0;
        break;
    default:
    printf("Vous avez saisie n'importe quoi !!!\n\n");
    break;
    }
    }
}
    
    getc(5000);
    return 0;
}
