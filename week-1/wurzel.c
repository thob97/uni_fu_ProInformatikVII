#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*float x = 1/2*(1+wurzel/1); 
for (int i=1;i < 2 ;i++)
{
x =1/2*(x+wurzel/x); 
}
*/

	double quadrat(double wurzel) {

		double x = 0.5*(1+wurzel);
		int i = 1;
		while (i<20)
		{
		x =0.5*(x+wurzel/x);
		i++;	
		}

}

	int main(int argc, char *argv[]) {
		
		double wurzel = atoi(argv[1]);

		printf("Wurzel:%f, mysqrt:%f \n",sqrt(wurzel),quadrat(wurzel));

}
