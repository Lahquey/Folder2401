/*You need pi and the radius of the circle. Multiply pi by te radius squared*/
//Let A be the the area 
// r be the radius 
// A=pi*r**2
// Lets test it 
/*#include <stdio.h>
#include <stdbool.h>
int r=5;
#include <math.h> 
double pie = M_PI;
int A = pie*r**2;
return A*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(){
	int r = 7;
	double A = M_PI*r*r;

	printf("The Area of a circle is : %.2f\n", A);

	return 0;


}

