#include <stdio.h>
#include <stdlib.h>
#include "header.h"

#define mu_assert(message, test) do { if (!(test)) return message; } while (0)
#define mu_run_test(test) do { char *message = test(); tests_run++; if (message) return message; } while (0)

int tests_run = 0;  
// int carre(int a) {
//     return a * a;
// }

// static char *test_carre_positif(){
//     int c= carre(3);
//     mu_assert("Assert failed carre() Le carre de 3 est 9\n", c== 3 * 3);
//     return 0;
// }

// static char* test_carre_negatif(){
//     int c= carre(-5);
//     mu_assert("Assert failed carre() Le carre de -5 est 25\n", c== 25);
//     return 0;
// }

// static char* test_carre_nul(){
//     int c= carre(0);
//     mu_assert("Assert failed carre() Le carre de 0 est 0\n", c== 0);
//     return 0;
// }

// static char * all_tests() {
//     mu_run_test(test_carre_positif);
//     mu_run_test(test_carre_negatif);
//     mu_run_test(test_carre_nul);
//     return 0;
// }

// const char* categorize_age(int age)  
// { 
// if (age < 0) { 
// return "Invalid age"; 
// }  
// else if (age < 13) { 
// return "Child"; 
// }  
// else if (age < 20) { 
// return "Teenager"; 
// }  
// else if (age < 65) { 
// return "Adult"; 
// }  
// else { 
// return "Senior"; 
// } 
// } 

// static char * tests_age_invalide(){
//     int age = -1;
//     mu_assert("Assert failed age(), age < 0 Invalid age\n", age < 0);   
//     return 0;
// }

// static char * tests_age_child(){
//     int age = 10;
//     mu_assert("Assert failed age(), age <13 && age>=0 Child\n", age < 13 && age >= 0);
//     return 0;
// }

// static char * tests_age_Teenager(){
//     int age = 15;
//     mu_assert("Assert failed age(), age < 20 && age >=13 Teenager\n", age < 20 && age >= 13);
//     return 0;  
// }

// static char * tests_age_Adult(){
//     int age = 30;
//     mu_assert("Assert failed age(), age < 65 && age >= 20 Invalid age\n", age < 65 && age >= 20);
//     return 0;
// }

// static char * tests_age_Senior(){
//     int age = 70;
//     mu_assert("Assert failed age(), age > 65 Senior\n", age >65);
//     return 0;
// }

// static char * all_tests() {
//     mu_run_test(tests_age_invalide);
//     mu_run_test(tests_age_child);
//     mu_run_test(tests_age_Teenager);
//     mu_run_test(tests_age_Adult);
//     mu_run_test(tests_age_Senior);
//     return 0;
//}


int main(){

    printf("Entrez des notes en appuyant sur les touches suivantes : 'a' 'z' 'e' 'r' 't' 'y' 'u'\n");
    float frequencies[12] = { 261.63, 277.18, 293.66, 311.13, 329.63, 349.23, 369.99, 392.00, 415.30, 440.00, 466.16, 493.88 };
    struct Note ** notes = malloc(12 * sizeof(struct Note *));
    for (int i = 0; i < 12; i++)
    {
        notes[i] = creerNote(frequencies[i], 1);
    }
    simulerPiano(notes);
    for (int i = 0; i < 12; i++)
    {
        libereNote(notes[i]);
    }
    free(notes);
    notes = NULL;
    return 0;
}