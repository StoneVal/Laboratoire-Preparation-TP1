/**
 * \file fonctionsUtilitaires.cpp
 * à corriger
 */

#include "fonctionsUtilitaires.h"
#include <iostream>
// Erreur bug1 documentée et corrigée.
using namespace std;
   
void bug_1()
{
    int age{60};

    if (age >= 65)
        cout << "L'âge est supérieur ou égal à 65.\n";      
    else
        cout << "L'âge est inférieur à 65.\n";
} 

void bug_2()
{
    int entier1; // déclarations
    int entier2;
    // ou int somme;
    cout << "Entrer un premier entier:\n"; // affichage
    cin >> entier1; // lire un entier
    cout << "Entrer un second entier:\n"; // affichage
    cin >> entier2; // lire un entier
    int somme = entier1 + entier2; // assignation de somme
    cout << "La somme est " << somme << ".\n"; // afficher somme
}



/* bug_3: Évaluation des nombres paire contenu entre 0 et 9 .
 * 
 *  Programme qui prend les nombre de 0 à 9 et valide s'il est paire 
 *  en appliquant la formule du modulo 
 *  si le reste de la division est égale à zéro "0" , donc il affiche le "x" 
 *  qui est le nombre 0 à 9 et indique qu'il est pair. 
 *  si non il additionne un à la valeur x et le met dans la variable total
 *  à la fin du programme lorsqu'il est rendu à 9 ,
 *  il retourne à l'écran "Le programme termine et le total est <total>" ,
 *  total étant la dernier valeur évalué +1 = 10 qui est le nombre de valeur évalué.
 */
void bug_3()
{
    int total{0};

    for (int x{0}; x <= 10; ++x)
        if (x % 2 == 0)
        {
            cout << x << " pair\n";
        }
    total += x;

    cout << "Le programme termine et le total est " << total << ".\n";
}
/* bug_4: Programme qui calcul les notes (5 notes) et retour la moyenne
 * 
 *  Le programme demande "Entrer une note: " doit être une entier 
 *  jusqu'on atteindre 5 note (0-1-2-3-4) notes au total, 
 *  ensuite il calcule la moyenne en le divisant par 5 et 
 *  affiche "La moyenne de la classe est <moyenn>",
 *  moyenne étant égale l'addition de toute les notes dicisé par 5. 
 *  */

void bug_4()
{
    int total; // somme des notes
    int notesSaisies{0}; // compteur de notes saisies
    const int NOMBRE_NOTES_A_SAISIR{5};
    int maximum;

    while (notesSaisies < NOMBRE_NOTES_A_SAISIR)
    {
        cout << "Entrer une note: ";
        int note; // une note
        cin >> note; // saisie d'une note
        total = total + note;
        notesSaisies = notesSaisies + 1; // incrémentation du compteur
    }
    int moyenne; // moyenne des notes
    moyenne = total / NOMBRE_NOTES_A_SAISIR;
    cout << "La moyenne de la classe est " << moyenne << ".\n";
}
/* bug_5: Programme retourne les nombres de 0 à y exclut,
 *  y étant 1 (un point d'arrêt)
 * 
 *  Le programme retour 0  à l'écran .
 * 
 */
void bug_5()
{
    int y{1};

    while (y > 0)
    {
        cout << y << "\n";
        ++y;
    }
}
