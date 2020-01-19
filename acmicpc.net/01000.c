#include <stdio.h>
int main() {
	int A, B;
	scanf_s("%d %d", &A, &B);//scanf가 visual studio에서는 scanf_s로 서술해야함.
	printf("%d", A + B);
	return 0;
}