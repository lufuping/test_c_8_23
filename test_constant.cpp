#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "test_8_23.c"
enum  Pigs
{
	MPIG,
	LPIG,
	XLPIG
};
int main() {
	test();
	printf("%d",Pigs::MPIG);
	return 0;
}