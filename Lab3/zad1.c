#include<stdio.h>

void main()
{
	int s,n,g;
	n=10000*0.03;
	g=0;
	
	printf("Nachalnya summa - 10000 RUB.\n");
	while(s<=20000) {
		s+=n;
		g++;
	}
	printf("Spustya ");
	printf("%d", g);
	printf(" let, summa udvoitsya.");
}