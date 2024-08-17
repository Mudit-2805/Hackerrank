#include <stdio.h>
#include <stdlib.h>

int main() {

	char str[50];

	fgets(str,sizeof(str),stdin);
	printf("Hello, World!\n");
	printf("%s",str);

	return 0;
}
