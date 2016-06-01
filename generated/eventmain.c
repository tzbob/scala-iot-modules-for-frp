#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>


/*
#include "LMSEventMapApp.c"
int main() {
	uint8_t data = 4;
	x96(&data, sizeof(data)); // out: 1
	data = 5;
	x96(&data, sizeof(data)); // out: 0
}*/

/*
#include "LMSEventFilterApp.c"
int main() {
	uint8_t data = 4;
	x115(&data, sizeof(data)); // out: 5
	data = 5;
	x115(&data, sizeof(data));
}*/

/*
#include "LMSEventConstantApp.c"
int main() {
	uint8_t data = 5;
	x95(&data, sizeof(data)); // out: 20
}*/

/*
#include "LMSEventMerge1App.c"
int main() {
	uint8_t data = 5;
	x166(&data, sizeof(data)); // out: 2
	x181(&data, sizeof(data)); // out: 4
	x181(&data, sizeof(data)); // out: 4
	x166(&data, sizeof(data)); // out: 2
}*/

/*
#include "LMSEventMerge2App.c"
int main() {
	uint8_t data = 5;
	x137(&data, sizeof(data)); // out: 6
}*/

/*
#include "LMSEventMerge2bApp.c"
int main() {
	uint8_t data = 5;
	x142(&data, sizeof(data)); // out: 2
	data = 4;
	x142(&data, sizeof(data)); // out: 3
}*/

/*
#include "LMSEventMerge3App.c"
int main() {
	uint8_t data = 5;
	x180(&data, sizeof(data)); // out: 10
	data = 10;
	x196(&data, sizeof(data)); // out: 24
}*/

/*
#include "LMSEventMerge3bApp.c"
int main() {
	uint8_t data = 5;
	x195(&data, sizeof(data)); // out: 30
	data = 10;
	x212(&data, sizeof(data)); // out: 64
}*/

/*
#include "LMSEventMerge4App.c"
int main() {
	uint8_t data = 5;
	x194(&data, sizeof(data)); // out: 16
}*/

/*
#include "LMSEventMerge5App.c"
int main() {
	uint8_t data = 5;
	x213(&data, sizeof(data)); // out: 6
}*/

/*
#include "LMSEventMerge6aApp.c"
int main() {
	uint8_t data = 5;
	x189(&data, sizeof(data)); // out: 52
}*/

/*
#include "LMSEventMerge6bApp.c"
int main() {
	uint8_t data = 5;
	x237(&data, sizeof(data)); // out: 6
}*/

/*
#include "LMSEventMerge7App.c"
int main() {
	uint8_t data = 5;
	x224(&data, sizeof(data)); // out: /
}*/



#include "LMSEventMerge8App.c"
int main() {
	uint8_t data = 0;
	x275(&data, sizeof(data)); // out: 34
}

/*
#include "LMSEventMerge9aApp.c"
int main() {
	uint8_t data = 2;
	x156(&data, sizeof(data)); // out: 12
}*/

/*
#include "LMSEventMerge9bApp.c"
int main() {
	uint8_t data = 2;
	x156(&data, sizeof(data)); // out: 12
}*/

/*
#include "LMSEventMerge10App.c"
int main() {
	uint8_t data = 5;
	x202(&data, sizeof(data)); // out: 38
}*/

/*
#include "LMSEventDoubleInputApp.c"
int main() {
	uint8_t data = 5;
	x111(&data, sizeof(data));
	x139(&data, sizeof(data));
}*/

