#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>


/*
#include "LMSEventMapApp.c"
int main() {
	uint8_t data = 4;
	top1(&data, sizeof(data)); // out: 1
	data = 5;
	top1(&data, sizeof(data)); // out: 0
}*/

/*
#include "LMSEventFilterApp.c"
int main() {
	uint8_t data = 4;
	top1(&data, sizeof(data)); // out: 5
	data = 5;
	top1(&data, sizeof(data));
}*/

/*
#include "LMSEventConstantApp.c"
int main() {
	uint8_t data = 5;
	top1(&data, sizeof(data)); // out: 20
}*/

/*
#include "LMSEventMerge1App.c"
int main() {
	uint8_t data = 5;
	top1(&data, sizeof(data)); // out: 2
	top3(&data, sizeof(data)); // out: 4
	top3(&data, sizeof(data)); // out: 4
	top1(&data, sizeof(data)); // out: 2
}*/

/*
#include "LMSEventMerge2App.c"
int main() {
	uint8_t data = 5;
	top1(&data, sizeof(data)); // out: 6
}*/

/*
#include "LMSEventMerge2bApp.c"
int main() {
	uint8_t data = 5;
	top1(&data, sizeof(data)); // out: 2
	data = 4;
	top1(&data, sizeof(data)); // out: 3
}*/

/*
#include "LMSEventMerge3App.c"
int main() {
	uint8_t data = 5;
	top1(&data, sizeof(data)); // out: 10
	data = 10;
	top2(&data, sizeof(data)); // out: 24
}*/

/*
#include "LMSEventMerge3bApp.c"
int main() {
	uint8_t data = 5;
	top1(&data, sizeof(data)); // out: 30
	data = 10;
	top2(&data, sizeof(data)); // out: 64
}*/

/*
#include "LMSEventMerge4App.c"
int main() {
	uint8_t data = 5;
	top1(&data, sizeof(data)); // out: 16
}*/

/*
#include "LMSEventMerge5App.c"
int main() {
	uint8_t data = 5;
	top1(&data, sizeof(data)); // out: 6
}*/

/*
#include "LMSEventMerge6aApp.c"
int main() {
	uint8_t data = 5;
	top1(&data, sizeof(data)); // out: 52
}*/

/*
#include "LMSEventMerge6bApp.c"
int main() {
	uint8_t data = 5;
	top1(&data, sizeof(data)); // out: 6
}*/

/*
#include "LMSEventMerge7App.c"
int main() {
	uint8_t data = 5;
	top1(&data, sizeof(data)); // out: /
}*/


#include "LMSEventMerge8App.c"
int main() {
	uint8_t data = 0;
	x272(&data, sizeof(data)); // out: 34
}

/*
#include "LMSEventMerge9aApp.c"
int main() {
	uint8_t data = 2;
	top1(&data, sizeof(data)); // out: 12
}*/

/*
#include "LMSEventMerge9bApp.c"
int main() {
	uint8_t data = 2;
	top1(&data, sizeof(data)); // out: 12
}*/

/*
#include "LMSEventMerge10App.c"
int main() {
	uint8_t data = 5;
	top1(&data, sizeof(data)); // out: 38
}*/

/*
#include "LMSEventDoubleInputApp.c"
int main() {
	uint8_t data = 5;
	top1(&data, sizeof(data));
	top2(&data, sizeof(data));
}*/

