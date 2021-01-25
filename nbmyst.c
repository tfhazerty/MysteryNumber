#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Library C 
int main(void){
    const int max = 100, min = 1; // Declaration and assignment of a variable of type int which is constant
    //
    int nbjeu; //Declaration of a variable 
    //
    srand(time(NULL));
    int nombreMystere = (rand() % (max  - min + 1))+ min; //Declaration of a variable that generates a random number 
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
    else if (nbjeu > nombreMystere) //the game made with a while loop and the conditions
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
