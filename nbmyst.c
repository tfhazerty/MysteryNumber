#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    const int max = 100, min = 1;
    //
    int nbjeu;
    int nbjeu2; 
    int choixMenu;
    //
    srand(time(NULL));
    int nombreMystere = (rand() % (max  - min + 1))+ min;
    //
    printf("<---------MENU--------->\n");
    printf("1. Mode 1 joueur.\n");
    printf("2. Mode 2 joueurs.\n\n");
    printf("3. Quitter\n");
    scanf("%d", &choixMenu);
    ///////////
    switch(choixMenu){
        case 1:
        printf("----------------NIVEAUX--------------------");
        printf("1. Niveau 1 -- 0 a 100");
        printf("1. Niveau 1 -- 0 a 1000");
        printf("1. Niveau 1 -- 0 a 10000");
    break;
    /////////////
    case 2:
    
        printf("Bienvenu dans le mode 2 joueurs !\nUn des deux joueurs est obliger de saisir un nombre pour que le second le devienne\n");
        scanf("%d", &nbjeu2);
        system("cls"); 
        printf("\nMaintenant au second joueur de devinnez !!! x)\n");
        scanf("%d", &nbjeu);
        while (nbjeu != nbjeu2)
    {
        if (nbjeu < nbjeu2)
    {
        printf("C'est plus\n");
        scanf("%d", &nbjeu);
    }
    else if (nbjeu > nbjeu2)
    {
        printf("C'est moins\n");
        scanf("%d", &nbjeu);
    }
    }
    if (nbjeu == nbjeu2)
    {
        printf("Bravo, tu as gagne !");
    }
    break;

    ///////////
    case 3:
        printf("A la prochaine !\n");
        return 0;
        break;

    }
    
    
    getc(5000);
    return 0;
}
