#include<stdio.h>
#include<stdlib.h>

int main() {
	int x;
	scanf("%d",&x);

	int sum;
	sum = x%10 + (x%100)/10 + (x%1000)/100 + (x%10000)/1000 + x/10000;

	printf("%d",sum);

	return 0;
}
