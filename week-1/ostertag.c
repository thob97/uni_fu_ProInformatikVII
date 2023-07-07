#include <stdio.h>
#include <stdlib.h>
int main(int argc , char *argv[])
{ 

const int jahr = atoi (argv[1]) ;
int k = jahr / 100;
int m = 15 + (3*k + 3) / 4 - (8*k + 13) / 25;
int s = 2 - (3*k + 3) / 4;
int a = jahr % 19;
int d = (19*a + m) % 30;
int r = (d + a / 11) / 29;
int og = 21 + d - r ;
int sz = 7 - (jahr + jahr / 4 + s) % 7;
int oe = 7 - (og - sz) % 7;
int os = og + oe;

if (os <= 31) {printf("The easter date of the year %d is the March of %d \n",jahr,os);}
else {printf("The easter date of the year %d is the April of %d \n",jahr,(os-31));
}

}