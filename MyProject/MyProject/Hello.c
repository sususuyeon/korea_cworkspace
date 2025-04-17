#include <stdio.h>
/*
	프로그래명 : Hello~ World를 출력하는 프로그램
	작성자 : 조수연
*/
int main()
{
	//출력 함수 - printf()
	//문장의 끝은 필수적으로 세미콜론(;)으로 끝냄.
	//'\n'은 줄바꿈 특수문자임
	//문자 출력 - 쌍따옴표로 묶는다.
	//서식문자 - %s를 사용
	printf("Hello~ World!\n");
	printf("안녕~세계야!\n");
	printf("%s\n","Hello~ World!");
	//한 문자 - 홑따옴표 사용
	//서식문자 - %c를 사용함
	printf("C언어 입문 학점이 %c입니다.\n",'A');

	//숫자 - 정수(%d), 실수(%f) - 0.2 f앞 소수점 둘째자리까지 나옴 /ctrl + d복사
	printf("%d\n", 10);
	printf("%.2f\n", 2.54);
	printf("%d\n", 4 + 5);
	printf("%d\n", 4 - 5);
	printf("%d\n", 4 * 5);
	printf("%.1f\n", 4.0 / 5);

	return 0;
}