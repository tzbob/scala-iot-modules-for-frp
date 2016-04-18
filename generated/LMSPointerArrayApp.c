/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
void x9 (int* x0) {
x0[2] = 20;
int x2[5];
x2[0] = 1;
x2[1] = 2;
x2[2] = 3;
int x6 = x2[0];
printf("%d\n",x6);
};
void x23 () {
int x10[3];
x10[0] = 10;
x10[1] = 20;
x10[2] = 30;
int* x14 = x10;
x9(x14);
int x16 = x14[0];
printf("%d\n",x16);
int x18 = x14[1];
printf("%d\n",x18);
int x20 = x14[2];
printf("%d\n",x20);
}
/*****************************************
  End of C Generated Code                  
*******************************************/
