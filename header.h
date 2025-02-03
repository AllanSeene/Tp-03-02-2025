#ifndef Piano_h
#define Piano_h

struct Note
{
    float frequence;
    int duree;
};

struct Note* creerNote(float frequence, int duree);
void libereNote(struct Note *note);
void simulerPiano(struct Note **note);

#endif