#include <stdio.h>
int main() {
	printf("getchar 가 왜 쓰일까요?");
	int i;
	char c;

	scanf_s("%d", &i);

	scanf_s("%c", &c);

	printf("입력한 문자 : %c \n", c);
	return 0;
}
