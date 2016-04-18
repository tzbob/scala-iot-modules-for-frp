#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

#include "Counter1App.c"

int main() {
	uint8_t data = 3;
	printf("Counter: %d\n", x115);

	printf("plus %d\n", data);
	top1(&data, sizeof(data));
	printf("Counter: %d\n", x115);

	data = 1;
	printf("minus %d\n", data);
	top2(&data, sizeof(data));
	printf("Counter: %d\n", x115);
	
	data = 30;
	printf("plus %d\n", data);
	top1(&data, sizeof(data));
	printf("Counter: %d\n", x115);

}
