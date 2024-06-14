#ifndef __arbolb_H
#define __arbolb_H


#define TRUE 1
#define FALSE 0

typedef unsigned char boolean;

typedef struct {
    int n;
}elemento;

typedef struct nodo{
    elemento e;
    struct nodo *hijoD;
    struct nodo *hijoI;
    void *apellido;
}nodo;

typedef posicion *nodo;
//OPERACIONES DE CONSTRUCCION
void Initialize(arbol *A);
void Destroy(arbol *A);

//OPERCIONES DE BUSQUEDA
posicion Root(arbol *A);
posicion Parent(arbol *A, posicion p);
posicion RightSon(arbol *A, posicion p);
posicion LeftSon(arbol *A, posicion p);
posicion Search(arbol *A, elemento e);

//OPERACIONES DE CONSULTA
boolean Empty(arbol *A);
boolean NullNode(arbol *A, posicion p);
elemento ReadNode(arbol *A, posicion p);

//OPERACIONES DE MODIFICACION
void NewRightSon(arbol *A, posicion p, elemento e);
void NewLeftSon(arbol *A, posicion p, elemento e);
void DeleteRightSon(arbol *A, posicion p, elemento e);
void DeleteLeftSon(arbol *A, posicion p, elemento e);
void DeleteNode(arbol *A, posicion p);
void ReplaceNode(arbol *A, posicion p, elemento e);

#endif