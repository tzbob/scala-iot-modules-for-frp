#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>


/*
#include "Counter1App.c"
int main() {
	uint8_t data = 3;
	printf("Counter: %d\n", x116);

	printf("plus %d\n", data);
	x185(&data, sizeof(data));
	printf("Counter: %d\n", x116);

	data = 1;
	printf("minus %d\n", data);
	x201(&data, sizeof(data));
	printf("Counter: %d\n", x116);
	
	data = 30;
	printf("plus %d\n", data);
	x185(&data, sizeof(data));
	printf("Counter: %d\n", x116);
}*/


#include "Counter2App.c"
int main() {
	uint8_t data = 3;
	printf("Counter: %d\n", x94);

	printf("plus %d\n", data);
	x180(&data, sizeof(data));
	printf("Counter: %d\n", x94);

	data = 1;
	printf("minus %d\n", data);
	x194(&data, sizeof(data));
	printf("Counter: %d\n", x94);
	
	data = 30;
	printf("plus %d\n", data);
	x180(&data, sizeof(data));
	printf("Counter: %d\n", x94);

}

