#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

/*
#include "LMSBehaviorStartsWith1App.c"
int main() {
	init_module1();
	printf("behavior: %d\n",x41);
	uint8_t data = 5;	
	top1(&data, sizeof(data));
	printf("behavior: %d\n",x41);
}
*/

/*
#include "LMSBehaviorFoldp1App.c"
// => printf("res: %d\n",x??);

int main() {
	init_module1();
	printf("behavior: %d\n",x41);
	uint8_t data = 5;
	top1(&data, sizeof(data));
	printf("behavior: %d\n",x41);
	top1(&data, sizeof(data));
	printf("behavior: %d\n",x41);
}
*/

/*
#include "LMSBehaviorMap2App.c"
// => printf("res: %d\n",x??);

int main() {
	init_module1();
	printf("behavior: %d\n",x102);
	uint8_t data1 = 1;
	top1(&data1, sizeof(data1));
	printf("behavior: %d\n",x102);
	uint8_t data2 = 2;	
	top4(&data2, sizeof(data2));
	printf("behavior: %d\n",x102);
	top1(&data1, sizeof(data1));
	printf("behavior: %d\n",x102);
	top4(&data2, sizeof(data2));
	printf("behavior: %d\n",x102);	
}
*/


#include "LMSBehaviorChangesApp.c"
// => printf("res: %d\n",x??);

int main() {
	init_module1();
	printf("behavior: %d\n",x46);
	uint8_t x = 1;
	top1(&x, sizeof(x));
	printf("behavior: %d\n",x46);
	top1(&x, sizeof(x));
	printf("behavior: %d\n",x46);
}


/*
#include "LMSBehaviorSnapshotApp.c"
// => printf("res: %d\n",x??);

int main() {
	init_module1();

	printf("initial:\n");
	printf("behavior disconnected: %d\n",x58);
	printf("behavior at snapshot: %d\n",x80);
	uint8_t data1 = 10;
	uint8_t data2 = 5;	
	top3(&data2, sizeof(data2));
	printf("top2\n");
	printf("behavior disconnected: %d\n",x58);
	printf("behavior at snapshot: %d\n",x80);
	top1(&data1, sizeof(data1));
	printf("top1\n");	
	printf("behavior disconnected: %d\n",x58);
	printf("behavior at snapshot: %d\n",x80);
	top3(&data2, sizeof(data2));
	printf("top2\n");
	printf("behavior disconnected: %d\n",x58);
	printf("behavior at snapshot: %d\n",x80);
}
*/

