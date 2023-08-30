#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a =0;
	int isqut = 0;
	while (1) {
	printf("请输入一个整数：");
	scanf("%d", &a);
	test(a);
	printf("\n是否退出,退出填1：");
	scanf("%d", &isqut);
	if (isqut == 1)
		break;
	}
	return 0;
}