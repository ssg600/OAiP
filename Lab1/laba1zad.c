#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(int argc, char *argv[])
{

int x,a;
printf("Vvedite peremennuy: ");
scanf("%d", &x);
a=16*(pow(x,1));
printf("Rezultat: %d", a);
}