#include <stdio.h>
int main()
{
	int A, B;
	scanf_s("%d %d", &A, &B);
	if (A < B)
		printf("<");
	else if (A > B)
		printf(">");
	else if (A == B)
		printf("==");
	return 0;
}