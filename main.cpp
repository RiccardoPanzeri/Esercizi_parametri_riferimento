#include <stdio.h>
#include <string.h>
#include "prototipi.h"
#include <math.h>
#include <cstdlib>
#include <ctime>
#define dim 10
using namespace std;

int main(){
    srand(time(0));
    int a = 10;
    int b = 6;
    int risultato = 0;



    //esercizio 1: funzione che eleva al quadrato due numeri.
    //i numeri vengono sommati nel main e mantengono il cambiamento effettuato nella funzione perchè passati per riferimento;
    quadrati(a, b);
    risultato = a + b;
    printf("somma dei quadrati: %d\n\n\n", risultato);

    //esercizio2: funzione che trova l'indice massimo in un array di interi;
    int array[dim];
    int indMax = 0;
    caricaVettore(array, dim);
    visualizzaVettore(array, dim);
    indicemax(array, dim, indMax);
    printf("l'indice massimo è: %d\n\n\n", indMax);
    //esercizio 3: somma dei valori contenuti in un array;
    int totale = 0;
    sommaArray(array, dim, totale);
    printf("totale dei valori dell'array: %d\n\n\n", totale);

    //esercizio 4: contare il numero di consonanti in una stringa:
    char stringa[100] = "Stringa a caso";
    int contatore = 0;
    contaCons(stringa, contatore);
    printf("La stringa contiene %d consonanti.\n\n\n", contatore);

    //esercizio5: convertire un numero nel suo equivalente binario: non ho capito il senso di qusto esercizio, dato che la stringa, essendo un array, è sempre passata per riferimento.
    char strBinario[100] = "";
    int numeroDec = 1488;
    binario(numeroDec, strBinario);
    printf("%s\n", strBinario);




    return 0;
}