#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void update (int *x, int *y) {

	int a = *x;
	*x += *y;
	*y -= a;
	*y = fabs(*y);

}

int main () {
	
	int a,b;

	scanf("%d %d", &a, &b);

	int *x = &a;
	int *y = &b;

	update(x,y);

	printf("%d\n%d", a,b);

	return 0;

}
