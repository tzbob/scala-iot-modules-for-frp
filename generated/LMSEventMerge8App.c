/* FILE: top1.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
bool filterfun5(int32_t);
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
bool x2 = true;
bool x3 = x2;
int32_t x42;
if (x3) {
bool x4 = true;
bool x5 = x4;
bool x6 = filterfun3(x1);
bool x7 = !x6;
if (x7) {
x4 = false;
} else {
}
bool x11 = x4;
int32_t x14;
if (x11) {
int32_t x12 = mapfun4(x1);
x14 = x12;
} else {
x14 = 0;
}
bool x15 = true;
bool x16 = x15;
bool x17 = filterfun5(x1);
bool x18 = !x17;
if (x18) {
x15 = false;
} else {
}
bool x22 = x15;
int32_t x25;
if (x22) {
int32_t x23 = mapfun6(x1);
x25 = x23;
} else {
x25 = 0;
}
bool x26 = !x11;
bool x27 = !x22;
bool x28 = x26 && x27;
if (x28) {
x2 = false;
} else {
}
bool x32 = x11 && x22;
int32_t x36;
if (x32) {
int32_t x33 = mergefun7(x14,x25);
x36 = x33;
} else {
int32_t x35;
if (x11) {
x35 = x14;
} else {
x35 = x25;
}
x36 = x35;
}
bool x37 = x2;
int32_t x40;
if (x37) {
int32_t x38 = mapfun8(x36);
x40 = x38;
} else {
x40 = 0;
}
x42 = x40;
} else {
x42 = 0;
}
int32_t x43 = mapfun9(x0);
bool x44 = x2;
bool x46 = true;
bool x47 = x46;
bool x45 = !x44;
bool x48 = !x47;
bool x49 = x45 && x48;
if (x49) {
return;
} else {
}
bool x53 = x44 && x47;
int32_t x57;
if (x53) {
int32_t x54 = mergefun10(x42,x43);
x57 = x54;
} else {
int32_t x56;
if (x44) {
x56 = x42;
} else {
x56 = x43;
}
x57 = x56;
}
int32_t x58 = mapfun11(x57);
printf("%d\n",x58);
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
int32_t mapfun6(int32_t  x61) {
printf("%s\n",string("map6").c_str());
int32_t x63 = x61 * 2;
return x63;
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
int32_t mapfun9(int32_t  x65) {
printf("%s\n",string("map9").c_str());
int32_t x67 = x65 + 10;
return x67;
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
bool filterfun5(int32_t  x69) {
printf("%s\n",string("filter5").c_str());
bool x71 = x69 == 1;
return x71;
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
int32_t mapfun2(int32_t  x73) {
printf("%s\n",string("map2").c_str());
int32_t x75 = x73 + 1;
return x75;
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
int32_t mapfun8(int32_t  x77) {
printf("%s\n",string("map8").c_str());
int32_t x79 = x77 + 3;
return x79;
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
int32_t mapfun11(int32_t  x81) {
printf("%s\n",string("map11").c_str());
int32_t x83 = x81 * 2;
return x83;
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
int32_t mapfun4(int32_t  x85) {
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
bool filterfun3(int32_t  x88) {
printf("%s\n",string("filter3").c_str());
bool x90 = x88 == 1;
return x90;
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
int32_t mergefun7(int32_t  x92, int32_t  x93) {
printf("%s\n",string("merge7").c_str());
int32_t x95 = x92 + x93;
return x95;
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
int32_t mergefun10(int32_t  x97, int32_t  x98) {
printf("%s\n",string("merge10").c_str());
int32_t x100 = x97 + x98;
return x100;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
