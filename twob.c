#define _CRT_SUCERE_NO_WARNINGS
#include <stdio.h>
void test(int n) {
	/*int arr[32];
	int i = 0;
	while (c) {
		int a = c % 2;
		arr[i] = a;
		i++;
		c /= 2;
	}
	printf("该整数的二进制数是：");
	for (i;i > 0;i--) {
		printf("%d",arr[i-1]);
	}*/
	if (n > 0) {
		test(n / 2);
		printf("%d",n % 2);
	}
}