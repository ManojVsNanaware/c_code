/*header file which includes declaration of printf() function*/
#include <stdio.h>

//////////////////////////////////////////////////////
//                                                  //
//[*]   followings are data definition statements   //
//      global variables                            //
//                                                  //
//////////////////////////////////////////////////////

char c = 'a';                   /* 1 byte signed character, used to store a character*/
unsigned char uc = 50;          /* 1 byte integer */

short si = -12;                 /* 2 bytes signed short integer */
unsigned short usi = 12;        /* 2 bytes unsigned short integer */

int i = -10000;                 /* 4 bytes signed integer */
unsigned int ui = 10000;        /* 4 bytes unsigned integer */

long li = -10000;               /* 4 bytes signed long integer */
unsigned long uli = 10000;      /* 4 bytes unsigned long integer */

long long lli = -1000000;       /* 8 bytes signed long integer */
long long ulli = 1000000;       /* 8 bytes unsigned long integer */

float f1 = 3.14;                /* 4 bytes single precision floating point value */
double f2 = 6.28;               /* 8 bytes Double precision floating point value */

//////////////////////////////////////////////////////
//                                                  //
//[*] followings are data manipulation statement    //
//                                                  //
//////////////////////////////////////////////////////

void main(){    

    //printing values 
    printf("signed char             : c   : %c\n",c);
    printf("unsigned char           : uc  : %hhu\n",uc);

    printf("short                   : si  : %hd\n",si);
    printf("unsigned short          : usi : %hu\n",usi);

    printf("integer                 : i   : %d\n",i);
    printf("unsigned integer        : ui  : %u\n",ui);

    printf("long                    : li  : %ld\n",li);
    printf("unsigned long integer   : uli : %lu\n",uli);

    printf("long long               : lli : %lld\n",lli);
    printf("unsigned long long      : ulli: %llu\n",ulli);


}