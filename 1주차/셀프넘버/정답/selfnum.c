#include <stdio.h>
/*셀프넘버가 아닌 수(생성자)를 구하여, 연산자를 이용해 인덱스를 출력*/
int d[10001];	//셀프 넘버의 유무를 저장할 배열

int dn(int num) {
	int res = num;
	if (num >= 10000) {
		res += num / 10000;
		num %= 10000;
	}
	if (num >= 1000) {
		res += num / 100;
		num %= 10000;
	}
	if (num >= 100) {
		res += num / 100;
		num %= 100;
	}
	if (num >= 10) {
		res += num / 10;
		num %= 10;
	}
	return res += num;
}

int main(void) {

	for (int i = 1; i <= 10000; i++) {
		d[dn(i)] = 1;
		if (!d[i])printf("%d\n", i);
	}
}