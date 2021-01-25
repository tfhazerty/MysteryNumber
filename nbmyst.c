#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    const int max = 100, min = 1;
    //
    int nbjeu;
    //
    srand(time(NULL));
    int nombreMystere = (rand() % (max  - min + 1))+ min;
    //
    printf("Votre nombre a etait generer !\n");
    scanf("%d", &nbjeu);

    while (nbjeu != nombreMystere)
    {
        if (nbjeu < nombreMystere)
    {
        printf("C'est plus\n");
        scanf("%d", &nbjeu);
    }
    else if (nbjeu > nombreMystere)
    {
        printf("C'est moins\n");
        scanf("%d", &nbjeu);
    }
    }
    if (nbjeu == nombreMystere)
    {
        printf("Bravo, tu as gagne !");
    }
    /*printf("Voulez vous rejouez ? \n Tapez 1 pour rejouez.\n")*/
    return 0;
}