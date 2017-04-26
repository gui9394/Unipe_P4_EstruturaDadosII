#include "head.h"

void criar_lista(type_no *lista, int quantidade_itens){
    for (; quantidade_itens > 0; quantidade_itens--) {
        inserir_inicio(lista, quantidade_itens);
    }
}

void exibe_lista(type_no *lista) {
	type_no *pointer = lista->prox;

	while(pointer != NULL){
		printf("%3d", pointer->dado);
		pointer = pointer->prox;
	}
	printf("\n\n");
}

void inserir_inicio(type_no *lista, int valor) {
    type_no *novo = (type_no *) malloc(sizeof(type_no));
    novo->dado = valor;
    novo->prox = lista->prox;
    lista->prox = novo;
}

void libera_memoria(type_no *lista) {
	if(!lista_esta_vazia(lista)){
		type_no *proximo, *atual;

		atual = lista->prox;
		while(atual != NULL){
			proximo = atual->prox;
			free(atual);
			atual = proximo;
		}
    }
}

type_no * pegar_no(type_no *lista, int indice){
    int x = -1;

    while (x != indice) {
        lista = lista->prox;
        x++;
    }

    return lista;
}

void trocar_dado(type_no *lista, int indice) {
    type_no *atual = (type_no *) pegar_no(lista, indice);
    type_no *proximo = atual->prox;
    unsigned int aux;

    aux = proximo->dado;
    proximo->dado = atual->dado;
    atual->dado = aux;

}

int lista_esta_vazia(type_no *lista) {
	if(lista->prox == NULL)
		return 1;
	else
		return 0;
}
