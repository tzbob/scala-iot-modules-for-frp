#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

/*
#include "LMSBehaviorStartsWith1App.c"
int main() {
	uint8_t data = 5;
	top1(&data, sizeof(data)); // out: 5
	top1(&data, sizeof(data)); // out: 5
}*/

/*
#include "LMSBehaviorFoldp1App.c"
// => printf("res: %d\n",x??);

int main() {
	uint8_t data = 5;
	top1(&data, sizeof(data)); // out: 6
	top1(&data, sizeof(data)); // out: 11
}*/

/*
#include "LMSBehaviorMap2App.c"
int main() {
	uint8_t data1 = 1;
	top1(&data1, sizeof(data1)); // out: 3
	uint8_t data2 = 2;	
	top4(&data2, sizeof(data2)); // out: 5
	top1(&data1, sizeof(data1)); // out: 6
	top4(&data2, sizeof(data2)); // out: 8
}*/

/*
#include "LMSBehaviorChangesApp.c"
int main() {
	//init_module1();
	//printf("behavior: %d\n",x47);
	uint8_t x = 1;
	x105(&x, sizeof(x)); // out: 12
	x105(&x, sizeof(x)); // out: 15
}*/



#include "LMSBehaviorSnapshotApp.c"
int main() {
	uint8_t data1 = 10;
	uint8_t data2 = 5;	
	x150(&data2, sizeof(data2));
	printf("top2\n");
	printf("behavior disconnected: %d\n",x59);
	printf("behavior at snapshot: %d\n",x81);
	x121(&data1, sizeof(data1));
	printf("top1\n");	
	printf("behavior disconnected: %d\n",x59);
	printf("behavior at snapshot: %d\n",x81);
	x150(&data2, sizeof(data2));
	printf("top2\n");
	printf("behavior disconnected: %d\n",x59);
	printf("behavior at snapshot: %d\n",x81);
}

