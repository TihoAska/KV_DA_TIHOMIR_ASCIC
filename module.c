#include <stdio.h>
#include <module.h>

typedef struct element{
	char value;
	struct circular_buffer* next;
	struct circular_buffer* prev;
}element;

typedef struct circular_buffer{
	int n;
	struct element* head = NULL;
	struct element* tail = NULL;
}circular_buffer;


void init_buffer(circular_buffer *buffer, int n){
	buffer = (struct circular_buffer)malloc(n*sizeof(circular_buffer));
	if(buffer==NULL){
		printf("Neuspjesna inicijalizacija!");
	}
}


void delete_buffer(circular_buffer *buffer){
	free(buffer);
}


void add_element(circular_buffer *buffer, char value){

	if(buffer->head = NULL){
		struct element* prvi = (struct element*)malloc(sizeof(struct element*));
		prvi->value = value;
		prvi->next = prvi->prev = prvi;
		buffer->head->next = prvi;
		buffer->head->prev = prvi;
	}
	struct element* temp = (struct element*)malloc(sizeof(struct element*));

	struct element* zadnji = buffer->head->prev;

	temp->value = value;
	temp->next = buffer->head->next;
	buffer->head->prev = temp;
	temp->prev = zadnji;
	zadnji->next = temp;
	buffer->tail = temp;

}

void delete_element(circular_buffer *buffer, element *element){
	struct element* temp;
	struct element* aux;
	if(buffer == NULL){
		printf("Buffer je prazan!");
	}
	temp->next = element->next;
	temp->prev = element->prev;

}

void print_all(circular_buffer *buffer){

}

int is_empty(circular_buffer *buffer){

}

int is_full(circular_buffer *buffer){

}



























