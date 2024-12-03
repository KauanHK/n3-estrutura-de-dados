#include <stdio.h>
#include <stdlib.h>



// Declaração do struct vértice para definir 'dest' no struct aresta
struct vertice;

// Armazena o vértice destino, o peso e aponta para a próxima aresta, ou seja, funciona como uma lista
typedef struct aresta {
    struct vertice *dest;
    int peso;
    struct aresta *prox;
} Aresta;

// Armazena um id e aponta para a primeira aresta do vértice
typedef struct vertice {
    char id;
    Aresta *aresta;
} Vertice;


// Retorna um ponteiro Vertice com o identificador 'id'
Vertice *criarVertice(char id){
    Vertice *vertice = (Vertice*) malloc(sizeof(Vertice));
    vertice->id = id;
    vertice->aresta = NULL;
    return vertice;
}

// Retorna um ponteiro Aresta que armazena vértice destino e o seu peso
Aresta *criarAresta(Vertice *dest, int peso){

    Aresta *aresta = (Aresta*) malloc(sizeof(Aresta));
    aresta->dest = dest;
    aresta->peso = peso;
    aresta->prox = NULL;
    return aresta;

}

// Conecta um vértice ao outro, na direção de v1 para v2
void conectarVertices(Vertice *v1, Vertice *v2, int peso){
    
    Aresta **aresta = &v1->aresta;
    while (*aresta != NULL){
        aresta = &(*aresta)->prox;
    }
    *aresta = criarAresta(v2, peso);

}

// Imprime o grafo no formato (vertice, destino, peso)
void imprimirGrafo(Vertice **vertices, int length){

    Aresta *aresta;
    for (int i = 0; i < length; i++){

        aresta = vertices[i]->aresta;
        while (aresta != NULL){
            printf("(%c, %c, %d)\n", vertices[i]->id, aresta->dest->id, aresta->peso);
            aresta = aresta->prox;
        }

    }

}

// Libera a memória alocada pelo malloc
void liberarMemoria(Vertice **vertices, int length){

    Aresta *aresta, *aux;
    for (int i = 0; i < length; i++){
        aresta = vertices[i]->aresta;
        while (aresta != NULL){
            aux = aresta;
            aresta = aresta->prox;
            free(aux);
        }
        free(vertices[i]);

    }

}