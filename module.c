#include <stdio.h>
#include <stdlib.h>
#include "module.h"

int last_action = 0;

struct circular_buffer *init_buffer(int n){
	struct circular_buffer *buffer = (struct circular_buffer*)malloc(n*sizeof(struct circular_buffer));
	buffer->head = NULL;
	buffer->tail = NULL;
	buffer->capacity = 0;

	if(buffer==NULL){
		printf("Neuspjesna inicijalizacija!");
	}
	return buffer;
}


void delete_buffer(struct circular_buffer *buffer){
	free(buffer);
}


void add_element(struct circular_buffer *buffer, char value){

	if(buffer->head = NULL){
		struct element* prvi = (struct element*)malloc(sizeof(struct element*));
		prvi->value = value;
		prvi->next = prvi->prev = prvi;
		buffer->head->next = prvi;
		buffer->head->prev = prvi;
	}
	else if (is_full(buffer) == 1){
		printf("Buffer je pun!");
		return;
	}

	struct element* temp = (struct element*)malloc(sizeof(struct element*));

	struct element* zadnji = buffer->head->prev;

	temp->value = value;
	temp->next = buffer->head->next;
	buffer->head->prev = temp;
	temp->prev = zadnji;
	zadnji->next = temp;
	buffer->tail->next = temp;

	last_action = 1;
	buffer->capacity++;
}

void delete_element(struct circular_buffer *buffer, struct element *element){

	if(is_empty(buffer) == 1){
		printf("Buffer je prazan!");
		return;
	}

	struct element* zadnji = buffer->head->prev;
	zadnji->prev->next = buffer->head->next;
	buffer->head->prev = zadnji->prev;
	free(zadnji);
	zadnji = NULL;

	last_action = 0;
	buffer->capacity--;
}

void print_all(struct circular_buffer *buffer){

	struct element* temp = buffer->head;

	while (buffer->head != buffer->tail){
		printf("%c", temp->value);
		temp = temp->next;
	}
}

int is_empty(struct circular_buffer *buffer){
	if((buffer->head == buffer->tail) && last_action == 0){
		return 1;
	}
	return 0;
}

int is_full(struct circular_buffer *buffer){
	if ((buffer->head == buffer->tail) && last_action == 1){
		return 1;
	}
	return 0;
}



























