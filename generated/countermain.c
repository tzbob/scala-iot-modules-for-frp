#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

#define APP2 // APP1 | APP2

#ifdef APP1
#include "Counter1App.c"
int main() {
	uint8_t data = 3;
	printf("Counter: %d\n", x117);

	printf("plus %d\n", data);
	x189(&data, sizeof(data));
	printf("Counter: %d\n", x117);

	data = 1;
	printf("minus %d\n", data);
	x206(&data, sizeof(data));
	printf("Counter: %d\n", x117);
	
	data = 30;
	printf("plus %d\n", data);
	x189(&data, sizeof(data));
	printf("Counter: %d\n", x117);
}
#endif

#ifdef APP2
#include "Counter2App.c"
int main() {
	uint8_t data = 3;
	printf("Counter: %d\n", x94);

	printf("plus %d\n", data);
	x183(&data, sizeof(data));
	printf("Counter: %d\n", x94);

	data = 1;
	printf("minus %d\n", data);
	x198(&data, sizeof(data));
	printf("Counter: %d\n", x94);
	
	data = 30;
	printf("plus %d\n", data);
	x183(&data, sizeof(data));
	printf("Counter: %d\n", x94);

}
#endif
