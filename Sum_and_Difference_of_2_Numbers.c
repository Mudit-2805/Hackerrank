#include <stdio.h>
#include <stdlib.h>

int main () {

	int a,b;
	double x,y;
	
	scanf("%d %d %lf %lf", &a, &b, &x, &y);

	printf("%d %d\n", a+b, a-b);
	printf("%.1lf %.1lf\n", x+y, x-y);

	return 0;

}
