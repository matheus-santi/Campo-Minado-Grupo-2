#include <stdio.h>
#include <stdlib.h>

int tam = 10;

int coordenadaEhValida(int l, int c) {
    if(l >= 0 && l < tam && c >=0 && c < tam)
        return 1;
    else
        return 0;
}

int main () {

    //...
    return 0;
}
