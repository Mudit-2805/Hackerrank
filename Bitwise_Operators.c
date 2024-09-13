#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void bitwise(int n, int k) {
	
	int max_a = 0;
	int max_o = 0;
	int max_x = 0;
	int a,o,x;

	for(int i = 1; i < n; i++) {
		for(int j = i+1; j < n+1; j++) {
			a = i & j;
			if(max_a < a && a < k) {
				max_a = a;
			}
			o = i | j;
			if(max_o < o && o < k) {
				max_o = o;
			}
			x = i ^ j;
			if(max_x < x && x < k) {
				max_x = x;
			}
		}
	}

	printf("%d\n%d\n%d\n", max_a, max_o, max_x);
}



int main() {
	int n,k;
	scanf("%d %d", &n ,&k);

	bitwise(n,k);

	return 0;
}
