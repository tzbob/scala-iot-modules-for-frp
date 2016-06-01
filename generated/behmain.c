#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

#define PROP_EXAMPLE
// SW | FOLDP | MAP2 | CHANGES | SNAPSHOT | CONSTANT | PROP_EXAMPLE

#ifdef SW
#include "LMSBehaviorStartsWith1App.c"
int main() {
	uint8_t data = 5;
	x109(&data, sizeof(data)); // out: 5
	x109(&data, sizeof(data)); // out: 5
}
#endif


#ifdef FOLDP
#include "LMSBehaviorFoldp1App.c"
// => printf("res: %d\n",x??);

int main() {
	uint8_t data = 5;
	x111(&data, sizeof(data)); // out: 6
	x111(&data, sizeof(data)); // out: 11
}
#endif


#ifdef MAP2
#include "LMSBehaviorMap2App.c"
int main() {
	uint8_t data1 = 1;
	x192(&data1, sizeof(data1)); // out: 3
	uint8_t data2 = 2;	
	x208(&data2, sizeof(data2)); // out: 5
	x192(&data1, sizeof(data1)); // out: 6
	x208(&data2, sizeof(data2)); // out: 8
}
#endif


#ifdef CHANGES
#include "LMSBehaviorChangesApp.c"
int main() {
	//init_module1();
	//printf("behavior: %d\n",x47);
	uint8_t x = 1;
	x128(&x, sizeof(x)); // out: 12
	x128(&x, sizeof(x)); // out: 15
}
#endif


#ifdef SNAPSHOT
#include "LMSBehaviorSnapshotApp.c"
int main() {
	uint8_t data1 = 10;
	uint8_t data2 = 5;	
	x169(&data2, sizeof(data2));
	printf("top2\n");
	printf("behavior disconnected: %d\n",x60);
	printf("behavior at snapshot: %d\n",x86);
	x139(&data1, sizeof(data1));
	printf("top1\n");	
	printf("behavior disconnected: %d\n",x60);
	printf("behavior at snapshot: %d\n",x86);
	x169(&data2, sizeof(data2));
	printf("top2\n");
	printf("behavior disconnected: %d\n",x60);
	printf("behavior at snapshot: %d\n",x86);
}
#endif


#ifdef CONSTANT
#include "LMSBehaviorConstantApp.c"
int main() {
	//init_module1();
	//printf("behavior: %d\n",x47);
	uint8_t x = 2;
	x121(&x, sizeof(x)); // out: 5
	x = 4;
	x121(&x, sizeof(x)); // out: 7
}
#endif


#ifdef PROP_EXAMPLE
#include "LMSBehaviorPropagationExampleApp.c"
int main() {
	//init_module1();
	//printf("behavior: %d\n",x47);
	uint8_t x = 1;
	x144(&x, sizeof(x)); // out = b: 6
	x144(&x, sizeof(x)); // out = b: 8
}
#endif

