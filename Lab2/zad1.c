#include <stdio.h>

void main() {
	
	int r,b;
	printf ("Rad: ");
	scanf ("%d", &r);
	printf ("Weight and height: ");
	scanf ("%d", &b);
	printf ("Is it possible?");
	
	if (r*2>b*sqrt(2))
	printf ("\r\nYes");
	else
	printf ("\r\nNo");
	

}
