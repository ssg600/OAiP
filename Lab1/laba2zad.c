#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void main(void) {
	float x,y,z,a,b,c,d,k,f,g,h,j;
	float e=exp(1.0);

	
	printf("x: ");
	scanf("%f", &x);
	
	printf("y: ");
	scanf("%f", &y);
	
	printf("z: ");
	scanf("%f", &z);
	
	printf("e: ");
	scanf("%f", &e);
	
	a=(9+(x-y)*2); 
	b=cbrt(a);
	c=(x*x+y*y+2);
	d=abs(x-y);
	k=(b/c);
	f=(e*exp(d));
	j=(tan(z)*tan(z));
	g=(j*3);
	h=(k-f*g);
	
	printf("%f",h);
}