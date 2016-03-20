#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

using namespace std;

/*#include "LMSBehaviorStartsWith1App.c"
int main() {
	printf("behavior: %d\n",x18);
	x26();
	printf("behavior: %d\n",x18);
}*/

/*#include "LMSBehaviorFoldp1App.c"
// => printf("res: %d\n",x??);

int main() {
	printf("behavior: %d\n",x18);
	x28();
	printf("behavior: %d\n",x18);
	x28();
	printf("behavior: %d\n",x18);
}*/

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
	printf("behavior: %d\n",x23);
	x33();
	printf("behavior: %d\n",x23);
	x33();
	printf("behavior: %d\n",x23);
	int x[3] = {10, 3,2};
	x40(x);
	printf("%d\n",*x);
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

