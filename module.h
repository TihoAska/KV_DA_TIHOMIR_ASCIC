struct element{
	char value;
	struct element* next;
	struct element* prev;
};

struct circular_buffer{
	int capacity;
	struct element* head;
	struct element* tail;
};

struct circular_buffer *init_buffer(int n);
void delete_buffer(struct circular_buffer *buffer);
void add_element(struct circular_buffer *buffer, char value);
void delete_element(struct circular_buffer *buffer, struct element *element);
void print_all(struct circular_buffer *buffer);
int is_empty(struct circular_buffer *buffer);
int is_full(struct circular_buffer *buffer);
