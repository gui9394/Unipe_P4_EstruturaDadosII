// Include's
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Verificar em qual sistema esta sendo compilado
#if defined(_WIN32) || defined(WIN32) // Windows
#define flush fflush(stdin)
#define clear system("cls")
#else       					      // Linux
#include <stdio_ext.h>
#define flush __fpurge(stdin)
#define clear system("clear")
#endif

typedef struct struct_no{
	unsigned int dado;
	struct struct_no *prox;
}type_no;

void criar_lista(type_no *lista, int quantidade_itens);
void exibe_lista(type_no *lista);
void inserir_inicio(type_no *lista, int valor);
void libera_memoria(type_no *lista);
void trocar_item(type_no *lista, int indice);
int lista_esta_vazia(type_no *lista);
