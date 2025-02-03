#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#include <conio.h>

struct Note* creerNote(float frequence, int duree){
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

    int a;
    while (1)
    {
        if (kbhit())
        {
            a = getch();

            if (a == 'q')
            {
                break;
            }
            else if (a == 'a')
            {
                printf("DO : %f \n", note[0] -> frequence);
            }
            else if (a == 'z')
            {
                printf("RE : %f\n", note[2] -> frequence);
            }
            else if (a == 'e')
            {
                printf("MI : %f\n", note[4] -> frequence);
            }
            else if (a == 'r')
            {
                printf("FA : %f\n", note[5] -> frequence);
            }
            else if (a == 't')
            {
                printf("SOL : %f\n", note[7] -> frequence);
            }
            else if (a == 'y')
            {
                printf("LA : %f\n", note[9] -> frequence);
            }
            else if (a == 'u')
            {
                printf("SI : %f\n", note[11] -> frequence);
            }
        }
          
    }
}