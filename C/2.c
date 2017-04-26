#include "head.h"

int main(int argc, char const *argv[]) {
    type_no *lista = (type_no *) malloc(sizeof(type_no));
	lista->prox = NULL;

    int entrada_1[2] = {6, 5};
    criar_lista(lista, entrada_1[0]);
    int entrada_2[5] = {2, 2, 2, 2, 1};
    int indice = 0;

    for(int turno = entrada_1[1]; turno > -1; turno--) {
        for(int indice = turno, permutacao = 0; permutacao < entrada_2[turno]; permutacao++, indice++) {
            printf("turno %d   permutacao %d   indice %d\n", turno, permutacao, indice);
            trocar_dado(lista, indice);
        }
    }

    exibe_lista(lista);
    libera_memoria(lista);

    return 0;
}
