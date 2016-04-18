/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
void x11 (int* x0) {
*x0 = 20;
int x2 = 5;
int x3 = x2;
int* x4 = &x3;
int x5 = *x4;
printf("%d\n",x5);
*x4 = 3;
int x8 = *x4;
printf("%d\n",x8);
};
void x23 () {
int x12 = 5;
int x13 = x12;
int* x14 = &x13;
printf("%s","Before call: ");
int x16 = *x14;
printf("%d\n",x16);
x11(x14);
printf("%s","After call: ");
int x20 = *x14;
printf("%d\n",x20);
}
/*****************************************
  End of C Generated Code                  
*******************************************/
