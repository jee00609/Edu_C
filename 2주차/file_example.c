#include <stdio.h>
#pragma warning(disable:4996)

int main(){

	FILE* fp = fopen("hello.txt", "w");    // hello.txt 파일을 쓰기 모드(w)로 열기.
										   // 파일 포인터를 반환

	fputs("Hello, world!", fp);   // 파일에 문자열 저장

	fclose(fp);    // 파일 포인터 닫기

	fp = fopen("hello.txt", "r");	// hello.txt 파일을 읽기 모드(r)로 열기.

	if (fp == NULL)	//fp 파일이 존재하지 않을경우
		perror("Error opening file");	// 오류가 발생하면 errno 에 값이 입력되고 perror 함수는 읽어낸 값을 바탕으로 알맞은 에러를 출력한다.

	else {
		fputc('x', fp);	//fp에 x를 쓸 경우

		if (ferror(fp)) //파일 입력 오류가 있을 경우 ferror 호출
			printf("Error Writing to myfile.txt\n");

		fclose(fp);
	}

	return 0;
}
