/* FILE: top1.c */
void top1();
int32_t inputfun2();
void top2();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t mergefun5(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
void top1() {
int32_t x0 = inputfun1();
int32_t x1 = mapfun6(x0);
printf("%d\n",x1);
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: inputfun2.c */
void top1();
int32_t inputfun2();
void top2();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t mergefun5(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t inputfun2() {
return 10;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: top2.c */
void top1();
int32_t inputfun2();
void top2();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t mergefun5(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
void top2() {
int32_t x4 = inputfun2();
int32_t x5 = constantfun4(x4);
bool x6 = true;
bool x7 = x6;
bool x9 = true;
bool x10 = x9;
bool x8 = !x7;
bool x11 = !x10;
bool x12 = x8 && x11;
if (x12) {
return;
} else {
}
bool x16 = x7 && x10;
int32_t x20;
if (x16) {
int32_t x17 = mergefun5(x4,x5);
x20 = x17;
} else {
int32_t x19;
if (x7) {
x19 = x4;
} else {
x19 = x5;
}
x20 = x19;
}
int32_t x21 = mapfun6(x20);
printf("%d\n",x21);
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: inputfun1.c */
void top1();
int32_t inputfun2();
void top2();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t mergefun5(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t inputfun1() {
return 5;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun6.c */
void top1();
int32_t inputfun2();
void top2();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t mergefun5(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun6(int32_t  x24) {
int32_t x25 = x24 * 2;
return x25;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun4.c */
void top1();
int32_t inputfun2();
void top2();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t mergefun5(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t constantfun4(int32_t  x26) {
return 2;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mergefun5.c */
void top1();
int32_t inputfun2();
void top2();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t mergefun5(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mergefun5(int32_t  x27, int32_t  x28) {
int32_t x29 = x27 + x28;
return x29;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
