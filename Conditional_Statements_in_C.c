#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {

	int x;
	scanf("%d",&x);

	if(x > 0 && x < 10) {
		switch(x){
			case 1: printf("one");
			break;
			case 2: printf("two");
			break;
			case 3: printf("three");
			break;
			case 4: printf("four");
			break;
			case 5: printf("five");
			break;
			case 6: printf("six");
			break;
			case 7: printf("seven");
			break;
			case 8: printf("eight");
			break;
			case 9: printf("nine");
			break;
		}
	}
	else {
		printf("Greater than 9");
	}

	return 0;

}
