#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int main(void) {
 
	int a1, a2;
	int b1, b2, b3;
	int c;
 
	scanf("%d\n%d", &a1, &a2);
 
	b1 = ((a1%100)%10);
	b2 = ((a1%100)/10);
	b3 = (a1/100);
 
	c = a1 * a2;
 
	printf("%d\n%d\n%d\n%d", b1, b2, b3, c);
 
 
	return 0;
}