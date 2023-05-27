#pragma once
#include <stdio.h>

typedef struct node
{
	int num;
	struct node* next;
} Node;

Node* Add(int num, Node* lista);
Node* Remove(int num, Node* lista);
Node* InvertList(Node List, Node* lista);
void PrintList(Node* list);
