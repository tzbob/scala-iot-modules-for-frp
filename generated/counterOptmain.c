#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

#include "Counter1OptApp.c"
int main() {
	uint8_t data = 3;
	printf("Counter: %d\n", x134);

	printf("plus %d\n", data);
	x227(&data, sizeof(data));
	printf("Counter: %d\n", x134);

	data = 1;
	printf("minus %d\n", data);
	x283(&data, sizeof(data));
	printf("Counter: %d\n", x134);
	
	data = 30;
	printf("plus %d\n", data);
	x227(&data, sizeof(data));
	printf("Counter: %d\n", x134);

}
