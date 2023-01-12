#include <stdio.h>
#include <stdlib.h>
#include "module.h"

int getchar(void);

int main(){
	int n;
	struct circular_buffer *buffer;

	printf("Unesi broj elemenata: ");
	scanf("%d", &n);

	printf("Tu sam ");

	buffer = init_buffer(n);
	printf("Tu sam ");

	add_element(buffer, '6');
	printf("Tu sam ");

	add_element(buffer, '7');
	printf("Tu sam ");

	print_all(buffer);
	printf("Tu sam ");

	return 0;
}
