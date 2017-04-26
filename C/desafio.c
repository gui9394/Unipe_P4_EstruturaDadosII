#include "head.h"

int main(int argc, char const *argv[]) {
    int entrada_1[2] = {6, 5};
    int entrada_2[5] = {2, 2, 2, 2, 1};

    int list_elementos[6] = {1, 2, 3, 4, 5, 6};
    int indice = 0;
    int aux = 0;

    for(int turno = 6; turno > -1; turno--) {
        for(int indice = turno, permutacao = 0; permutacao < entrada_2[turno]; permutacao++, indice++) {
            aux = list_elementos[indice];
            list_elementos[indice] = list_elementos[indice + 1];
            list_elementos[indice + 1] = aux;
        }
    }

    printf("\n");
    for(int x = 0; x < 6; x ++){
        printf("%d ", list_elementos[x]);
    }
    printf("\n");
    return 0;
}
