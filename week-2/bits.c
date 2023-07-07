#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned int sadd(unsigned int x){
    unsigned int counter = 0;
        while (x!=0) {
            x = x/2;
            counter ++; }
        return counter;
}

unsigned int ctz1(unsigned int x){
    unsigned int counter = 0;
        while (x!=0) {
            if (x%2==0) {
                counter ++;
                x = x - 2; }
            else {
                x --;}    
        }
        return counter;
}

unsigned int ctz(unsigned int x){
    unsigned int counter = 0;
        while (x!=0) {
            if (x%2==0) {
                counter ++;
                x = x / 2; }
            else {
                return counter;
        }
        }return counter;
}


unsigned int rev (unsigned int x){
    unsigned int counter = 0;
    unsigned int leng = 31;
        while (x!=0) {
            if (x%2==0) {
                leng --;
                x = x/2;}
            else {
                counter = counter + (pow(2,leng));
                leng --;
                x = x/2;}
        }
        return counter;
}  


unsigned int bswap (unsigned int x) {
    unsigned int a = (0xFF & x) << 16;
    unsigned int b = (0xFF00 & x) << 8;
    unsigned int c = (0xFF0000 & x) >> 8;
    unsigned int d = (0xFF000000 & x) >> 16;
    unsigned int counter = a|b|c|d;
    
    
    
}

 int main(int argc, char *argv[])
{ 
printf("Anzahl an Bits %u \n",sadd(atoi(argv[1]))); 
printf("die 2 passt %u mal in die Zahl \n", ctz1(atoi(argv[1])));
printf("%u mal durch 2 Teilbar \n", ctz(atoi(argv[1])));
printf("%u umgekehrte Zahl \n", rev(atoi(argv[1])));
printf("%u 8 byte umgekehrte Zahl \n", bswap(atoi(argv[1])));
}