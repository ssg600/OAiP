#include <stdio.h>
#include <locale.h>

void main() {
	
	int a,b,c;
	
	printf ("a:");
	scanf ("%i", &a);
	printf ("b:");
	scanf ("%i", &b);
	printf ("c:");
	scanf ("%i", &c);
	
	if (a>0) a=1; 
	else a=0;
	if (b>0) b=1;
	else b=0;
	if (c>0) c=1;
	else c=0;
	
	printf ("Amount of positive number's: %i", a+b+c);
		
}
