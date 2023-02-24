#include <stdio.h>
#include <string.h>
#include "prototipi.h"
#include <math.h>
using namespace std;

void quadrati(int &a, int &b){
    a = pow(a, 2);
    b =pow(b, 2);

}
void caricaVettore(int array[], int dim){
    for(int i = 0; i < dim; i++){
        array[i] = rand() % 101;
    }
}

void visualizzaVettore(int array[], int dim){
    for(int i = 0; i< dim; i++){
        printf("%d\n", array[i]);
    }

}

void indicemax(int array[], int dim, int &indice){//voglio modificare solo indice, quindi non passo la dimensione per riferimento;
    int max = 0;
    for(int i = 0; i < dim; i++){
        if(array[i] > max){
            max = array[i];
            indice = i;//inserisco il valore di max nella variabile passata per riferimento, per verificare se il cambiamento verrà mantenuto nel main;
        }
    }

}
void sommaArray(int array[], int dim, int &totale){
    for(int i = 0; i < dim; i++){
        totale += array[i];
    }

}


void contaCons(char stringa[], int &nCons){
    for(int i = 0; i < strlen(stringa); i++){
        if((stringa[i] >= 65 && stringa[i] <= 90 ||stringa[i] >= 97 && stringa[i] <=122) && (stringa[i] != 'a' && stringa[i] != 'e' &&stringa[i] != 'i' &&stringa[i] != 'o' &&stringa[i] != 'u'
        &&stringa[i] != 'A' &&stringa[i] != 'E' &&stringa[i] != 'I' &&stringa[i] != 'O' &&stringa[i] != 'U')){
            nCons++;

}
    }


}

void binario(int num, char binario[]){
    int resto = 0;
    int i = 0;
    //effettuo il calcolo per convertire in binario un decimale;
    while(num > 0){
        resto = num % 2;
        num = num / 2;
        binario[i] = resto + 48;
        i++;

    }
    //inverto l'ordine dei caratteri, per ottenere il numero binario corretto;
    int j = strlen(binario) -1;
    i = 0;
    int temp = 0;//variabile di appoggio
    while(i != j){
        temp = binario[i];
        binario[i] = binario[j];
        binario[j] = temp;
        j--;
        i++;

    }
}