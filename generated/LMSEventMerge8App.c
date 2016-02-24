/* FILE: top1.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
bool filterfun5(int32_t);
int32_t mapfun12(int32_t);
int32_t mapfun2(int32_t);
int32_t mapfun8(int32_t);
int32_t mapfun11(int32_t);
int32_t mapfun4(int32_t);
bool filterfun3(int32_t);
int32_t mergefun7(int32_t, int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
void top1() {
int32_t x0 = inputfun1();
int32_t x1 = mapfun2(x0);
int32_t  x2;
bool x3 = true;
bool x4 = x3;
if (x4) {
bool x5 = true;
bool x6 = x5;
bool x7 = filterfun3(x1);
bool x8 = !x7;
if (x8) {
x5 = false;
} else {
}
int32_t  x12;
bool x13 = x5;
if (x13) {
int32_t x14 = mapfun4(x1);
x12 = x14;
} else {
}
int32_t x18 = x12;
bool x19 = true;
bool x20 = x19;
bool x21 = filterfun5(x1);
bool x22 = !x21;
if (x22) {
x19 = false;
} else {
}
int32_t  x26;
bool x27 = x19;
if (x27) {
int32_t x28 = mapfun6(x1);
x26 = x28;
} else {
}
int32_t x32 = x26;
bool x33 = !x13;
bool x34 = !x27;
bool x35 = x33 && x34;
if (x35) {
x3 = false;
} else {
}
bool x39 = x13 && x27;
int32_t x43;
if (x39) {
int32_t x40 = mergefun7(x18,x32);
x43 = x40;
} else {
int32_t x42;
if (x13) {
x42 = x18;
} else {
x42 = x32;
}
x43 = x42;
}
int32_t  x44;
bool x45 = x3;
if (x45) {
int32_t x46 = mapfun8(x43);
x44 = x46;
} else {
}
int32_t x50 = x44;
x2 = x50;
} else {
}
int32_t x54 = x2;
int32_t x55 = mapfun9(x0);
bool x56 = x3;
bool x58 = true;
bool x59 = x58;
bool x57 = !x56;
bool x60 = !x59;
bool x61 = x57 && x60;
if (x61) {
return;
} else {
}
bool x65 = x56 && x59;
int32_t x69;
if (x65) {
int32_t x66 = mergefun10(x54,x55);
x69 = x66;
} else {
int32_t x68;
if (x56) {
x68 = x54;
} else {
x68 = x55;
}
x69 = x68;
}
int32_t x70 = mapfun11(x69);
printf("%d\n",x70);
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: inputfun1.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
bool filterfun5(int32_t);
int32_t mapfun12(int32_t);
int32_t mapfun2(int32_t);
int32_t mapfun8(int32_t);
int32_t mapfun11(int32_t);
int32_t mapfun4(int32_t);
bool filterfun3(int32_t);
int32_t mergefun7(int32_t, int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t inputfun1() {
return 2;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun6.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
bool filterfun5(int32_t);
int32_t mapfun12(int32_t);
int32_t mapfun2(int32_t);
int32_t mapfun8(int32_t);
int32_t mapfun11(int32_t);
int32_t mapfun4(int32_t);
bool filterfun3(int32_t);
int32_t mergefun7(int32_t, int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun6(int32_t  x73) {
printf("%s\n",string("map6").c_str());
int32_t x75 = x73 * 2;
return x75;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun9.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
bool filterfun5(int32_t);
int32_t mapfun12(int32_t);
int32_t mapfun2(int32_t);
int32_t mapfun8(int32_t);
int32_t mapfun11(int32_t);
int32_t mapfun4(int32_t);
bool filterfun3(int32_t);
int32_t mergefun7(int32_t, int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun9(int32_t  x77) {
printf("%s\n",string("map9").c_str());
int32_t x79 = x77 + 10;
return x79;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: filterfun5.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
bool filterfun5(int32_t);
int32_t mapfun12(int32_t);
int32_t mapfun2(int32_t);
int32_t mapfun8(int32_t);
int32_t mapfun11(int32_t);
int32_t mapfun4(int32_t);
bool filterfun3(int32_t);
int32_t mergefun7(int32_t, int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool filterfun5(int32_t  x81) {
printf("%s\n",string("filter5").c_str());
bool x83 = x81 == 1;
return x83;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun12.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
bool filterfun5(int32_t);
int32_t mapfun12(int32_t);
int32_t mapfun2(int32_t);
int32_t mapfun8(int32_t);
int32_t mapfun11(int32_t);
int32_t mapfun4(int32_t);
bool filterfun3(int32_t);
int32_t mergefun7(int32_t, int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun12(int32_t  x85) {
printf("%s\n",string("map12").c_str());
int32_t x87 = x85 * 2;
return x87;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun2.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
bool filterfun5(int32_t);
int32_t mapfun12(int32_t);
int32_t mapfun2(int32_t);
int32_t mapfun8(int32_t);
int32_t mapfun11(int32_t);
int32_t mapfun4(int32_t);
bool filterfun3(int32_t);
int32_t mergefun7(int32_t, int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun2(int32_t  x89) {
printf("%s\n",string("map2").c_str());
int32_t x91 = x89 + 1;
return x91;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun8.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
bool filterfun5(int32_t);
int32_t mapfun12(int32_t);
int32_t mapfun2(int32_t);
int32_t mapfun8(int32_t);
int32_t mapfun11(int32_t);
int32_t mapfun4(int32_t);
bool filterfun3(int32_t);
int32_t mergefun7(int32_t, int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun8(int32_t  x93) {
printf("%s\n",string("map8").c_str());
int32_t x95 = x93 + 3;
return x95;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun11.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
bool filterfun5(int32_t);
int32_t mapfun12(int32_t);
int32_t mapfun2(int32_t);
int32_t mapfun8(int32_t);
int32_t mapfun11(int32_t);
int32_t mapfun4(int32_t);
bool filterfun3(int32_t);
int32_t mergefun7(int32_t, int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun11(int32_t  x97) {
printf("%s\n",string("map11").c_str());
int32_t x99 = x97 * 2;
return x99;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun4.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
bool filterfun5(int32_t);
int32_t mapfun12(int32_t);
int32_t mapfun2(int32_t);
int32_t mapfun8(int32_t);
int32_t mapfun11(int32_t);
int32_t mapfun4(int32_t);
bool filterfun3(int32_t);
int32_t mergefun7(int32_t, int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun4(int32_t  x101) {
printf("%s\n",string("constant4").c_str());
return 2;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: filterfun3.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
bool filterfun5(int32_t);
int32_t mapfun12(int32_t);
int32_t mapfun2(int32_t);
int32_t mapfun8(int32_t);
int32_t mapfun11(int32_t);
int32_t mapfun4(int32_t);
bool filterfun3(int32_t);
int32_t mergefun7(int32_t, int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool filterfun3(int32_t  x104) {
printf("%s\n",string("filter3").c_str());
bool x106 = x104 == 1;
return x106;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mergefun7.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
bool filterfun5(int32_t);
int32_t mapfun12(int32_t);
int32_t mapfun2(int32_t);
int32_t mapfun8(int32_t);
int32_t mapfun11(int32_t);
int32_t mapfun4(int32_t);
bool filterfun3(int32_t);
int32_t mergefun7(int32_t, int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mergefun7(int32_t  x108, int32_t  x109) {
printf("%s\n",string("merge7").c_str());
int32_t x111 = x108 + x109;
return x111;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mergefun10.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
bool filterfun5(int32_t);
int32_t mapfun12(int32_t);
int32_t mapfun2(int32_t);
int32_t mapfun8(int32_t);
int32_t mapfun11(int32_t);
int32_t mapfun4(int32_t);
bool filterfun3(int32_t);
int32_t mergefun7(int32_t, int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mergefun10(int32_t  x113, int32_t  x114) {
printf("%s\n",string("merge10").c_str());
int32_t x116 = x113 + x114;
return x116;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
