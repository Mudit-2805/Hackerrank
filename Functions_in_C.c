#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int max(int a, int b, int c, int d) {

	int x = fmax(a,b);
	int y = fmax(c,d);

	return fmax(x,y);
}

int main () {

	int a,b,c,d;

	scanf("%d %d %d %d", &a, &b, &c, &d);

	printf("%d", max(a,b,c,d));

	return 0;

}
