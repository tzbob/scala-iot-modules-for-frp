#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

#define MERGE8
// MAP | FILTER | CONSTANT | 
// MERGE1 | MERGE2 | MERGE2B | MERGE3 | MERGE3B | MERGE4 | MERGE5 | 
// MERGE6A | MERGE6B | MERGE7 | MERGE8 | MERGE9A | MERGE9B | MERGE10 |
// DOUBLE_INPUT

#ifdef MAP
#include "LMSEventMapApp.c"
int main() {
	uint8_t data = 4;
	x96(&data, sizeof(data)); // out: 1
	data = 5;
	x96(&data, sizeof(data)); // out: 0
}
#endif

#ifdef FILTER
#include "LMSEventFilterApp.c"
int main() {
	uint8_t data = 4;
	x115(&data, sizeof(data)); // out: 5
	data = 5;
	x115(&data, sizeof(data));
}
#endif

#ifdef CONSTANT
#include "LMSEventConstantApp.c"
int main() {
	uint8_t data = 5;
	x95(&data, sizeof(data)); // out: 20
}
#endif

#ifdef MERGE1
#include "LMSEventMerge1App.c"
int main() {
	uint8_t data = 5;
	x166(&data, sizeof(data)); // out: 2
	x181(&data, sizeof(data)); // out: 4
	x181(&data, sizeof(data)); // out: 4
	x166(&data, sizeof(data)); // out: 2
}
#endif

#ifdef MERGE2
#include "LMSEventMerge2App.c"
int main() {
	uint8_t data = 5;
	x137(&data, sizeof(data)); // out: 6
}
#endif

#ifdef MERGE2B
#include "LMSEventMerge2bApp.c"
int main() {
	uint8_t data = 5;
	x142(&data, sizeof(data)); // out: 2
	data = 4;
	x142(&data, sizeof(data)); // out: 3
}
#endif

#ifdef MERGE3
#include "LMSEventMerge3App.c"
int main() {
	uint8_t data = 5;
	x180(&data, sizeof(data)); // out: 10
	data = 10;
	x196(&data, sizeof(data)); // out: 24
}
#endif

#ifdef MERGE3B
#include "LMSEventMerge3bApp.c"
int main() {
	uint8_t data = 5;
	x195(&data, sizeof(data)); // out: 30
	data = 10;
	x212(&data, sizeof(data)); // out: 64
}
#endif

#ifdef MERGE4
#include "LMSEventMerge4App.c"
int main() {
	uint8_t data = 5;
	x194(&data, sizeof(data)); // out: 16
}
#endif

#ifdef MERGE5
#include "LMSEventMerge5App.c"
int main() {
	uint8_t data = 5;
	x213(&data, sizeof(data)); // out: 6
}
#endif

#ifdef MERGE6A
#include "LMSEventMerge6aApp.c"
int main() {
	uint8_t data = 5;
	x189(&data, sizeof(data)); // out: 52
}
#endif

#ifdef MERGE6B
#include "LMSEventMerge6bApp.c"
int main() {
	uint8_t data = 5;
	x237(&data, sizeof(data)); // out: 6
}
#endif

#ifdef MERGE7
#include "LMSEventMerge7App.c"
int main() {
	uint8_t data = 5;
	x224(&data, sizeof(data)); // out: /
}
#endif

#ifdef MERGE8
#include "LMSEventMerge8App.c"
int main() {
	uint8_t data = 0;
	x275(&data, sizeof(data)); // out: 34
}
#endif

#ifdef MERGE9A
#include "LMSEventMerge9aApp.c"
int main() {
	uint8_t data = 2;
	x156(&data, sizeof(data)); // out: 12
}
#endif

#ifdef MERGE9B
#include "LMSEventMerge9bApp.c"
int main() {
	uint8_t data = 2;
	x156(&data, sizeof(data)); // out: 12
}
#endif

#ifdef MERGE10
#include "LMSEventMerge10App.c"
int main() {
	uint8_t data = 5;
	x202(&data, sizeof(data)); // out: 38
}
#endif

#ifdef DOUBLE_INPUT
#include "LMSEventDoubleInputApp.c"
int main() {
	uint8_t data = 5;
	x111(&data, sizeof(data));
	x139(&data, sizeof(data));
}
#endif

