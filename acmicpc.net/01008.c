#include <stdio.h>
int main() {
	int A, B;
	scanf_s("%d %d", &A, &B);
	printf("%.9f", (double)A / B);
	return 0;
}