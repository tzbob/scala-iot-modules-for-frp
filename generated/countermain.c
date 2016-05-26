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
	printf("Counter: %d\n", x93);

	printf("plus %d\n", data);
	x179(&data, sizeof(data));
	printf("Counter: %d\n", x93);

	data = 1;
	printf("minus %d\n", data);
	x193(&data, sizeof(data));
	printf("Counter: %d\n", x93);
	
	data = 30;
	printf("plus %d\n", data);
	x179(&data, sizeof(data));
	printf("Counter: %d\n", x93);

}

