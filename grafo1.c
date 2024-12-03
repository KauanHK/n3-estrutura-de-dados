// Aluno: Kauan Henrique Kaestner

// O código do grafo está em 'grafo.h'
// Nos arquivos '.c' estão a criação dos grafos


#include <stdio.h>
#include "grafo.h"



#define NUM_VERTICES 11

int main(){

    Vertice *vA = criarVertice('A');
    Vertice *vB = criarVertice('B');
    Vertice *vC = criarVertice('C');
    Vertice *vD = criarVertice('D');
    Vertice *vE = criarVertice('E');
    Vertice *vF = criarVertice('F');
    Vertice *vG = criarVertice('G');
    Vertice *vH = criarVertice('H');
    Vertice *vI = criarVertice('I');
    Vertice *vJ = criarVertice('J');
    Vertice *vK = criarVertice('K');

    Vertice* vertices[] = {vA, vB, vC, vD, vE, vF, vG, vH, vI, vJ, vK};

    // Ligações do vértice A
    conectarVertices(vA, vB, 4);
    conectarVertices(vA, vC, 2);
    conectarVertices(vA, vD, 5);

    // Ligações do vértice B
    conectarVertices(vB, vC, 1);
    conectarVertices(vB, vE, 7);
    conectarVertices(vB, vF, 3);

    // Ligações do vértice C
    conectarVertices(vC, vD, 2);
    conectarVertices(vC, vG, 6);

    // Ligações do vértice D
    conectarVertices(vD, vE, 4);
    conectarVertices(vD, vH, 8);

    // Ligações do vértice E
    conectarVertices(vE, vF, 1);
    conectarVertices(vE, vI, 5);

    // Ligações do vértice F
    conectarVertices(vF, vG, 2);
    conectarVertices(vF, vJ, 4);

    // Ligações do vértice G
    conectarVertices(vG, vH, 3);
    conectarVertices(vG, vK, 7);

    // Ligações do vértice H
    conectarVertices(vH, vI, 6);

    // Ligações do vértice I
    conectarVertices(vI, vJ, 3);

    // Ligações do vértice J
    conectarVertices(vJ, vK, 2);

    // Ligações do vértice K
    conectarVertices(vK, vA, 8);

    imprimirGrafo(vertices, NUM_VERTICES);
    liberarMemoria(vertices, NUM_VERTICES);


    return 0;
}