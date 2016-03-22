#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

/*#include "LMSBehaviorStartsWith1App.c"
int main() {
	printf("behavior: %d\n",x18);
	x26();
	printf("behavior: %d\n",x18);
}*/

/*
#include "LMSBehaviorFoldp1App.c"
// => printf("res: %d\n",x??);

int main() {
	printf("behavior: %d\n",x18);
	x28();
	printf("behavior: %d\n",x18);
	x28();
	printf("behavior: %d\n",x18);
}
*/

/*
#include "LMSBehaviorMap2App.c"
// => printf("res: %d\n",x??);

int main() {
	printf("behavior: %d\n",x59);
	x66();
	printf("behavior: %d\n",x59);
	x73();
	printf("behavior: %d\n",x59);
	x66();
	printf("behavior: %d\n",x59);
	x73();
	printf("behavior: %d\n",x59);	
}*/



#include "LMSBehaviorChangesApp.c"
// => printf("res: %d\n",x??);

int main() {
	x71();
	printf("behavior: %d\n",x46);
	int x = 1;
	x66((uint8_t*)&x, sizeof(x));
	printf("behavior: %d\n",x46);
	x66((uint8_t*)&x, sizeof(x));
	printf("behavior: %d\n",x46);
}

/*#include "LMSBehaviorSnapshotApp.c"
// => printf("res: %d\n",x??);

int main() {
	printf("behavior: %d\n",x34);
	x49();
	printf("behavior: %d\n",x34);
	x44();
	printf("behavior: %d\n",x34);
	x49();
	printf("behavior: %d\n",x34);
}*/

