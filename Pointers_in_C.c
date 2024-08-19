#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void update (int *x, int *y) {

	*x += *y;
	*y -= *x;
	*y = fabs(*y);

int main () {
	
	int a,b;

	scanf("%d %d", &a, &b);

	int *x, *y = &a, &b;

	
