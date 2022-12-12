typedef struct element{
	char value;
	struct circular_buffer* next;
	struct circular_buffer* prev;
}element;

typedef struct circular_buffer{
	int n;
	struct circular_buffer* head;
	struct circular_buffer* tail;

}circular_buffer;

void init_buffer(circular_buffer *buffer, int n);
void delete_buffer(circular_buffer *buffer);
void add_element(circular_buffer *buffer, char value);
void delete_element(circular_buffer *buffer, element element)
void print_all(circular_buffer *buffer);
int is_empty(circular_buffer *buffer);
int is_full(circular_buffer *buffer);
