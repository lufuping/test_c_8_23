#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a =0;
	int isqut = 0;
	while (1) {
	printf("������һ��������");
	scanf("%d", &a);
	test(a);
	printf("\n�Ƿ��˳�,�˳���1��");
	scanf("%d", &isqut);
	if (isqut == 1)
		break;
	}
	return 0;
}