#include<stdio.h>

void main()
{
	int s,n,g;
	n=10000*0.03;
	g=0;
	
	printf("Initial ammount - 10000 RUB.\n");
	while(s<=20000) {
		s+=n;
		g++;
	}
	printf("Later ");
	printf("%d", g);
	printf(" years, the ammount will double.");
}
