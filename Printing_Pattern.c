#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	int x;
	scanf("%d", &x);

	for(int i =0; i < 2*x-1; i++) {
		for(int j=0; j < 2*x-1; j++) {
			int n;
			int y = (2*x-2)-i;
			int z = (2*x-2)-j;
			if(j < i) {
				if(j < x && j < y) {
					n = fabs(x-j);
				} else {
					n = fabs(x-y);
				}
			} else {
				if(i < x && i < z) {
					n = fabs(x-i);
				} else {
					n = fabs(x-z);
				} 
			}
			printf("%d ", n);
		}
		printf("\n");
	}

	return 0;
}
