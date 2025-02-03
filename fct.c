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