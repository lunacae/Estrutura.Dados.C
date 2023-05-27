#include "ListInt.h"
#include <stdio.h>
#include <stdlib.h>

Node* Add(int num, Node *lista)
{
	if (lista == NULL)
	{
		Node* newNode = (Node*)malloc(sizeof(Node));
		lista = newNode;
		lista->num = num;
		lista->next = NULL;
	}
	else
	{
		Node* newNode = (Node*)malloc(sizeof(Node));
		newNode->num = num;
		newNode->next = lista;
		lista = newNode;
		return lista;
	}
}

Node* Remove(int num, Node* lista)
{
	return lista;
}

Node* InvertList(Node List, Node* lista)
{
	return lista;
}

void PrintList(Node* list)
{
	Node* listaNext = list;
	do
	{
		printf("%i", listaNext->num);
		listaNext = listaNext->next;
	} while (listaNext != NULL);
}