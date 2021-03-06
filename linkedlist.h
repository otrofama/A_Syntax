/*
	linkedlist.h
	Lista ligada para tabla de símbolos

	Olivares Castillo José Luis
	Pérez Escorza Iván

	23/Abril/2016

*/
#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct LinkedList List;
typedef struct Tupla Tupla;
typedef struct Nodo Nodo;
struct Tupla
{
	char* str;
	int token;
};
struct Nodo
{
	Tupla tupla;
	Nodo* next;
};
struct LinkedList
{
	Nodo* root;
	int num;
};
//definiciones de funciones que se emplean para crear la tabla de símbolos.
int insert_end(List* list, char *str, int token);
Nodo* crea_nodo(char* str, int token);
int search(char* str, List* list);
void init_list(List *list);
void print(List* list);
void error(char* msg);

#endif
