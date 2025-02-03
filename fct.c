#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int *creerNote(int frequence, int duree){
    struct Note *note = malloc(sizeof(struct Note));
    note -> frequence = frequence;
    note -> duree = duree;
    return note;
}

void libereNote(struct Note *note){
    free(note);
    note = NULL;
}

void simulerPiano (struct Note **note){

    while (1)
    {
        int a = getchar();
        if (a == 'q')
        {
            break;
        }
        else if (a == 'a')
        {
            printf("DO : %d \n", note[0] -> frequence);
        }
        else if (a == 'z')
        {
            printf("RE : %d\n", note[2] -> frequence);
        }
        else if (a == 'e')
        {
            printf("MI : %d\n", note[4] -> frequence);
        }
        else if (a == 'r')
        {
            printf("FA : %d\n", note[5] -> frequence);
        }
        else if (a == 't')
        {
            printf("SOL : %d\n", note[7] -> frequence);
        }
        else if (a == 'y')
        {
            printf("LA : %d\n", note[9] -> frequence);
        }
        else if (a == 'u')
        {
            printf("SI : %d\n", note[11] -> frequence);
        }  
    }
}