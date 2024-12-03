// Aluno: Kauan Henrique Kaestner

// O código do grafo está em 'grafo.h'
// Nos arquivos '.c' estão a criação dos grafos


#include <stdio.h>
#include "grafo.h"


#define NUM_VERTICES 26


int main(){

    // Criação dos vértices
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
    Vertice *vL = criarVertice('L');
    Vertice *vM = criarVertice('M');
    Vertice *vN = criarVertice('N');
    Vertice *vO = criarVertice('O');
    Vertice *vP = criarVertice('P');
    Vertice *vQ = criarVertice('Q');
    Vertice *vR = criarVertice('R');
    Vertice *vS = criarVertice('S');
    Vertice *vT = criarVertice('T');
    Vertice *vU = criarVertice('U');
    Vertice *vV = criarVertice('V');
    Vertice *vW = criarVertice('W');
    Vertice *vX = criarVertice('X');
    Vertice *vY = criarVertice('Y');
    Vertice *vZ = criarVertice('Z');

    // Armazenando os vértices em um vetor
    Vertice* vertices[] = {vA, vB, vC, vD, vE, vF, vG, vH, vI, vJ, vK, vL, vM, vN, vO, vP, vQ, vR, vS, vT, vU, vV, vW, vX, vY, vZ};

    conectarVertices(vA, vB, 4);
    conectarVertices(vA, vC, 8);
    conectarVertices(vA, vD, 6);
    conectarVertices(vA, vE, 2);

    conectarVertices(vB, vC, 7);
    conectarVertices(vB, vD, 3);
    conectarVertices(vB, vF, 5);
    conectarVertices(vC, vD, 4);

    conectarVertices(vC, vE, 9);
    conectarVertices(vC, vG, 1);
    conectarVertices(vD, vE, 5);
    conectarVertices(vD, vH, 8);

    conectarVertices(vE, vF, 6);
    conectarVertices(vE, vI, 3);
    conectarVertices(vF, vG, 4);
    conectarVertices(vF, vH, 2);

    conectarVertices(vG, vI, 7);
    conectarVertices(vG, vJ, 6);
    conectarVertices(vH, vI, 5);
    conectarVertices(vH, vJ, 2);

    conectarVertices(vI, vK, 3);
    conectarVertices(vI, vL, 8);
    conectarVertices(vJ, vK, 4);
    conectarVertices(vJ, vL, 6);

    conectarVertices(vK, vM, 7);
    conectarVertices(vL, vM, 5);
    conectarVertices(vL, vN, 4);
    conectarVertices(vM, vN, 3);

    conectarVertices(vM, vO, 6);
    conectarVertices(vN, vO, 7);
    conectarVertices(vN, vP, 4);
    conectarVertices(vO, vP, 2);

    conectarVertices(vP, vQ, 5);
    conectarVertices(vQ, vR, 3);
    conectarVertices(vR, vS, 6);
    conectarVertices(vS, vT, 2);

    conectarVertices(vT, vU, 5);
    conectarVertices(vU, vV, 3);
    conectarVertices(vV, vW, 4);
    conectarVertices(vW, vX, 2);

    conectarVertices(vX, vY, 6);
    conectarVertices(vY, vZ, 1);
    conectarVertices(vZ, vA, 7);

    conectarVertices(vA, vF, 5);
    conectarVertices(vB, vG, 3);
    conectarVertices(vC, vH, 4);
    conectarVertices(vD, vI, 6);

    conectarVertices(vE, vJ, 7);
    conectarVertices(vF, vK, 3);
    conectarVertices(vG, vL, 5);
    conectarVertices(vH, vM, 6);

    conectarVertices(vI, vN, 2);
    conectarVertices(vJ, vO, 4);
    conectarVertices(vK, vP, 5);
    conectarVertices(vL, vQ, 2);

    conectarVertices(vM, vR, 6);
    conectarVertices(vN, vS, 3);
    conectarVertices(vO, vT, 8);
    conectarVertices(vP, vU, 4);

    conectarVertices(vQ, vV, 3);
    conectarVertices(vR, vW, 6);
    conectarVertices(vS, vX, 5);
    conectarVertices(vT, vY, 2);

    conectarVertices(vU, vZ, 4);
    conectarVertices(vV, vA, 6);
    conectarVertices(vW, vB, 3);
    conectarVertices(vX, vC, 7);

    conectarVertices(vY, vD, 4);
    conectarVertices(vZ, vE, 2);

    imprimirGrafo(vertices, NUM_VERTICES);
    liberarMemoria(vertices, NUM_VERTICES);


    return 0;
}