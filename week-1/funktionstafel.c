#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{ 

 for (int i = 1; i <= 100; i++) {
 
    unsigned long b = 1;
    for (unsigned long a = 1; a <= i ; a++) {
    b = b * a;
}
    printf("%10d | %40f | %40lu  \n",i*i,  (double) pow(2, i), (unsigned long) b);
    
}
return 0;
 }