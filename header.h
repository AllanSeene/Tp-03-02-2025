#ifndef Piano_h
#define Piano_h

struct Note
{
    int frequence;
    int duree;
};

int creerNote(int frequence, int duree);
void libereNote(struct Note *note);
#endif