#include <stdio.h>

void main() {
	
	int n;
	printf ("Nomer mesyaca:");
	scanf ("%d", &n);
	if (n==1 || n==2 || n==12) printf("Zima");
	else if (n>=3 && n<=5) printf ("Vesna");
	else if (n>=6 && n<=8) printf("Leto");
	else printf ("Osen");
}