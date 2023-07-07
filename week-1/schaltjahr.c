#include <stdio.h>
#include <stdlib.h>
int main(int argc , char *argv[])
{ 
 const int jahr = atoi (argv[1]);
 
 if (jahr % 400 == 0 || (jahr % 4 == 0 && jahr % 100 != 0)) { printf("%d ist ein Schaltjahr\n", jahr); } 
 
 else { printf("%d ist kein Schaltjahr\n", jahr); } 
 

 }
