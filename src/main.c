#include <stdio.h>
#include "../include/math.h"

int main() {
	int a,b,c;
	printf("Enter two numbers\n");
	scanf ("%d",&a);
	scanf("%d",&b);
	c = diff(a,b);
	printf("%d - %d = %d\n",a,b,c);

	return 0;
}

