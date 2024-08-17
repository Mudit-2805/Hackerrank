#include <stdio.h>
#include <stdlib.h>

int main () {

	char c;
	char s[25];
	char str[50];

	scanf("%c", &c);
	scanf("%s%*c", s);
	fgets(str,sizeof(str),stdin);

	printf("%c \n%s \n%s", c, s, str);

	return 0;

}
